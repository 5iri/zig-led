import cocotb
from cocotb.triggers import RisingEdge, ClockCycles
from cocotb.clock import Clock
import subprocess
import os
import logging
from pathlib import Path

logging.basicConfig(level=logging.DEBUG)
log = logging.getLogger(__name__)

DATA_MEM_BASE = 0x10000000
CPU_DONE_ADDR = DATA_MEM_BASE + 0xFF


def compile_zig_uart():
    """Compile main.zig to RISC-V binary and prepare hex file for instruction memory"""
    log.info("Compiling main.zig to RISC-V binary...")
    curr_dir = Path.cwd()
    build_dir = curr_dir / "build"
    build_dir.mkdir(exist_ok=True)
    zig_file = curr_dir / "src" / "main.zig"
    link_ld = curr_dir / "link.ld"
    elf_file = build_dir / "main.elf"
    bin_file = build_dir / "uart.bin"
    hex_file = build_dir / "instr_mem.hex"
    lss_file = build_dir / "uart.lss"
    try:
        # Build ELF
        subprocess.run([
            "zig", "build-exe",
            str(zig_file),
            "-target", "riscv32-freestanding-none",
            "-T", str(link_ld),
            "-O", "ReleaseSmall",
            "-fno-entry",
            "-mcpu=generic_rv32",
            f"-femit-bin={elf_file}"
        ], check=True)
        log.info(f"Built ELF: {elf_file}")
        # Convert ELF to binary
        subprocess.run([
            "riscv64-unknown-elf-objcopy",
            "-O", "binary",
            str(elf_file),
            str(bin_file)
        ], check=True)
        log.info(f"Converted ELF to binary: {bin_file}")
        # Truncate bin file to 2048 bytes
        subprocess.run([
            "truncate",
            "-s", "2048",
            str(bin_file)
        ], check=True)
        # Convert binary to Verilog hex format
        subprocess.run([
            "riscv64-unknown-elf-objcopy",
            "-I", "binary",
            "-O", "verilog",
            "--verilog-data-width=4",

            str(bin_file),
            str(hex_file)
        ], check=True)
        log.info(f"Converted binary to Verilog hex format: {hex_file}")
        # Generate LSS file for debugging
        subprocess.run([
            "riscv64-unknown-elf-objdump",
            "-D",
            "--visualize-jumps",
            "-t",
            "-S",
            "--source-comment=//",
            "-M", "no-aliases,numeric",
            str(elf_file)
        ], stdout=open(lss_file, "w"), check=True)
        log.info(f"Generated LSS file for debugging: {lss_file}")
                # Post-process hex file to correct little-endian byte order per 32-bit word
        try:
            with open(hex_file, "r+") as f:
                lines = f.readlines()
                new_lines = []
                for line in lines:
                    if line.startswith("@"):
                        new_lines.append(line)
                        continue
                    tokens = line.strip().split()
                    swapped_tokens = []
                    for tok in tokens:
                        if len(tok) != 8:
                            swapped_tokens.append(tok)
                            continue
                        # Reverse byte order within the 32-bit word
                        swapped_tokens.append(tok[6:8] + tok[4:6] + tok[2:4] + tok[0:2])
                    new_lines.append(" ".join(swapped_tokens) + "\n")
                # Rewrite file
                f.seek(0)
                f.writelines(new_lines)
                f.truncate()
        except Exception as e2:
            log.warning(f"Hex byte-swap failed: {e2}")
        return hex_file
    except subprocess.CalledProcessError as e:
        log.error(f"Compilation failed: {e}")
        raise

class UartMonitor:
    """Monitor the UART TX line and decode transmitted bytes."""
    def __init__(self, uart_tx, clk, baud_rate=115200):
        self.tx = uart_tx
        self.clk = clk
        self.baud_period_cycles = int(50_000_000 / baud_rate)
        self.received_bytes = []
        self.monitoring = True

    async def start_monitoring(self):
        while self.monitoring:
            # Wait for start bit (line goes low)
            while int(self.tx.value) == 1:
                await RisingEdge(self.clk)
                if not self.monitoring:
                    return
            # Wait 1.5 bit periods so we are in middle of first data bit
            await ClockCycles(self.clk, self.baud_period_cycles + self.baud_period_cycles // 2)
            rx_byte = 0
            for bit_num in range(8):
                rx_byte |= (int(self.tx.value) << bit_num)
                await ClockCycles(self.clk, self.baud_period_cycles)
            await ClockCycles(self.clk, self.baud_period_cycles)
            self.received_bytes.append(rx_byte)
            log.debug(f"UART byte 0x{rx_byte:02X} captured at cycle {len(self.received_bytes)}")

    def get_received_string(self):
        return ''.join(chr(b) if 32 <= b <= 126 else f'\\x{b:02x}' for b in self.received_bytes)

@cocotb.test()
async def test_uart_zig_hello(dut):
    """Test UART output from Zig RISC-V firmware"""
    clock = Clock(dut.clk, 20, units="ns")
    cocotb.start_soon(clock.start())

    # Reset
    dut.timer_interrupt.value = 0
    dut.software_interrupt.value = 0
    dut.external_interrupt.value = 0
    dut.rst.value = 1
    await ClockCycles(dut.clk, 5)
    dut.rst.value = 0

    uart_monitor = UartMonitor(dut.uart_tx, dut.clk, baud_rate=9600)
    cocotb.start_soon(uart_monitor.start_monitoring())

    # Wait for enough cycles for the program to run and UART to transmit
    # Wait long enough for the firmware to finish transmitting (~40 chars @ 115200 baud)
    # Wait up to ~30 ms of simulated time for firmware + UART
    await ClockCycles(dut.clk, 3_000_000)

    received = uart_monitor.get_received_string()
    print(f"UART received: {received}")

    # Check for expected output
    assert "Hello from RISC-V CPU!" in received
    assert "The answer is 42." in received

def runCocotbTests():
    from cocotb_test.simulator import run
    # Compile the Zig UART program
    hex_file = compile_zig_uart()
    # Find the project root (where synapse32/rtl exists)
    root_dir = os.getcwd()
    while not os.path.exists(os.path.join(root_dir, "synapse32/rtl")):
        if os.path.dirname(root_dir) == root_dir:
            raise FileNotFoundError("rtl directory not found in the current or parent directories.")
        root_dir = os.path.dirname(root_dir)
    print(f"Using RTL directory: {os.path.join(root_dir, 'synapse32/rtl')}")
    rtl_dir = os.path.join(root_dir, "synapse32/rtl")
    incl_dir = os.path.join(rtl_dir, "include")
    # Collect all Verilog/SystemVerilog sources
    sources = []
    for root, _, files in os.walk(rtl_dir):
        for file in files:
            if file.endswith(".v") or file.endswith(".sv"):
                sources.append(os.path.join(root, file))
    print("Verilog sources found:", sources)
    # Build directory for simulation
    sim_build_dir = os.path.abspath("sim_build/sim_build_uart_zig")
    if not os.path.exists(sim_build_dir):
        os.makedirs(sim_build_dir)
    from pathlib import Path
    waveform_dir = Path.cwd() / "waveforms"
    waveform_dir.mkdir(exist_ok=True)
    waveform_path = waveform_dir / "uart_zig_test.vcd"
    run(
        verilog_sources=sources,
        toplevel="top",
        module="test_uart_zig",
        testcase="test_uart_zig_hello",
        includes=[incl_dir],
        simulator="verilator",
        timescale="1ns/1ps",
        plus_args=[f"+dumpfile={waveform_path}"],
        defines=[f"INSTR_HEX_FILE=\"{hex_file}\""],
        sim_build=sim_build_dir,
        force_compile=True,
    )

if __name__ == "__main__":
    runCocotbTests()