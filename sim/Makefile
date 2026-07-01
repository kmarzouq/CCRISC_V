# Builds the Verilator simulation binary for soc_top. The resulting
# executable is reused, unmodified, for every test program (see sim_main.cpp
# and README) -- only +HEXFILE changes between runs.
VERILATOR ?= verilator

ROOT_DIR  := $(abspath ..)
RTL_DIR   := $(ROOT_DIR)/rtl
SOC_DIR   := $(ROOT_DIR)/soc
BUILD_DIR := $(ROOT_DIR)/build
OBJ_DIR   := $(BUILD_DIR)/obj_dir

RTL_SOURCES := \
  $(RTL_DIR)/riscv_pkg.sv \
  $(RTL_DIR)/regfile.sv \
  $(RTL_DIR)/alu.sv \
  $(RTL_DIR)/imm_gen.sv \
  $(RTL_DIR)/decoder.sv \
  $(RTL_DIR)/hazard_unit.sv \
  $(RTL_DIR)/if_stage.sv \
  $(RTL_DIR)/idex_stage.sv \
  $(RTL_DIR)/memwb_stage.sv \
  $(RTL_DIR)/riscv_core.sv

SOC_SOURCES := \
  $(SOC_DIR)/imem.sv \
  $(SOC_DIR)/dmem.sv \
  $(SOC_DIR)/soc_top.sv

SIM_BIN := $(BUILD_DIR)/Vsoc_top
SIM_MAIN := $(abspath sim_main.cpp)

.PHONY: all clean

all: $(SIM_BIN)

$(SIM_BIN): $(RTL_SOURCES) $(SOC_SOURCES) sim_main.cpp
	mkdir -p $(BUILD_DIR)
	$(VERILATOR) --cc --exe --build --timing --trace -Wall \
	  -Wno-DECLFILENAME -Wno-UNUSEDSIGNAL -Wno-IMPORTSTAR -Wno-UNUSEDPARAM \
	  --top-module soc_top \
	  -Mdir $(OBJ_DIR) \
	  $(RTL_SOURCES) $(SOC_SOURCES) $(SIM_MAIN) \
	  -o $(SIM_BIN)

clean:
	rm -rf $(OBJ_DIR) $(SIM_BIN)
