// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1full__Syms.h"


void Vf1full___024root__trace_chg_sub_0(Vf1full___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vf1full___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1full___024root__trace_chg_top_0\n"); );
    // Init
    Vf1full___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1full___024root*>(voidSelf);
    Vf1full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vf1full___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vf1full___024root__trace_chg_sub_0(Vf1full___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1full___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->f1full__DOT__tick));
        bufp->chgBit(oldp+1,(vlSelf->f1full__DOT__cmd_seq));
        bufp->chgBit(oldp+2,(vlSelf->f1full__DOT__cmd_delay));
        bufp->chgBit(oldp+3,(vlSelf->f1full__DOT__en));
        bufp->chgSData(oldp+4,(vlSelf->f1full__DOT__clock__DOT__count),16);
        bufp->chgSData(oldp+5,(vlSelf->f1full__DOT__delatedtime__DOT__count),10);
        bufp->chgIData(oldp+6,(vlSelf->f1full__DOT__delatedtime__DOT__current_state),32);
        bufp->chgIData(oldp+7,(((0U == vlSelf->f1full__DOT__delatedtime__DOT__current_state)
                                 ? ((IData)(vlSelf->f1full__DOT__cmd_delay)
                                     ? 1U : vlSelf->f1full__DOT__delatedtime__DOT__current_state)
                                 : ((1U == vlSelf->f1full__DOT__delatedtime__DOT__current_state)
                                     ? ((0U == (IData)(vlSelf->f1full__DOT__delatedtime__DOT__count))
                                         ? 2U : vlSelf->f1full__DOT__delatedtime__DOT__current_state)
                                     : ((2U == vlSelf->f1full__DOT__delatedtime__DOT__current_state)
                                         ? ((IData)(vlSelf->f1full__DOT__cmd_delay)
                                             ? 3U : 0U)
                                         : ((3U == vlSelf->f1full__DOT__delatedtime__DOT__current_state)
                                             ? ((IData)(vlSelf->f1full__DOT__cmd_delay)
                                                 ? vlSelf->f1full__DOT__delatedtime__DOT__current_state
                                                 : 0U)
                                             : 0U))))),32);
        bufp->chgIData(oldp+8,(vlSelf->f1full__DOT__f1_light__DOT__current_state),32);
        bufp->chgIData(oldp+9,(vlSelf->f1full__DOT__f1_light__DOT__next_state),32);
    }
    bufp->chgBit(oldp+10,(vlSelf->clk));
    bufp->chgBit(oldp+11,(vlSelf->rst));
    bufp->chgBit(oldp+12,(vlSelf->trigger));
    bufp->chgSData(oldp+13,(vlSelf->N),16);
    bufp->chgCData(oldp+14,(vlSelf->data_out),8);
    bufp->chgBit(oldp+15,(vlSelf->time_out));
}

void Vf1full___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1full___024root__trace_cleanup\n"); );
    // Init
    Vf1full___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1full___024root*>(voidSelf);
    Vf1full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
