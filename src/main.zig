const std = @import("std");

// Memory-mapped register addresses
const UART_BASE = 0x20000000;
const UART_DATA = UART_BASE + 0x00;
const UART_STATUS = UART_BASE + 0x04;
const UART_CONTROL = UART_BASE + 0x08;
const UART_BAUD = UART_BASE + 0x0C;

const DATA_MEM_BASE = 0x10000000;
const CPU_DONE_ADDR = 0x100000FF;

const UART_STATUS_TX_EMPTY = 1 << 1;
const UART_STATUS_TX_BUSY = 1 << 2;

fn write_reg(addr: u32, value: u32) void {
    @as(*volatile u32, @ptrFromInt(addr)).* = value;
}

fn read_reg(addr: u32) u32 {
    return @as(*volatile u32, @ptrFromInt(addr)).*;
}

fn uart_init() void {
    // Set baud rate divisor for 9600 baud @ 50 MHz clock
    // BAUD_DIV = F_CPU / baud = 50_000_000 / 9600 ≈ 5208
    write_reg(UART_BAUD, 5208);
    // Enable UART
    write_reg(UART_CONTROL, 1);
    // Small delay for initialization
    var i: u32 = 0;
    while (i < 100) : (i += 1) {
        // empty loop for delay
    }
}

fn uart_putc(c: u8) void {
    // Wait until not busy
    while ((read_reg(UART_STATUS) & UART_STATUS_TX_BUSY) != 0) {}
    write_reg(UART_DATA, c);
}

fn uart_puts(s: [*:0]const u8) void {
    var i: usize = 0;
    while (s[i] != 0) : (i += 1) {
        uart_putc(s[i]);
    }
}

pub fn main() void {
    uart_init();
    uart_puts("Hello from RISC-V CPU!");
    uart_puts("The answer is 42.");
    write_reg(CPU_DONE_ADDR, 1);
    while (true) {
        // halt
    }
}

// Entry point for bare-metal (required by linker script)
export fn _start() void {
    main();
}
