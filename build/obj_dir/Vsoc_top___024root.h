// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc_top.h for the primary calling header

#ifndef VERILATED_VSOC_TOP___024ROOT_H_
#define VERILATED_VSOC_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vsoc_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsoc_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_OUT8(tohost_wr,0,0);
    VL_OUT8(uart_wr,0,0);
    VL_OUT8(uart_data,7,0);
    CData/*0:0*/ soc_top__DOT__is_ram;
    CData/*3:0*/ soc_top__DOT____Vcellinp__u_dmem__wstrb;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__branch_taken;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_idex__DOT__reg_write;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_idex__DOT__mem_read;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_idex__DOT__mem_write;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_idex__DOT__branch;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_idex__DOT__jump;
    CData/*3:0*/ soc_top__DOT__u_core__DOT__u_idex__DOT__alu_op;
    CData/*1:0*/ soc_top__DOT__u_core__DOT__u_idex__DOT__alu_asel;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_idex__DOT__alu_bsel;
    CData/*2:0*/ soc_top__DOT__u_core__DOT__u_idex__DOT__imm_type;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_idex__DOT__cond_true;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_idex__DOT__u_hazard__DOT____VdfgTmp_h7f351477__0;
    CData/*0:0*/ __VdfgTmp_hec284e9d__0;
    CData/*0:0*/ __VdfgTmp_hec95b55a__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT(tohost_data,31,0);
    IData/*31:0*/ soc_top__DOT__dmem_wdata;
    IData/*31:0*/ soc_top__DOT__dmem_rdata_ram;
    IData/*31:0*/ soc_top__DOT__u_core__DOT__u_if__DOT__pc_q;
    IData/*31:0*/ soc_top__DOT__u_core__DOT__u_if__DOT__pc_next;
    IData/*31:0*/ soc_top__DOT__u_core__DOT__u_idex__DOT__imm;
    IData/*31:0*/ soc_top__DOT__u_core__DOT__u_idex__DOT__rs1_val;
    IData/*31:0*/ soc_top__DOT__u_core__DOT__u_idex__DOT__rs2_val;
    IData/*31:0*/ soc_top__DOT__u_core__DOT__u_idex__DOT__alu_a;
    IData/*31:0*/ soc_top__DOT__u_core__DOT__u_idex__DOT__alu_b;
    IData/*31:0*/ soc_top__DOT__u_core__DOT__u_idex__DOT__alu_result;
    IData/*31:0*/ soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT____Vlvbound_h41f78afe__0;
    IData/*31:0*/ soc_top__DOT__u_core__DOT__u_memwb__DOT__shifted;
    IData/*31:0*/ soc_top__DOT__u_core__DOT__u_memwb__DOT__wb_data;
    IData/*31:0*/ __VactIterCount;
    VlWide<4>/*96:0*/ soc_top__DOT__u_core__DOT__if_idex;
    VlWide<4>/*109:0*/ soc_top__DOT__u_core__DOT__idex_memwb;
    VlUnpacked<IData/*31:0*/, 31> soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs;
    VlUnpacked<CData/*7:0*/, 65536> soc_top__DOT__u_imem__DOT__mem;
    VlUnpacked<CData/*7:0*/, 65536> soc_top__DOT__u_dmem__DOT__mem;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    std::string soc_top__DOT__u_imem__DOT__unnamedblk1__DOT__hexfile;
    std::string soc_top__DOT__u_dmem__DOT__unnamedblk1__DOT__hexfile;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsoc_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsoc_top___024root(Vsoc_top__Syms* symsp, const char* v__name);
    ~Vsoc_top___024root();
    VL_UNCOPYABLE(Vsoc_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
