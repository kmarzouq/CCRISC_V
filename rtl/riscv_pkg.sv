// Shared constants/types for the 3-stage RV32I core.
package riscv_pkg;

  // ---- RV32I opcodes (instr[6:0]) ----
  localparam logic [6:0] OPC_LOAD   = 7'b0000011;
  localparam logic [6:0] OPC_MISC   = 7'b0001111; // FENCE
  localparam logic [6:0] OPC_OPIMM  = 7'b0010011;
  localparam logic [6:0] OPC_AUIPC  = 7'b0010111;
  localparam logic [6:0] OPC_STORE  = 7'b0100011;
  localparam logic [6:0] OPC_OP     = 7'b0110011;
  localparam logic [6:0] OPC_LUI    = 7'b0110111;
  localparam logic [6:0] OPC_BRANCH = 7'b1100011;
  localparam logic [6:0] OPC_JALR   = 7'b1100111;
  localparam logic [6:0] OPC_JAL    = 7'b1101111;
  localparam logic [6:0] OPC_SYSTEM = 7'b1110011;

  // ---- ALU operation encoding ----
  typedef enum logic [3:0] {
    ALU_ADD, ALU_SUB, ALU_SLL, ALU_SLT, ALU_SLTU,
    ALU_XOR, ALU_SRL, ALU_SRA, ALU_OR, ALU_AND
  } alu_op_e;

  // ---- ALU operand-A source ----
  typedef enum logic [1:0] { ASEL_REG, ASEL_PC, ASEL_ZERO } alu_asel_e;
  // ---- ALU operand-B source ----
  typedef enum logic       { BSEL_REG, BSEL_IMM } alu_bsel_e;

  // ---- Immediate format ----
  typedef enum logic [2:0] { IMM_I, IMM_S, IMM_B, IMM_U, IMM_J } imm_type_e;

  // ---- Writeback source ----
  typedef enum logic [1:0] { WB_ALU, WB_MEM, WB_PC4 } wb_sel_e;

  // ---- Pipeline register: Stage1(IF) -> Stage2(ID/EX) ----
  typedef struct packed {
    logic        valid;
    logic [31:0] pc;
    logic [31:0] pc_plus4;
    logic [31:0] instr;
  } if_idex_reg_t;

  // ---- Pipeline register: Stage2(ID/EX) -> Stage3(MEM/WB) ----
  typedef struct packed {
    logic        valid;
    logic [4:0]  rd;
    logic        reg_write;
    wb_sel_e     wb_sel;
    logic        mem_read;
    logic        mem_write;
    logic [2:0]  funct3;     // memory width/signedness
    logic [31:0] alu_result; // load/store address or ALU result
    logic [31:0] store_data; // (possibly forwarded) rs2 value
    logic [31:0] pc_plus4;   // link value for JAL/JALR
  } idex_memwb_reg_t;

endpackage : riscv_pkg
