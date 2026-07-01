# Top-level build: compile a RISC-V asm/C test with the real GNU
# toolchain, build the Verilator sim once, run the program on the RTL.
#
#   make sim                          # build (or rebuild) the simulator
#   make test TEST=tests/asm/add.S    # compile + run one test, dump VCD
#   make test-all                     # run every test in tests/asm, tests/c

CROSS_PREFIX ?= $(shell command -v riscv32-unknown-elf-gcc >/dev/null 2>&1 && echo riscv32-unknown-elf- || echo riscv64-unknown-elf-)
CC       := $(CROSS_PREFIX)gcc
OBJCOPY  := $(CROSS_PREFIX)objcopy

ARCH_FLAGS := -march=rv32i -mabi=ilp32
CFLAGS     := $(ARCH_FLAGS) -O2 -Wall -Wextra -nostdlib -nostartfiles -ffreestanding -fno-builtin -Isw/common
LDFLAGS    := -Wl,-T,sw/common/link.ld -nostdlib

BUILD_DIR := build
SIM_DIR   := sim
SIM_BIN   := $(BUILD_DIR)/Vsoc_top

.PHONY: all sim test test-all clean

all: sim

sim:
	$(MAKE) -C $(SIM_DIR)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

ifdef TEST
TEST_BASE := $(basename $(notdir $(TEST)))
TEST_ELF  := $(BUILD_DIR)/$(TEST_BASE).elf
TEST_HEX  := $(BUILD_DIR)/$(TEST_BASE).hex
TEST_VCD  := $(BUILD_DIR)/$(TEST_BASE).vcd
endif

test: sim $(BUILD_DIR)
	@test -n "$(TEST)" || (echo "usage: make test TEST=tests/asm/foo.S"; exit 1)
	$(CC) $(CFLAGS) $(LDFLAGS) sw/common/crt0.S $(TEST) -o $(TEST_ELF)
	$(OBJCOPY) -O verilog $(TEST_ELF) $(TEST_HEX)
	$(SIM_BIN) +HEXFILE=$(TEST_HEX) +VCD=$(TEST_VCD)

test-all: sim $(BUILD_DIR)
	@pass=0; fail=0; \
	for f in tests/asm/*.S tests/c/*.c; do \
	  echo "=== $$f ==="; \
	  $(MAKE) --no-print-directory test TEST=$$f; \
	  if [ $$? -eq 0 ]; then pass=$$((pass+1)); else fail=$$((fail+1)); fi; \
	done; \
	echo "---"; echo "$$pass passed, $$fail failed"; \
	[ $$fail -eq 0 ]

clean:
	rm -rf $(BUILD_DIR)
	$(MAKE) -C $(SIM_DIR) clean
