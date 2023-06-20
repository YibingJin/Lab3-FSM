// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1full__Syms.h"


VL_ATTR_COLD void Vf1full___024root__trace_init_sub__TOP__0(Vf1full___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1full___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+11,"clk", false,-1);
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declBit(c+13,"trigger", false,-1);
    tracep->declBus(c+14,"N", false,-1, 15,0);
    tracep->declBus(c+15,"data_out", false,-1, 7,0);
    tracep->declBit(c+16,"time_out", false,-1);
    tracep->pushNamePrefix("f1full ");
    tracep->declBus(c+17,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+11,"clk", false,-1);
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declBit(c+13,"trigger", false,-1);
    tracep->declBus(c+14,"N", false,-1, 15,0);
    tracep->declBus(c+15,"data_out", false,-1, 7,0);
    tracep->declBit(c+16,"time_out", false,-1);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->declBit(c+2,"cmd_seq", false,-1);
    tracep->declBit(c+3,"cmd_delay", false,-1);
    tracep->declBit(c+4,"en", false,-1);
    tracep->pushNamePrefix("clock ");
    tracep->declBus(c+17,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+11,"clk", false,-1);
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declBit(c+2,"en", false,-1);
    tracep->declBus(c+14,"N", false,-1, 15,0);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->declBus(c+5,"count", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delatedtime ");
    tracep->declBus(c+18,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+11,"clk", false,-1);
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declBit(c+3,"trigger", false,-1);
    tracep->declBus(c+19,"n", false,-1, 9,0);
    tracep->declBit(c+16,"time_out", false,-1);
    tracep->declBus(c+6,"count", false,-1, 9,0);
    tracep->declBus(c+7,"current_state", false,-1, 31,0);
    tracep->declBus(c+8,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("f1_light ");
    tracep->declBit(c+11,"clk", false,-1);
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declBit(c+4,"en", false,-1);
    tracep->declBit(c+13,"trigger", false,-1);
    tracep->declBus(c+15,"data_out", false,-1, 7,0);
    tracep->declBit(c+2,"cmd_seq", false,-1);
    tracep->declBit(c+3,"cmd_delay", false,-1);
    tracep->declBus(c+9,"current_state", false,-1, 31,0);
    tracep->declBus(c+10,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vf1full___024root__trace_init_top(Vf1full___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1full___024root__trace_init_top\n"); );
    // Body
    Vf1full___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vf1full___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1full___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1full___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vf1full___024root__trace_register(Vf1full___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1full___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vf1full___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vf1full___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vf1full___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vf1full___024root__trace_full_sub_0(Vf1full___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vf1full___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1full___024root__trace_full_top_0\n"); );
    // Init
    Vf1full___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1full___024root*>(voidSelf);
    Vf1full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vf1full___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vf1full___024root__trace_full_sub_0(Vf1full___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1full___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->f1full__DOT__tick));
    bufp->fullBit(oldp+2,(vlSelf->f1full__DOT__cmd_seq));
    bufp->fullBit(oldp+3,(vlSelf->f1full__DOT__cmd_delay));
    bufp->fullBit(oldp+4,(vlSelf->f1full__DOT__en));
    bufp->fullSData(oldp+5,(vlSelf->f1full__DOT__clock__DOT__count),16);
    bufp->fullSData(oldp+6,(vlSelf->f1full__DOT__delatedtime__DOT__count),10);
    bufp->fullIData(oldp+7,(vlSelf->f1full__DOT__delatedtime__DOT__current_state),32);
    bufp->fullIData(oldp+8,(((0U == vlSelf->f1full__DOT__delatedtime__DOT__current_state)
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
    bufp->fullIData(oldp+9,(vlSelf->f1full__DOT__f1_light__DOT__current_state),32);
    bufp->fullIData(oldp+10,(vlSelf->f1full__DOT__f1_light__DOT__next_state),32);
    bufp->fullBit(oldp+11,(vlSelf->clk));
    bufp->fullBit(oldp+12,(vlSelf->rst));
    bufp->fullBit(oldp+13,(vlSelf->trigger));
    bufp->fullSData(oldp+14,(vlSelf->N),16);
    bufp->fullCData(oldp+15,(vlSelf->data_out),8);
    bufp->fullBit(oldp+16,(vlSelf->time_out));
    bufp->fullIData(oldp+17,(0x10U),32);
    bufp->fullIData(oldp+18,(0xaU),32);
    bufp->fullSData(oldp+19,(1U),10);
}
