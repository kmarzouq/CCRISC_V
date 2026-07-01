// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsoc_top__Syms.h"


VL_ATTR_COLD void Vsoc_top___024root__trace_init_sub__TOP__riscv_pkg__0(Vsoc_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsoc_top___024root__trace_init_sub__TOP__0(Vsoc_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("riscv_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vsoc_top___024root__trace_init_sub__TOP__riscv_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+98,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"tohost_wr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"tohost_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+102,0,"uart_wr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"uart_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("soc_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+108,0,"MEM_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+98,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"tohost_wr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"tohost_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+102,0,"uart_wr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"uart_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+109,0,"TOHOST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"UART_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"imem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"imem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"dmem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"dmem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"dmem_rdata_ram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"dmem_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+37,0,"dmem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"is_tohost",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"is_uart",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"is_ram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+98,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"imem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"imem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"dmem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"dmem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"dmem_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+37,0,"dmem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"dmem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+41,0,"if_idex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 96,0);
    tracep->declArray(c+45,0,"idex_memwb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 109,0);
    tracep->declBit(c+87,0,"branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"branch_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"memwb_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+89,0,"memwb_wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+50,0,"memwb_reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_idex", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+98,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+41,0,"f",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 96,0);
    tracep->declBus(c+49,0,"memwb_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+89,0,"memwb_wb_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+50,0,"memwb_reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"branch_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"branch_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+45,0,"d",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 109,0);
    tracep->declBus(c+51,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+52,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+53,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+54,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+55,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+61,0,"alu_asel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+62,0,"alu_bsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"imm_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+64,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+65,0,"forward_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"forward_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"rs1_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"rs2_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"alu_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"alu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+95,0,"cond_true",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"wb_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("u_alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+60,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+92,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+68,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+52,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+53,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+54,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+55,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+61,0,"alu_asel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+62,0,"alu_bsel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"imm_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+56,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+70,0,"is_alt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"op_is_rtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"op_uses_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_hazard", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+51,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+52,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+49,0,"memwb_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+50,0,"memwb_reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"forward_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"forward_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_imm_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+68,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"imm_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+64,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+98,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+52,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+104,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+89,0,"rd_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+50,0,"rd_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 31; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+1), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_if", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+98,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"branch_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"branch_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"imem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"imem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+41,0,"if_idex_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 96,0);
    tracep->declBus(c+111,0,"NOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"RESET_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"pc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_memwb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+45,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 109,0);
    tracep->declBus(c+34,0,"dmem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"dmem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"dmem_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+37,0,"dmem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"dmem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"memwb_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+89,0,"memwb_wb_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+50,0,"memwb_reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"byte_off",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+97,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"load_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_dmem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+108,0,"MEM_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+98,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+75,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+76,0,"addr_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"addr_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"addr_p3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"a0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+80,0,"a1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+81,0,"a2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+82,0,"a3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_imem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+108,0,"MEM_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+32,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+83,0,"addr_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"addr_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"addr_p3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsoc_top___024root__trace_init_sub__TOP__riscv_pkg__0(Vsoc_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root__trace_init_sub__TOP__riscv_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+114,0,"OPC_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+115,0,"OPC_MISC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+116,0,"OPC_OPIMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+117,0,"OPC_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+118,0,"OPC_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+119,0,"OPC_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+120,0,"OPC_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+121,0,"OPC_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+122,0,"OPC_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+123,0,"OPC_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+124,0,"OPC_SYSTEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
}

VL_ATTR_COLD void Vsoc_top___024root__trace_init_top(Vsoc_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root__trace_init_top\n"); );
    // Body
    Vsoc_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsoc_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsoc_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsoc_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsoc_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsoc_top___024root__trace_register(Vsoc_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vsoc_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vsoc_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vsoc_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vsoc_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsoc_top___024root__trace_const_0_sub_0(Vsoc_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsoc_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root__trace_const_0\n"); );
    // Init
    Vsoc_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_top___024root*>(voidSelf);
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsoc_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsoc_top___024root__trace_const_0_sub_0(Vsoc_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+108,(0x10000U),32);
    bufp->fullIData(oldp+109,(0x10000000U),32);
    bufp->fullIData(oldp+110,(0x10000004U),32);
    bufp->fullIData(oldp+111,(0x13U),32);
    bufp->fullIData(oldp+112,(0U),32);
    bufp->fullIData(oldp+113,(0x10U),32);
    bufp->fullCData(oldp+114,(3U),7);
    bufp->fullCData(oldp+115,(0xfU),7);
    bufp->fullCData(oldp+116,(0x13U),7);
    bufp->fullCData(oldp+117,(0x17U),7);
    bufp->fullCData(oldp+118,(0x23U),7);
    bufp->fullCData(oldp+119,(0x33U),7);
    bufp->fullCData(oldp+120,(0x37U),7);
    bufp->fullCData(oldp+121,(0x63U),7);
    bufp->fullCData(oldp+122,(0x67U),7);
    bufp->fullCData(oldp+123,(0x6fU),7);
    bufp->fullCData(oldp+124,(0x73U),7);
}

VL_ATTR_COLD void Vsoc_top___024root__trace_full_0_sub_0(Vsoc_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsoc_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root__trace_full_0\n"); );
    // Init
    Vsoc_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_top___024root*>(voidSelf);
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsoc_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsoc_top___024root__trace_full_0_sub_0(Vsoc_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q),32);
    bufp->fullIData(oldp+33,(((vlSelf->soc_top__DOT__u_imem__DOT__mem
                               [(0xffffU & ((IData)(3U) 
                                            + vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q))] 
                               << 0x18U) | ((vlSelf->soc_top__DOT__u_imem__DOT__mem
                                             [(0xffffU 
                                               & ((IData)(2U) 
                                                  + vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q))] 
                                             << 0x10U) 
                                            | ((vlSelf->soc_top__DOT__u_imem__DOT__mem
                                                [(0xffffU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q))] 
                                                << 8U) 
                                               | vlSelf->soc_top__DOT__u_imem__DOT__mem
                                               [(0xffffU 
                                                 & vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q)])))),32);
    bufp->fullIData(oldp+34,(vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]),32);
    bufp->fullIData(oldp+35,(vlSelf->soc_top__DOT__dmem_wdata),32);
    bufp->fullCData(oldp+36,(((8U & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U])
                               ? (0xfU & ((0U == (3U 
                                                  & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U]))
                                           ? ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]))
                                           : ((1U == 
                                               (3U 
                                                & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U]))
                                               ? ((IData)(3U) 
                                                  << 
                                                  (3U 
                                                   & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]))
                                               : 0xfU)))
                               : 0U)),4);
    bufp->fullBit(oldp+37,((1U & (vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                                  >> 3U))));
    bufp->fullBit(oldp+38,((0x10000000U == vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U])));
    bufp->fullBit(oldp+39,((0x10000004U == vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U])));
    bufp->fullBit(oldp+40,(vlSelf->soc_top__DOT__is_ram));
    bufp->fullWData(oldp+41,(vlSelf->soc_top__DOT__u_core__DOT__if_idex),97);
    bufp->fullWData(oldp+45,(vlSelf->soc_top__DOT__u_core__DOT__idex_memwb),110);
    bufp->fullCData(oldp+49,((0x1fU & (vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                                       >> 8U))),5);
    bufp->fullBit(oldp+50,((1U & (vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                                  >> 7U))));
    bufp->fullCData(oldp+51,((0x1fU & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+52,((0x1fU & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+53,((0x1fU & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                       >> 7U))),5);
    bufp->fullCData(oldp+54,((7U & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+55,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__reg_write));
    bufp->fullBit(oldp+56,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__mem_read));
    bufp->fullBit(oldp+57,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__mem_write));
    bufp->fullBit(oldp+58,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__branch));
    bufp->fullBit(oldp+59,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__jump));
    bufp->fullCData(oldp+60,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_op),4);
    bufp->fullCData(oldp+61,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_asel),2);
    bufp->fullBit(oldp+62,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_bsel));
    bufp->fullCData(oldp+63,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__imm_type),3);
    bufp->fullIData(oldp+64,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__imm),32);
    bufp->fullBit(oldp+65,(((IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_hazard__DOT____VdfgTmp_h7f351477__0) 
                            & (IData)(vlSelf->__VdfgTmp_hec284e9d__0))));
    bufp->fullBit(oldp+66,(((IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_hazard__DOT____VdfgTmp_h7f351477__0) 
                            & (IData)(vlSelf->__VdfgTmp_hec95b55a__0))));
    bufp->fullCData(oldp+67,(((IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__mem_read)
                               ? 1U : ((IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__jump)
                                        ? 2U : 0U))),2);
    bufp->fullIData(oldp+68,(vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U]),32);
    bufp->fullCData(oldp+69,((0x7fU & vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U])),7);
    bufp->fullBit(oldp+70,((1U & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+71,((0x33U == (0x7fU & vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U]))));
    bufp->fullBit(oldp+72,(((0x33U == (0x7fU & vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U])) 
                            | (0x13U == (0x7fU & vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U])))));
    bufp->fullCData(oldp+73,((3U & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U])),2);
    bufp->fullCData(oldp+74,(vlSelf->soc_top__DOT____Vcellinp__u_dmem__wstrb),4);
    bufp->fullBit(oldp+75,(((vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                             >> 3U) & (IData)(vlSelf->soc_top__DOT__is_ram))));
    bufp->fullIData(oldp+76,(((IData)(1U) + vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U])),32);
    bufp->fullIData(oldp+77,(((IData)(2U) + vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U])),32);
    bufp->fullIData(oldp+78,(((IData)(3U) + vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U])),32);
    bufp->fullSData(oldp+79,((0xffffU & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U])),16);
    bufp->fullSData(oldp+80,((0xffffU & ((IData)(1U) 
                                         + vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]))),16);
    bufp->fullSData(oldp+81,((0xffffU & ((IData)(2U) 
                                         + vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]))),16);
    bufp->fullSData(oldp+82,((0xffffU & ((IData)(3U) 
                                         + vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]))),16);
    bufp->fullIData(oldp+83,(((IData)(1U) + vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q)),32);
    bufp->fullIData(oldp+84,(((IData)(2U) + vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q)),32);
    bufp->fullIData(oldp+85,(((IData)(3U) + vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q)),32);
    bufp->fullIData(oldp+86,(vlSelf->soc_top__DOT__dmem_rdata_ram),32);
    bufp->fullBit(oldp+87,(vlSelf->soc_top__DOT__u_core__DOT__branch_taken));
    bufp->fullIData(oldp+88,((0xfffffffeU & vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_result)),32);
    bufp->fullIData(oldp+89,(vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__wb_data),32);
    bufp->fullIData(oldp+90,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs1_val),32);
    bufp->fullIData(oldp+91,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs2_val),32);
    bufp->fullIData(oldp+92,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_a),32);
    bufp->fullIData(oldp+93,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_b),32);
    bufp->fullIData(oldp+94,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_result),32);
    bufp->fullBit(oldp+95,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__cond_true));
    bufp->fullCData(oldp+96,((0x1fU & vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_b)),5);
    bufp->fullIData(oldp+97,(vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__shifted),32);
    bufp->fullBit(oldp+98,(vlSelf->clk));
    bufp->fullBit(oldp+99,(vlSelf->rst_n));
    bufp->fullBit(oldp+100,(vlSelf->tohost_wr));
    bufp->fullIData(oldp+101,(vlSelf->tohost_data),32);
    bufp->fullBit(oldp+102,(vlSelf->uart_wr));
    bufp->fullCData(oldp+103,(vlSelf->uart_data),8);
    bufp->fullIData(oldp+104,(((0U == (0x1fU & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                                >> 0xfU)))
                                ? 0U : (((vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                                          >> 7U) & (IData)(vlSelf->__VdfgTmp_hec284e9d__0))
                                         ? vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__wb_data
                                         : ((0x1eU 
                                             >= (0x1fU 
                                                 & (((vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                                      << 0x11U) 
                                                     | (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                                        >> 0xfU)) 
                                                    - (IData)(1U))))
                                             ? vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs
                                            [(0x1fU 
                                              & (((vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                                   << 0x11U) 
                                                  | (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                                     >> 0xfU)) 
                                                 - (IData)(1U)))]
                                             : 0U)))),32);
    bufp->fullIData(oldp+105,(((0U == (0x1fU & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                                >> 0x14U)))
                                ? 0U : (((vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                                          >> 7U) & (IData)(vlSelf->__VdfgTmp_hec95b55a__0))
                                         ? vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__wb_data
                                         : ((0x1eU 
                                             >= (0x1fU 
                                                 & (((vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                                      << 0xcU) 
                                                     | (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                                        >> 0x14U)) 
                                                    - (IData)(1U))))
                                             ? vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs
                                            [(0x1fU 
                                              & (((vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                                   << 0xcU) 
                                                  | (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                                     >> 0x14U)) 
                                                 - (IData)(1U)))]
                                             : 0U)))),32);
    bufp->fullIData(oldp+106,(((IData)(vlSelf->soc_top__DOT__u_core__DOT__branch_taken)
                                ? (0xfffffffeU & vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_result)
                                : ((IData)(4U) + vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q))),32);
    bufp->fullIData(oldp+107,(((4U & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U])
                                ? ((2U & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U])
                                    ? vlSelf->soc_top__DOT__dmem_rdata_ram
                                    : ((1U & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U])
                                        ? (0xffffU 
                                           & vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__shifted)
                                        : (0xffU & vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__shifted)))
                                : ((2U & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U])
                                    ? vlSelf->soc_top__DOT__dmem_rdata_ram
                                    : ((1U & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U])
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__shifted 
                                                           >> 0xfU)))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__shifted))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__shifted 
                                                           >> 7U)))) 
                                            << 8U) 
                                           | (0xffU 
                                              & vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__shifted)))))),32);
}
