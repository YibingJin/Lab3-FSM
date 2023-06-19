// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtopf1__Syms.h"


void Vtopf1___024root__trace_chg_sub_0(Vtopf1___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtopf1___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopf1___024root__trace_chg_top_0\n"); );
    // Init
    Vtopf1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtopf1___024root*>(voidSelf);
    Vtopf1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtopf1___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtopf1___024root__trace_chg_sub_0(Vtopf1___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopf1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopf1___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->topf1__DOT__tick));
        bufp->chgSData(oldp+1,(vlSelf->topf1__DOT__clock__DOT__count),16);
        bufp->chgIData(oldp+2,(vlSelf->topf1__DOT__f1_light__DOT__current_state),32);
        bufp->chgIData(oldp+3,(vlSelf->topf1__DOT__f1_light__DOT__next_state),32);
    }
    bufp->chgBit(oldp+4,(vlSelf->clk));
    bufp->chgBit(oldp+5,(vlSelf->rst));
    bufp->chgBit(oldp+6,(vlSelf->en));
    bufp->chgSData(oldp+7,(vlSelf->N),16);
    bufp->chgCData(oldp+8,(vlSelf->data_out),8);
}

void Vtopf1___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopf1___024root__trace_cleanup\n"); );
    // Init
    Vtopf1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtopf1___024root*>(voidSelf);
    Vtopf1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
