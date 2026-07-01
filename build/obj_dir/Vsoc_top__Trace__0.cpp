// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsoc_top__Syms.h"


void Vsoc_top___024root__trace_chg_0_sub_0(Vsoc_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsoc_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root__trace_chg_0\n"); );
    // Init
    Vsoc_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_top___024root*>(voidSelf);
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsoc_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsoc_top___024root__trace_chg_0_sub_0(Vsoc_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_regfile__DOT__regs[30]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+31,(vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q),32);
        bufp->chgIData(oldp+32,(((vlSelf->soc_top__DOT__u_imem__DOT__mem
                                  [(0xffffU & ((IData)(3U) 
                                               + vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q))] 
                                  << 0x18U) | ((vlSelf->soc_top__DOT__u_imem__DOT__mem
                                                [(0xffffU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q))] 
                                                << 0x10U) 
                                               | ((vlSelf->soc_top__DOT__u_imem__DOT__mem
                                                   [
                                                   (0xffffU 
                                                    & ((IData)(1U) 
                                                       + vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q))] 
                                                   << 8U) 
                                                  | vlSelf->soc_top__DOT__u_imem__DOT__mem
                                                  [
                                                  (0xffffU 
                                                   & vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q)])))),32);
        bufp->chgIData(oldp+33,(vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]),32);
        bufp->chgIData(oldp+34,(vlSelf->soc_top__DOT__dmem_wdata),32);
        bufp->chgCData(oldp+35,(((8U & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U])
                                  ? (0xfU & ((0U == 
                                              (3U & 
                                               vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U]))
                                              ? ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]))
                                              : ((1U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U]))
                                                  ? 
                                                 ((IData)(3U) 
                                                  << 
                                                  (3U 
                                                   & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]))
                                                  : 0xfU)))
                                  : 0U)),4);
        bufp->chgBit(oldp+36,((1U & (vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                                     >> 3U))));
        bufp->chgBit(oldp+37,((0x10000000U == vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U])));
        bufp->chgBit(oldp+38,((0x10000004U == vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U])));
        bufp->chgBit(oldp+39,(vlSelf->soc_top__DOT__is_ram));
        bufp->chgWData(oldp+40,(vlSelf->soc_top__DOT__u_core__DOT__if_idex),97);
        bufp->chgWData(oldp+44,(vlSelf->soc_top__DOT__u_core__DOT__idex_memwb),110);
        bufp->chgCData(oldp+48,((0x1fU & (vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                                          >> 8U))),5);
        bufp->chgBit(oldp+49,((1U & (vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                                     >> 7U))));
        bufp->chgCData(oldp+50,((0x1fU & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+51,((0x1fU & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+52,((0x1fU & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                          >> 7U))),5);
        bufp->chgCData(oldp+53,((7U & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+54,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__reg_write));
        bufp->chgBit(oldp+55,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__mem_read));
        bufp->chgBit(oldp+56,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__mem_write));
        bufp->chgBit(oldp+57,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__branch));
        bufp->chgBit(oldp+58,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__jump));
        bufp->chgCData(oldp+59,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_op),4);
        bufp->chgCData(oldp+60,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_asel),2);
        bufp->chgBit(oldp+61,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_bsel));
        bufp->chgCData(oldp+62,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__imm_type),3);
        bufp->chgIData(oldp+63,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__imm),32);
        bufp->chgBit(oldp+64,(((IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_hazard__DOT____VdfgTmp_h7f351477__0) 
                               & (IData)(vlSelf->__VdfgTmp_hec284e9d__0))));
        bufp->chgBit(oldp+65,(((IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__u_hazard__DOT____VdfgTmp_h7f351477__0) 
                               & (IData)(vlSelf->__VdfgTmp_hec95b55a__0))));
        bufp->chgCData(oldp+66,(((IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__mem_read)
                                  ? 1U : ((IData)(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__jump)
                                           ? 2U : 0U))),2);
        bufp->chgIData(oldp+67,(vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U]),32);
        bufp->chgCData(oldp+68,((0x7fU & vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U])),7);
        bufp->chgBit(oldp+69,((1U & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+70,((0x33U == (0x7fU & vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U]))));
        bufp->chgBit(oldp+71,(((0x33U == (0x7fU & vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U])) 
                               | (0x13U == (0x7fU & 
                                            vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U])))));
        bufp->chgCData(oldp+72,((3U & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U])),2);
        bufp->chgCData(oldp+73,(vlSelf->soc_top__DOT____Vcellinp__u_dmem__wstrb),4);
        bufp->chgBit(oldp+74,(((vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                                >> 3U) & (IData)(vlSelf->soc_top__DOT__is_ram))));
        bufp->chgIData(oldp+75,(((IData)(1U) + vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U])),32);
        bufp->chgIData(oldp+76,(((IData)(2U) + vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U])),32);
        bufp->chgIData(oldp+77,(((IData)(3U) + vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U])),32);
        bufp->chgSData(oldp+78,((0xffffU & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U])),16);
        bufp->chgSData(oldp+79,((0xffffU & ((IData)(1U) 
                                            + vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]))),16);
        bufp->chgSData(oldp+80,((0xffffU & ((IData)(2U) 
                                            + vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]))),16);
        bufp->chgSData(oldp+81,((0xffffU & ((IData)(3U) 
                                            + vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[2U]))),16);
        bufp->chgIData(oldp+82,(((IData)(1U) + vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q)),32);
        bufp->chgIData(oldp+83,(((IData)(2U) + vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q)),32);
        bufp->chgIData(oldp+84,(((IData)(3U) + vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+85,(vlSelf->soc_top__DOT__dmem_rdata_ram),32);
        bufp->chgBit(oldp+86,(vlSelf->soc_top__DOT__u_core__DOT__branch_taken));
        bufp->chgIData(oldp+87,((0xfffffffeU & vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_result)),32);
        bufp->chgIData(oldp+88,(vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__wb_data),32);
        bufp->chgIData(oldp+89,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs1_val),32);
        bufp->chgIData(oldp+90,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__rs2_val),32);
        bufp->chgIData(oldp+91,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_a),32);
        bufp->chgIData(oldp+92,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_b),32);
        bufp->chgIData(oldp+93,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_result),32);
        bufp->chgBit(oldp+94,(vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__cond_true));
        bufp->chgCData(oldp+95,((0x1fU & vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_b)),5);
        bufp->chgIData(oldp+96,(vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__shifted),32);
    }
    bufp->chgBit(oldp+97,(vlSelf->clk));
    bufp->chgBit(oldp+98,(vlSelf->rst_n));
    bufp->chgBit(oldp+99,(vlSelf->tohost_wr));
    bufp->chgIData(oldp+100,(vlSelf->tohost_data),32);
    bufp->chgBit(oldp+101,(vlSelf->uart_wr));
    bufp->chgCData(oldp+102,(vlSelf->uart_data),8);
    bufp->chgIData(oldp+103,(((0U == (0x1fU & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                               >> 0xfU)))
                               ? 0U : (((vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                                         >> 7U) & (IData)(vlSelf->__VdfgTmp_hec284e9d__0))
                                        ? vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__wb_data
                                        : ((0x1eU >= 
                                            (0x1fU 
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
    bufp->chgIData(oldp+104,(((0U == (0x1fU & (vlSelf->soc_top__DOT__u_core__DOT__if_idex[0U] 
                                               >> 0x14U)))
                               ? 0U : (((vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U] 
                                         >> 7U) & (IData)(vlSelf->__VdfgTmp_hec95b55a__0))
                                        ? vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__wb_data
                                        : ((0x1eU >= 
                                            (0x1fU 
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
    bufp->chgIData(oldp+105,(((IData)(vlSelf->soc_top__DOT__u_core__DOT__branch_taken)
                               ? (0xfffffffeU & vlSelf->soc_top__DOT__u_core__DOT__u_idex__DOT__alu_result)
                               : ((IData)(4U) + vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__pc_q))),32);
    bufp->chgIData(oldp+106,(((4U & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U])
                               ? ((2U & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U])
                                   ? vlSelf->soc_top__DOT__dmem_rdata_ram
                                   : ((1U & vlSelf->soc_top__DOT__u_core__DOT__idex_memwb[3U])
                                       ? (0xffffU & vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__shifted)
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
                                           << 8U) | 
                                          (0xffU & vlSelf->soc_top__DOT__u_core__DOT__u_memwb__DOT__shifted)))))),32);
}

void Vsoc_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root__trace_cleanup\n"); );
    // Init
    Vsoc_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_top___024root*>(voidSelf);
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
