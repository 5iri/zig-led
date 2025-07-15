# Makefile for building, disassembling, and generating hex for RISC-V Zig project

ZIG=zig
TARGET=riscv32-freestanding-none
LINKER=link.ld
SRC=src/main.zig
OUT=zig-out/bin/main
OBJDUMP=riscv64-unknown-elf-objdump
OBJCOPY=riscv64-unknown-elf-objcopy

all: $(OUT) program.lss program.hex

$(OUT): $(SRC) $(LINKER)
	$(ZIG) build-exe $(SRC) -target $(TARGET) -T$(LINKER) -O ReleaseSmall -fno-entry -femit-bin=$(OUT)

program.lss: $(OUT)
	$(OBJDUMP) -d -S $(OUT) > program.lss

program.hex: $(OUT)
	$(OBJCOPY) \
	  -I binary \
	  -O verilog \
	  $(OUT) \
	  program.hex
	
clean:
	rm -rf $(OUT_DIR) program.hex

.PHONY: all clean
