# Zig-LED / Synapse32 UART Demo

This repository is a **self-contained RISC-V SoC simulation** showcasing:

* **Synapse32** – a RV32I CPU core written in Verilog (`synapse32/rtl`).
* **UART peripheral** with memory-mapped registers.
* **Bare-metal firmware** written in **Zig** (`src/main.zig`).
* **Cocotb test-benches** that compile the firmware, drive the RTL with **Verilator**, and verify UART output.

---
## Directory Layout
```
├── src/                   # Zig firmware source
│   └── main.zig
├── synapse32/
│   ├── rtl/               # Verilog for CPU, memories, UART, etc.
│   └── tests/             # Assembly-based reference tests
├── test_uart_zig.py       # Main cocotb test for Zig firmware
├── build/                 # Auto-generated ELF / HEX / disassembly
├── waveforms/             # VCD/FST files dumped by the simulator
└── README.md
```

---
## Prerequisites

| Tool                            | Purpose                       |
|---------------------------------|-------------------------------|
| **Zig 0.12+**                   | Compile firmware              |
| **RISC-V GCC** (`riscv64-unknown-elf-*`) | objcopy / objdump utilities |
| **Python 3.10+** & **pip**      | Run cocotb tests              |
| **Verilator 5.x** *(or Icarus)* | RTL simulation                |
| **GTKWave** *(optional)*        | View VCD waveforms            |

Create and activate a virtual-env, then install Python deps:
```bash
python -m venv .venv
source .venv/bin/activate
pip install -r requirements.txt   # contains cocotb==1.9.2, cocotb-test, etc.
```

---
## Memory Map (excerpt)
| Address            | Register        |
|--------------------|-----------------|
| `0x2000_0000`      | UART_DATA       |
| `0x2000_0004`      | UART_STATUS     |
| `0x2000_0008`      | UART_CONTROL    |
| `0x2000_000C`      | UART_BAUD       |

UART status bits:
* `bit1` – TX FIFO empty
* `bit2` – TX busy

The firmware programs `UART_BAUD = 5208` which yields **9600 baud** for a 50 MHz system clock.

---
## Quick Start
Run the Zig firmware test:
```bash
python test_uart_zig.py
```
The script will:
1. **Compile** `src/main.zig` → ELF (RV32I).
2. **Convert** the ELF to a byte-swapped Verilog HEX file (`build/instr_mem.hex`).
3. **Launch** Verilator, load the HEX into instruction memory, and run the SoC for ~60 ms.
4. **Monitor** the UART TX line. You should see:
   ```
   UART received: Hello from RISC-V CPU!\r\nThe answer is 42.\r\n
   TEST PASSED
   ```
5. The waveform is saved to `waveforms/uart_zig_test.vcd`.

Open the waveform:
```bash
gtkwave waveforms/uart_zig_test.vcd &
```
Look at `uart_tx` and `clk` to inspect bit timing.
waveform is not opening since there is some issue with cocotb-tests.

---
## Reference Assembly Tests
Two assembly-level tests live in `synapse32/tests/system_tests/test_uart_cpu.py`:
```bash
python synapse32/tests/system_tests/test_uart_cpu.py
```
* **uart_hello_output** – Streams `"Hello UART!"` at 5 MHz baud (divisor 10).
* **uart_status_register** – Exercises the status register bits.

These are helpful for RTL bring-up or comparing against the Zig firmware.

---
## Build Internals
`test_uart_zig.py` contains the helper `compile_zig_uart()` that performs:
1. `zig build-exe` with `-mcpu=generic_rv32` (RV32I only).
2. `objcopy -O binary` → raw `.bin`.
3. `truncate -s 2048` → pad to 2 KiB.
4. `objcopy -O verilog --verilog-data-width=4` → byte-wide HEX.
5. **Byte-swap fix** – rewrites each 4-byte word from little-endian to big-endian so `$readmemh` loads correct instruction words.
6. `objdump -D` prints a disassembly to `build/uart.lss` for debugging.

---
## Troubleshooting
* **No UART output** – Ensure the HEX file’s first word matches the disassembly (`FF010113…`). Mis-ordered bytes will stall the CPU.
* **Timing issues** – The monitor assumes a 50 MHz clock. If you change `clk` period in `top.v`, update `baud_period_cycles` and test delay.
* **\x0d\x0a in output** – These are CR/LF (carriage-return, line-feed) characters sent by the firmware to terminate each line.

---
## License
All RTL and test code in this repo is released under the MIT license unless stated otherwise. Zig source in `src/` follows the same license.
