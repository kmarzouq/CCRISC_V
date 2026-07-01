// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top__pch.h"
#include "Vsoc_top___024root.h"

void Vsoc_top___024root___eval_act(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vsoc_top___024root___nba_sequent__TOP__0(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs__v0;
    __Vdlyvdim0__soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs__v0;
    __Vdlyvval__soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs__v0;
    __Vdlyvset__soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs__v0 = 0;
    SData/*15:0*/ __Vdlyvdim0__soc_top__DOT__u_dmem__DOT__mem__v0;
    __Vdlyvdim0__soc_top__DOT__u_dmem__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__soc_top__DOT__u_dmem__DOT__mem__v0;
    __Vdlyvval__soc_top__DOT__u_dmem__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__soc_top__DOT__u_dmem__DOT__mem__v0;
    __Vdlyvset__soc_top__DOT__u_dmem__DOT__mem__v0 = 0;
    SData/*15:0*/ __Vdlyvdim0__soc_top__DOT__u_dmem__DOT__mem__v1;
    __Vdlyvdim0__soc_top__DOT__u_dmem__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__soc_top__DOT__u_dmem__DOT__mem__v1;
    __Vdlyvval__soc_top__DOT__u_dmem__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__soc_top__DOT__u_dmem__DOT__mem__v1;
    __Vdlyvset__soc_top__DOT__u_dmem__DOT__mem__v1 = 0;
    SData/*15:0*/ __Vdlyvdim0__soc_top__DOT__u_dmem__DOT__mem__v2;
    __Vdlyvdim0__soc_top__DOT__u_dmem__DOT__mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__soc_top__DOT__u_dmem__DOT__mem__v2;
    __Vdlyvval__soc_top__DOT__u_dmem__DOT__mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__soc_top__DOT__u_dmem__DOT__mem__v2;
    __Vdlyvset__soc_top__DOT__u_dmem__DOT__mem__v2 = 0;
    SData/*15:0*/ __Vdlyvdim0__soc_top__DOT__u_dmem__DOT__mem__v3;
    __Vdlyvdim0__soc_top__DOT__u_dmem__DOT__mem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__soc_top__DOT__u_dmem__DOT__mem__v3;
    __Vdlyvval__soc_top__DOT__u_dmem__DOT__mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__soc_top__DOT__u_dmem__DOT__mem__v3;
    __Vdlyvset__soc_top__DOT__u_dmem__DOT__mem__v3 = 0;
    // Body
    __Vdlyvset__soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs__v0 = 0U;
    __Vdlyvset__soc_top__DOT__u_dmem__DOT__mem__v0 = 0U;
    __Vdlyvset__soc_top__DOT__u_dmem__DOT__mem__v1 = 0U;
    __Vdlyvset__soc_top__DOT__u_dmem__DOT__mem__v2 = 0U;
    __Vdlyvset__soc_top__DOT__u_dmem__DOT__mem__v3 = 0U;
    if (((vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
          >> 7U) & (0U != (0x1fU & (vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                                    >> 8U))))) {
        vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT____Vlvbound_h41f78afe__0 
            = vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__wb_data;
        if ((0x1eU >= (0x1fU & (((vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                                  << 0x18U) | (vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                                               >> 8U)) 
                                - (IData)(1U))))) {
            __Vdlyvval__soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs__v0 
                = vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT____Vlvbound_h41f78afe__0;
            __Vdlyvset__soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs__v0 = 1U;
            __Vdlyvdim0__soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs__v0 
                = (0x1fU & (((vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                              << 0x18U) | (vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                                           >> 8U)) 
                            - (IData)(1U)));
        }
    }
    if (((vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
          >> 3U) & (IData)(vlSelf->soc_top__DOT__is_ram))) {
        if ((1U & (IData)(vlSelf->soc_top__DOT____Vcellinp__u_dmem__wstrb))) {
            __Vdlyvval__soc_top__DOT__u_dmem__DOT__mem__v0 
                = (0xffU & vlSelf->soc_top__DOT__dmem_wdata);
            __Vdlyvset__soc_top__DOT__u_dmem__DOT__mem__v0 = 1U;
            __Vdlyvdim0__soc_top__DOT__u_dmem__DOT__mem__v0 
                = (0xffffU & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]);
        }
        if ((2U & (IData)(vlSelf->soc_top__DOT____Vcellinp__u_dmem__wstrb))) {
            __Vdlyvval__soc_top__DOT__u_dmem__DOT__mem__v1 
                = (0xffU & (vlSelf->soc_top__DOT__dmem_wdata 
                            >> 8U));
            __Vdlyvset__soc_top__DOT__u_dmem__DOT__mem__v1 = 1U;
            __Vdlyvdim0__soc_top__DOT__u_dmem__DOT__mem__v1 
                = (0xffffU & ((IData)(1U) + vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]));
        }
        if ((4U & (IData)(vlSelf->soc_top__DOT____Vcellinp__u_dmem__wstrb))) {
            __Vdlyvval__soc_top__DOT__u_dmem__DOT__mem__v2 
                = (0xffU & (vlSelf->soc_top__DOT__dmem_wdata 
                            >> 0x10U));
            __Vdlyvset__soc_top__DOT__u_dmem__DOT__mem__v2 = 1U;
            __Vdlyvdim0__soc_top__DOT__u_dmem__DOT__mem__v2 
                = (0xffffU & ((IData)(2U) + vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]));
        }
        if ((8U & (IData)(vlSelf->soc_top__DOT____Vcellinp__u_dmem__wstrb))) {
            __Vdlyvval__soc_top__DOT__u_dmem__DOT__mem__v3 
                = (vlSelf->soc_top__DOT__dmem_wdata 
                   >> 0x18U);
            __Vdlyvset__soc_top__DOT__u_dmem__DOT__mem__v3 = 1U;
            __Vdlyvdim0__soc_top__DOT__u_dmem__DOT__mem__v3 
                = (0xffffU & ((IData)(3U) + vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]));
        }
    }
    if (__Vdlyvset__soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs__v0) {
        vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[__Vdlyvdim0__soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs__v0] 
            = __Vdlyvval__soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs__v0;
    }
    if (__Vdlyvset__soc_top__DOT__u_dmem__DOT__mem__v0) {
        vlSelf->soc_top__DOT__u_dmem__DOT__mem[__Vdlyvdim0__soc_top__DOT__u_dmem__DOT__mem__v0] 
            = __Vdlyvval__soc_top__DOT__u_dmem__DOT__mem__v0;
    }
    if (__Vdlyvset__soc_top__DOT__u_dmem__DOT__mem__v1) {
        vlSelf->soc_top__DOT__u_dmem__DOT__mem[__Vdlyvdim0__soc_top__DOT__u_dmem__DOT__mem__v1] 
            = __Vdlyvval__soc_top__DOT__u_dmem__DOT__mem__v1;
    }
    if (__Vdlyvset__soc_top__DOT__u_dmem__DOT__mem__v2) {
        vlSelf->soc_top__DOT__u_dmem__DOT__mem[__Vdlyvdim0__soc_top__DOT__u_dmem__DOT__mem__v2] 
            = __Vdlyvval__soc_top__DOT__u_dmem__DOT__mem__v2;
    }
    if (__Vdlyvset__soc_top__DOT__u_dmem__DOT__mem__v3) {
        vlSelf->soc_top__DOT__u_dmem__DOT__mem[__Vdlyvdim0__soc_top__DOT__u_dmem__DOT__mem__v3] 
            = __Vdlyvval__soc_top__DOT__u_dmem__DOT__mem__v3;
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> Vsoc_top__ConstPool__TABLE_h03c3adda_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vsoc_top__ConstPool__TABLE_he54a6100_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsoc_top__ConstPool__TABLE_h9b938d61_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vsoc_top__ConstPool__TABLE_ha17afc90_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsoc_top__ConstPool__TABLE_h7ca8bf9e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsoc_top__ConstPool__TABLE_ha96ed2bf_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsoc_top__ConstPool__TABLE_he4685dc5_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsoc_top__ConstPool__TABLE_hbd434190_0;

VL_INLINE_OPT void Vsoc_top___024root___nba_sequent__TOP__1(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    if (vlSelf->rst_n) {
        vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
            = ((0x7fU & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U]) 
               | (0x3f80U & ((0x2000U & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[3U] 
                                         << 0xdU)) 
                             | ((0x1f00U & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                            << 1U)) 
                                | ((vlSelf->soc_top__DOT__u_core__DOT__if_idex[3U] 
                                    & (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__reg_write)) 
                                   << 7U)))));
        vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
            = ((0x3f8fU & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U]) 
               | (0x3ff0U & ((((IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__mem_read)
                                ? 1U : ((IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__jump)
                                         ? 2U : 0U)) 
                              << 5U) | ((vlSelf->soc_top__DOT__u_core__DOT__if_idex[3U] 
                                         & (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__mem_read)) 
                                        << 4U))));
        vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
            = ((0x3ff0U & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U]) 
               | (0x3fffU & (((vlSelf->soc_top__DOT__u_core__DOT__if_idex[3U] 
                               & (IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__mem_write)) 
                              << 3U) | (7U & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                              >> 0xcU)))));
        vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[0U] 
            = vlSelf->soc_top__DOT__u_core__DOT__if_idex[1U];
        vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[1U] 
            = (IData)((((QData)((IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_result)) 
                        << 0x20U) | (QData)((IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs2_val))));
        vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U] 
            = (IData)(((((QData)((IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_result)) 
                         << 0x20U) | (QData)((IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs2_val))) 
                       >> 0x20U));
        if (vlSelf->soc_top__DOT__u_core__DOT__branch_taken) {
            vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                = (IData)((0x13ULL | ((QData)((IData)(
                                                      ((IData)(4U) 
                                                       + vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q))) 
                                      << 0x20U)));
            vlSelf->soc_top__DOT__u_core__DOT__if_idex[1U] 
                = (IData)(((0x13ULL | ((QData)((IData)(
                                                       ((IData)(4U) 
                                                        + vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q))) 
                                       << 0x20U)) >> 0x20U));
            vlSelf->soc_top__DOT__u_core__DOT__if_idex[2U] 
                = (IData)((QData)((IData)(vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q)));
            vlSelf->soc_top__DOT__u_core__DOT__if_idex[3U] 
                = (IData)(((QData)((IData)(vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q)) 
                           >> 0x20U));
        } else {
            vlSelf->soc_top__DOT__u_core__DOT__if_idex[1U] 
                = (IData)((((QData)((IData)(vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q)) 
                            << 0x20U) | (QData)((IData)(
                                                        ((IData)(4U) 
                                                         + vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q)))));
            vlSelf->soc_top__DOT__u_core__DOT__if_idex[2U] 
                = (IData)(((((QData)((IData)(vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q)) 
                             << 0x20U) | (QData)((IData)(
                                                         ((IData)(4U) 
                                                          + vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q)))) 
                           >> 0x20U));
            vlSelf->soc_top__DOT__u_core__DOT__if_idex[3U] = 1U;
            vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                = ((vlSelf->soc_top__DOT__u_imem__DOT__mem
                    [(0xffffU & ((IData)(3U) + vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q))] 
                    << 0x18U) | ((vlSelf->soc_top__DOT__u_imem__DOT__mem
                                  [(0xffffU & ((IData)(2U) 
                                               + vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q))] 
                                  << 0x10U) | ((vlSelf->soc_top__DOT__u_imem__DOT__mem
                                                [(0xffffU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q))] 
                                                << 8U) 
                                               | vlSelf->soc_top__DOT__u_imem__DOT__mem
                                               [(0xffffU 
                                                 & vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q)])));
        }
        vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q 
            = vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_next;
    } else {
        vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[0U] = 0U;
        vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[1U] = 0U;
        vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U] = 0U;
        vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] = 0U;
        vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] = 0U;
        vlSelf->soc_top__DOT__u_core__DOT__if_idex[1U] = 0U;
        vlSelf->soc_top__DOT__u_core__DOT__if_idex[2U] = 0U;
        vlSelf->soc_top__DOT__u_core__DOT__if_idex[3U] = 0U;
        vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q = 0U;
    }
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
    vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_hazard__DOT____VdfgTmp_h7f351477__0 
        = ((vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
            >> 7U) & (0U != (0x1fU & (vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                                      >> 8U))));
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
}

extern const VlUnpacked<CData/*0:0*/, 512> Vsoc_top__ConstPool__TABLE_h01624aed_0;

VL_INLINE_OPT void Vsoc_top___024root___nba_comb__TOP__0(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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

void Vsoc_top___024root___eval_nba(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsoc_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsoc_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsoc_top___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vsoc_top___024root___eval_triggers__act(Vsoc_top___024root* vlSelf);

bool Vsoc_top___024root___eval_phase__act(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsoc_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vsoc_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsoc_top___024root___eval_phase__nba(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsoc_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_top___024root___dump_triggers__nba(Vsoc_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_top___024root___dump_triggers__act(Vsoc_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vsoc_top___024root___eval(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vsoc_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/School/Documents/PersonalProj/CCRISC_V/soc/soc_top.sv", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vsoc_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/mnt/c/Users/School/Documents/PersonalProj/CCRISC_V/soc/soc_top.sv", 5, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vsoc_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vsoc_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsoc_top___024root___eval_debug_assertions(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
