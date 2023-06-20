// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1full.h for the primary calling header

#include "verilated.h"

#include "Vf1full___024root.h"

VL_ATTR_COLD void Vf1full___024root___initial__TOP__0(Vf1full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1full___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->f1full__DOT__delatedtime__DOT__count = 0U;
}

VL_ATTR_COLD void Vf1full___024root___settle__TOP__0(Vf1full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1full___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->f1full__DOT__cmd_delay = (0U == vlSelf->f1full__DOT__f1_light__DOT__current_state);
    vlSelf->time_out = ((0U != vlSelf->f1full__DOT__delatedtime__DOT__current_state) 
                        & ((1U != vlSelf->f1full__DOT__delatedtime__DOT__current_state) 
                           & (2U == vlSelf->f1full__DOT__delatedtime__DOT__current_state)));
    vlSelf->f1full__DOT__cmd_seq = (0U != vlSelf->f1full__DOT__f1_light__DOT__current_state);
    vlSelf->f1full__DOT__delatedtime__DOT__next_state 
        = ((0U == vlSelf->f1full__DOT__delatedtime__DOT__current_state)
            ? ((IData)(vlSelf->f1full__DOT__cmd_delay)
                ? 1U : vlSelf->f1full__DOT__delatedtime__DOT__current_state)
            : ((1U == vlSelf->f1full__DOT__delatedtime__DOT__current_state)
                ? ((0U == (IData)(vlSelf->f1full__DOT__delatedtime__DOT__count))
                    ? 2U : vlSelf->f1full__DOT__delatedtime__DOT__current_state)
                : ((2U == vlSelf->f1full__DOT__delatedtime__DOT__current_state)
                    ? ((IData)(vlSelf->f1full__DOT__cmd_delay)
                        ? 3U : 0U) : ((3U == vlSelf->f1full__DOT__delatedtime__DOT__current_state)
                                       ? ((IData)(vlSelf->f1full__DOT__cmd_delay)
                                           ? vlSelf->f1full__DOT__delatedtime__DOT__current_state
                                           : 0U) : 0U))));
    vlSelf->f1full__DOT__en = ((IData)(vlSelf->f1full__DOT__cmd_seq)
                                ? (IData)(vlSelf->f1full__DOT__tick)
                                : (IData)(vlSelf->time_out));
    if (((((((((0U == vlSelf->f1full__DOT__f1_light__DOT__current_state) 
               | (1U == vlSelf->f1full__DOT__f1_light__DOT__current_state)) 
              | (2U == vlSelf->f1full__DOT__f1_light__DOT__current_state)) 
             | (3U == vlSelf->f1full__DOT__f1_light__DOT__current_state)) 
            | (4U == vlSelf->f1full__DOT__f1_light__DOT__current_state)) 
           | (5U == vlSelf->f1full__DOT__f1_light__DOT__current_state)) 
          | (6U == vlSelf->f1full__DOT__f1_light__DOT__current_state)) 
         | (7U == vlSelf->f1full__DOT__f1_light__DOT__current_state))) {
        if ((0U == vlSelf->f1full__DOT__f1_light__DOT__current_state)) {
            vlSelf->data_out = 0U;
            vlSelf->f1full__DOT__f1_light__DOT__next_state 
                = ((IData)(vlSelf->f1full__DOT__en)
                    ? 1U : vlSelf->f1full__DOT__f1_light__DOT__current_state);
        } else if ((1U == vlSelf->f1full__DOT__f1_light__DOT__current_state)) {
            vlSelf->data_out = 1U;
            vlSelf->f1full__DOT__f1_light__DOT__next_state 
                = ((IData)(vlSelf->f1full__DOT__en)
                    ? 2U : vlSelf->f1full__DOT__f1_light__DOT__current_state);
        } else if ((2U == vlSelf->f1full__DOT__f1_light__DOT__current_state)) {
            vlSelf->data_out = 3U;
            vlSelf->f1full__DOT__f1_light__DOT__next_state 
                = ((IData)(vlSelf->f1full__DOT__en)
                    ? 3U : vlSelf->f1full__DOT__f1_light__DOT__current_state);
        } else if ((3U == vlSelf->f1full__DOT__f1_light__DOT__current_state)) {
            vlSelf->data_out = 7U;
            vlSelf->f1full__DOT__f1_light__DOT__next_state 
                = ((IData)(vlSelf->f1full__DOT__en)
                    ? 4U : vlSelf->f1full__DOT__f1_light__DOT__current_state);
        } else if ((4U == vlSelf->f1full__DOT__f1_light__DOT__current_state)) {
            vlSelf->data_out = 0xfU;
            vlSelf->f1full__DOT__f1_light__DOT__next_state 
                = ((IData)(vlSelf->f1full__DOT__en)
                    ? 5U : vlSelf->f1full__DOT__f1_light__DOT__current_state);
        } else if ((5U == vlSelf->f1full__DOT__f1_light__DOT__current_state)) {
            vlSelf->data_out = 0x1fU;
            vlSelf->f1full__DOT__f1_light__DOT__next_state 
                = ((IData)(vlSelf->f1full__DOT__en)
                    ? 6U : vlSelf->f1full__DOT__f1_light__DOT__current_state);
        } else if ((6U == vlSelf->f1full__DOT__f1_light__DOT__current_state)) {
            vlSelf->data_out = 0x3fU;
            vlSelf->f1full__DOT__f1_light__DOT__next_state 
                = ((IData)(vlSelf->f1full__DOT__en)
                    ? 7U : vlSelf->f1full__DOT__f1_light__DOT__current_state);
        } else {
            vlSelf->data_out = 0x7fU;
            vlSelf->f1full__DOT__f1_light__DOT__next_state 
                = ((IData)(vlSelf->f1full__DOT__en)
                    ? 8U : vlSelf->f1full__DOT__f1_light__DOT__current_state);
        }
    } else if ((8U == vlSelf->f1full__DOT__f1_light__DOT__current_state)) {
        vlSelf->data_out = 0xffU;
        vlSelf->f1full__DOT__f1_light__DOT__next_state 
            = ((IData)(vlSelf->f1full__DOT__en) ? 0U
                : vlSelf->f1full__DOT__f1_light__DOT__current_state);
    } else {
        vlSelf->data_out = 0U;
        vlSelf->f1full__DOT__f1_light__DOT__next_state = 0U;
    }
}

VL_ATTR_COLD void Vf1full___024root___eval_initial(Vf1full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1full___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vf1full___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vf1full___024root___eval_settle(Vf1full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1full___024root___eval_settle\n"); );
    // Body
    Vf1full___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vf1full___024root___final(Vf1full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1full___024root___final\n"); );
}

VL_ATTR_COLD void Vf1full___024root___ctor_var_reset(Vf1full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1full___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(16);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->time_out = VL_RAND_RESET_I(1);
    vlSelf->f1full__DOT__tick = VL_RAND_RESET_I(1);
    vlSelf->f1full__DOT__cmd_seq = VL_RAND_RESET_I(1);
    vlSelf->f1full__DOT__cmd_delay = VL_RAND_RESET_I(1);
    vlSelf->f1full__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->f1full__DOT__clock__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->f1full__DOT__delatedtime__DOT__count = VL_RAND_RESET_I(10);
    vlSelf->f1full__DOT__delatedtime__DOT__current_state = 0;
    vlSelf->f1full__DOT__delatedtime__DOT__next_state = 0;
    vlSelf->f1full__DOT__f1_light__DOT__current_state = 0;
    vlSelf->f1full__DOT__f1_light__DOT__next_state = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
