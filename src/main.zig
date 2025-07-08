const std = @import("std");

// Memory-mapped I/O
const gpio_in = @as(*volatile u32, @ptrFromInt(0x20000000));
const uart_tx = @as(*volatile u8, @ptrFromInt(0x10000000));

fn uartTx(byte: u8) void {
    uart_tx.* = byte;
}

fn uartHex(value: u32) void {
    var shift: u8 = 32;
    while (shift > 0) {
        shift -= 4;
        const nib: u8 = @truncate((value >> @as(u5, @truncate(shift))) & 0xF);
        const ch: u8 = @intCast(if (nib < 10)
            '0' + nib
        else
            'A' + (nib - 10));
        uartTx(ch);
    }
    uartTx('\n');
}

pub fn main() void {
    while (true) {
        uartHex(gpio_in.*);
    }
}

// Entry point for bare-metal (required by linker script)
export fn _start() void {
    main();
}
