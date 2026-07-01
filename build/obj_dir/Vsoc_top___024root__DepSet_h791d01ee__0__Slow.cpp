// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top__pch.h"
#include "Vsoc_top___024root.h"

VL_ATTR_COLD void Vsoc_top___024root___eval_static(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vsoc_top___024root___eval_initial__TOP(Vsoc_top___024root* vlSelf);

VL_ATTR_COLD void Vsoc_top___024root___eval_initial(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_initial\n"); );
    // Body
    Vsoc_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vsoc_top___024root___eval_initial__TOP(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x453d2573U;
    __Vtemp_1[1U] = 0x5846494cU;
    __Vtemp_1[2U] = 0x4845U;
    if (VL_UNLIKELY(VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                                         vlSelf->soc_top__DOT__u_imem__DOT__unnamedblk1__DOT__hexfile))) {
        VL_READMEM_N(true, 8, 65536, 0, VL_CVT_PACK_STR_NN(vlSelf->soc_top__DOT__u_imem__DOT__unnamedblk1__DOT__hexfile)
                     ,  &(vlSelf->soc_top__DOT__u_imem__DOT__mem)
                     , 0, ~0ULL);
    }
    __Vtemp_2[0U] = 0x453d2573U;
    __Vtemp_2[1U] = 0x5846494cU;
    __Vtemp_2[2U] = 0x4845U;
    if (VL_UNLIKELY(VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_2), 
                                         vlSelf->soc_top__DOT__u_dmem__DOT__unnamedblk1__DOT__hexfile))) {
        VL_READMEM_N(true, 8, 65536, 0, VL_CVT_PACK_STR_NN(vlSelf->soc_top__DOT__u_dmem__DOT__unnamedblk1__DOT__hexfile)
                     ,  &(vlSelf->soc_top__DOT__u_dmem__DOT__mem)
                     , 0, ~0ULL);
    }
}

VL_ATTR_COLD void Vsoc_top___024root___eval_final(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_top___024root___dump_triggers__stl(Vsoc_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsoc_top___024root___eval_phase__stl(Vsoc_top___024root* vlSelf);

VL_ATTR_COLD void Vsoc_top___024root___eval_settle(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vsoc_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/School/Documents/PersonalProj/CCRISC_V/soc/soc_top.sv", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsoc_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_top___024root___dump_triggers__stl(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*0:0*/, 128> Vsoc_top__ConstPool__TABLE_h03c3adda_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vsoc_top__ConstPool__TABLE_he54a6100_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsoc_top__ConstPool__TABLE_h9b938d61_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vsoc_top__ConstPool__TABLE_ha17afc90_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsoc_top__ConstPool__TABLE_h7ca8bf9e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsoc_top__ConstPool__TABLE_ha96ed2bf_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsoc_top__ConstPool__TABLE_he4685dc5_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsoc_top__ConstPool__TABLE_hbd434190_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsoc_top__ConstPool__TABLE_h01624aed_0;

VL_ATTR_COLD void Vsoc_top___024root___stl_sequent__TOP__0(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->tohost_wr = ((vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                          >> 3U) & (0x10000000U == 
                                    vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]));
    vlSelf->uart_wr = ((vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                        >> 3U) & (0x10000004U == vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]));
    vlSelf->soc_top__DOT__is_ram = ((0x10000000U != 
                                     vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]) 
                                    & (0x10000004U 
                                       != vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]));
    vlSelf->soc_top__DOT__dmem_wdata = ((0U == (3U 
                                                & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U]))
                                         ? ((vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[1U] 
                                             << 0x18U) 
                                            | ((0xff0000U 
                                                & (vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[1U] 
                                                   << 0x10U)) 
                                               | ((0xff00U 
                                                   & (vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[1U] 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[1U]))))
                                         : ((1U == 
                                             (3U & 
                                              vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U]))
                                             ? ((vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[1U] 
                                                 << 0x10U) 
                                                | (0xffffU 
                                                   & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[1U]))
                                             : vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[1U]));
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_op 
        = (((0x33U == (0x7fU & vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U])) 
            | (0x13U == (0x7fU & vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U])))
            ? ((0x4000U & vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U])
                ? ((0x2000U & vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U])
                    ? ((0x1000U & vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U])
                        ? 9U : 8U) : ((0x1000U & vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U])
                                       ? ((0x40000000U 
                                           & vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U])
                                           ? 7U : 6U)
                                       : 5U)) : ((0x2000U 
                                                  & vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U])
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U])
                                                   ? 4U
                                                   : 3U)
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U])
                                                   ? 2U
                                                   : 
                                                  ((IData)(
                                                           (0x40000033U 
                                                            == 
                                                            (0x4000007fU 
                                                             & vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U])))
                                                    ? 1U
                                                    : 0U))))
            : 0U);
    vlSelf->__VdfgTmp_hec284e9d__0 = ((0x1fU & (vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                                                >> 8U)) 
                                      == (0x1fU & (
                                                   vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                                   >> 0xfU)));
    vlSelf->__VdfgTmp_hec95b55a__0 = ((0x1fU & (vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                                                >> 8U)) 
                                      == (0x1fU & (
                                                   vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                                   >> 0x14U)));
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_hazard__DOT____VdfgTmp_h7f351477__0 
        = ((vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
            >> 7U) & (0U != (0x1fU & (vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                                      >> 8U))));
    __Vtableidx2 = (0x7fU & vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U]);
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__reg_write 
        = Vsoc_top__ConstPool__TABLE_h03c3adda_0[__Vtableidx2];
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_asel 
        = Vsoc_top__ConstPool__TABLE_he54a6100_0[__Vtableidx2];
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_bsel 
        = Vsoc_top__ConstPool__TABLE_h9b938d61_0[__Vtableidx2];
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__imm_type 
        = Vsoc_top__ConstPool__TABLE_ha17afc90_0[__Vtableidx2];
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__mem_read 
        = Vsoc_top__ConstPool__TABLE_h7ca8bf9e_0[__Vtableidx2];
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__mem_write 
        = Vsoc_top__ConstPool__TABLE_ha96ed2bf_0[__Vtableidx2];
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__branch 
        = Vsoc_top__ConstPool__TABLE_he4685dc5_0[__Vtableidx2];
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__jump 
        = Vsoc_top__ConstPool__TABLE_hbd434190_0[__Vtableidx2];
    vlSelf->soc_top__DOT__dmem_rdata_ram = ((vlSelf->soc_top__DOT__u_dmem__DOT__mem
                                             [(0xffffU 
                                               & ((IData)(3U) 
                                                  + 
                                                  vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]))] 
                                             << 0x18U) 
                                            | ((vlSelf->soc_top__DOT__u_dmem__DOT__mem
                                                [(0xffffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]))] 
                                                << 0x10U) 
                                               | ((vlSelf->soc_top__DOT__u_dmem__DOT__mem
                                                   [
                                                   (0xffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]))] 
                                                   << 8U) 
                                                  | vlSelf->soc_top__DOT__u_dmem__DOT__mem
                                                  [
                                                  (0xffffU 
                                                   & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U])])));
    vlSelf->soc_top__DOT____Vcellinp__u_dmem__wstrb 
        = ((IData)(vlSelf->soc_top__DOT__is_ram) ? 
           ((8U & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U])
             ? (0xfU & ((0U == (3U & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U]))
                         ? ((IData)(1U) << (3U & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]))
                         : ((1U == (3U & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U]))
                             ? ((IData)(3U) << (3U 
                                                & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]))
                             : 0xfU))) : 0U) : 0U);
    vlSelf->tohost_data = vlSelf->soc_top__DOT__dmem_wdata;
    vlSelf->uart_data = (0xffU & vlSelf->soc_top__DOT__dmem_wdata);
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__imm 
        = ((4U & (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__imm_type))
            ? ((2U & (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__imm_type))
                ? 0U : ((1U & (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__imm_type))
                         ? 0U : (((- (IData)((vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                              >> 0x1fU))) 
                                  << 0x15U) | ((0x100000U 
                                                & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U]) 
                                                  | ((0x800U 
                                                      & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                                           >> 0x14U))))))))
            : ((2U & (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__imm_type))
                ? ((1U & (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__imm_type))
                    ? (0xfffff000U & vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U])
                    : (((- (IData)((vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                    >> 0x1fU))) << 0xdU) 
                       | ((0x1000U & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                      >> 0x13U)) | 
                          ((0x800U & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                      << 4U)) | ((0x7e0U 
                                                  & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                                       >> 7U)))))))
                : ((1U & (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__imm_type))
                    ? (((- (IData)((vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                          >> 0x14U)))));
    vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__shifted 
        = VL_SHIFTR_III(32,32,32, vlSelf->soc_top__DOT__dmem_rdata_ram, 
                        VL_SHIFTL_III(32,32,32, (3U 
                                                 & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]), 3U));
    vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__wb_data 
        = ((0U == (3U & (vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                         >> 5U))) ? vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]
            : ((1U == (3U & (vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                             >> 5U))) ? ((4U & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U])
                                          ? ((2U & 
                                              vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U])
                                              ? vlSelf->soc_top__DOT__dmem_rdata_ram
                                              : ((1U 
                                                  & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U])
                                                  ? 
                                                 (0xffffU 
                                                  & vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__shifted)
                                                  : 
                                                 (0xffU 
                                                  & vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__shifted)))
                                          : ((2U & 
                                              vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U])
                                              ? vlSelf->soc_top__DOT__dmem_rdata_ram
                                              : ((1U 
                                                  & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U])
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__shifted 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__shifted))
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__shifted 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__shifted)))))
                : ((2U == (3U & (vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                                 >> 5U))) ? vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[0U]
                    : vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U])));
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs1_val 
        = (((IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_hazard__DOT____VdfgTmp_h7f351477__0) 
            & (IData)(vlSelf->__VdfgTmp_hec284e9d__0))
            ? vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__wb_data
            : ((0U == (0x1fU & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                >> 0xfU))) ? 0U : (
                                                   ((vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                                                     >> 7U) 
                                                    & (IData)(vlSelf->__VdfgTmp_hec284e9d__0))
                                                    ? vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__wb_data
                                                    : 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (((vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                                           << 0x11U) 
                                                          | (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                                             >> 0xfU)) 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs
                                                    [
                                                    (0x1fU 
                                                     & (((vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                                          << 0x11U) 
                                                         | (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                                            >> 0xfU)) 
                                                        - (IData)(1U)))]
                                                     : 0U))));
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs2_val 
        = (((IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_hazard__DOT____VdfgTmp_h7f351477__0) 
            & (IData)(vlSelf->__VdfgTmp_hec95b55a__0))
            ? vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__wb_data
            : ((0U == (0x1fU & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                >> 0x14U))) ? 0U : 
               (((vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                  >> 7U) & (IData)(vlSelf->__VdfgTmp_hec95b55a__0))
                 ? vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__wb_data
                 : ((0x1eU >= (0x1fU & (((vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                          << 0xcU) 
                                         | (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                            >> 0x14U)) 
                                        - (IData)(1U))))
                     ? vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs
                    [(0x1fU & (((vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                 << 0xcU) | (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                             >> 0x14U)) 
                               - (IData)(1U)))] : 0U))));
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_a 
        = ((0U == (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_asel))
            ? vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs1_val
            : ((1U == (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_asel))
                ? vlSelf->soc_top__DOT__u_core__DOT__if_idex[2U]
                : ((2U == (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_asel))
                    ? 0U : vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs1_val)));
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_b 
        = ((IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_bsel)
            ? vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__imm
            : vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs2_val);
    __Vtableidx1 = (((vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs1_val 
                      == vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs2_val) 
                     << 8U) | (((vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs1_val 
                                 != vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs2_val) 
                                << 7U) | ((VL_LTS_III(32, vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs1_val, vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs2_val) 
                                           << 6U) | 
                                          ((VL_GTES_III(32, vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs1_val, vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs2_val) 
                                            << 5U) 
                                           | (((vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs1_val 
                                                < vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs2_val) 
                                               << 4U) 
                                              | (((vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs1_val 
                                                   >= vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs2_val) 
                                                  << 3U) 
                                                 | (7U 
                                                    & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                                       >> 0xcU))))))));
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__cond_true 
        = Vsoc_top__ConstPool__TABLE_h01624aed_0[__Vtableidx1];
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_result 
        = ((8U & (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_op))
            ? ((4U & (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_op))
                ? 0U : ((2U & (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_op))
                         ? 0U : ((1U & (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_op))
                                  ? (vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_a 
                                     & vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_b)
                                  : (vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_a 
                                     | vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_b))))
            : ((4U & (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_op))
                ? ((2U & (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_op))
                    ? ((1U & (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_op))
                        ? VL_SHIFTRS_III(32,32,5, vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_a, 
                                         (0x1fU & vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_b))
                        : (vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_a 
                           >> (0x1fU & vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_b)))
                    : ((1U & (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_op))
                        ? (vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_a 
                           ^ vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_b)
                        : (vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_a 
                           < vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_b)))
                : ((2U & (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_op))
                    ? ((1U & (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_op))
                        ? VL_LTS_III(32, vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_a, vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_b)
                        : (vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_a 
                           << (0x1fU & vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_b)))
                    : ((1U & (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_op))
                        ? (vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_a 
                           - vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_b)
                        : (vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_a 
                           + vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_b)))));
    vlSelf->soc_top__DOT__u_core__DOT__branch_taken 
        = (vlSelf->soc_top__DOT__u_core__DOT__if_idex[3U] 
           & (((IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__branch) 
               & (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__cond_true)) 
              | (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__jump)));
    vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_next 
        = ((IData)(vlSelf->soc_top__DOT__u_core__DOT__branch_taken)
            ? (0xfffffffeU & vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_result)
            : ((IData)(4U) + vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q));
}

VL_ATTR_COLD void Vsoc_top___024root___eval_stl(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vsoc_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vsoc_top___024root___eval_triggers__stl(Vsoc_top___024root* vlSelf);

VL_ATTR_COLD bool Vsoc_top___024root___eval_phase__stl(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsoc_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vsoc_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_top___024root___dump_triggers__act(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_top___024root___dump_triggers__nba(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsoc_top___024root___ctor_var_reset(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->tohost_wr = VL_RAND_RESET_I(1);
    vlSelf->tohost_data = VL_RAND_RESET_I(32);
    vlSelf->uart_wr = VL_RAND_RESET_I(1);
    vlSelf->uart_data = VL_RAND_RESET_I(8);
    vlSelf->soc_top__DOT__dmem_wdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__dmem_rdata_ram = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__is_ram = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT____Vcellinp__u_dmem__wstrb = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(97, vlSelf->soc_top__DOT__u_core__DOT__if_idex);
    VL_RAND_RESET_W(110, vlSelf->soc_top__DOT__u_core__DOT__idex_memwb);
    vlSelf->soc_top__DOT__u_core__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_asel = VL_RAND_RESET_I(2);
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_bsel = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__imm_type = VL_RAND_RESET_I(3);
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs1_val = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs2_val = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_a = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_b = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__cond_true = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT____Vlvbound_h41f78afe__0 = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_hazard__DOT____VdfgTmp_h7f351477__0 = 0;
    vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__shifted = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__wb_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->soc_top__DOT__u_imem__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->soc_top__DOT__u_dmem__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__VdfgTmp_hec284e9d__0 = 0;
    vlSelf->__VdfgTmp_hec95b55a__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
