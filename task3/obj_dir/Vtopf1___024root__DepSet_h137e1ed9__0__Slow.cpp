// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtopf1.h for the primary calling header

#include "verilated.h"

#include "Vtopf1___024root.h"

VL_ATTR_COLD void Vtopf1___024root___settle__TOP__0(Vtopf1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopf1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopf1___024root___settle__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->topf1__DOT__f1_light__DOT__current_state) 
               | (1U == vlSelf->topf1__DOT__f1_light__DOT__current_state)) 
              | (2U == vlSelf->topf1__DOT__f1_light__DOT__current_state)) 
             | (3U == vlSelf->topf1__DOT__f1_light__DOT__current_state)) 
            | (4U == vlSelf->topf1__DOT__f1_light__DOT__current_state)) 
           | (5U == vlSelf->topf1__DOT__f1_light__DOT__current_state)) 
          | (6U == vlSelf->topf1__DOT__f1_light__DOT__current_state)) 
         | (7U == vlSelf->topf1__DOT__f1_light__DOT__current_state))) {
        if ((0U == vlSelf->topf1__DOT__f1_light__DOT__current_state)) {
            vlSelf->data_out = 0U;
            vlSelf->topf1__DOT__f1_light__DOT__next_state 
                = ((IData)(vlSelf->topf1__DOT__tick)
                    ? 1U : vlSelf->topf1__DOT__f1_light__DOT__current_state);
        } else if ((1U == vlSelf->topf1__DOT__f1_light__DOT__current_state)) {
            vlSelf->data_out = 1U;
            vlSelf->topf1__DOT__f1_light__DOT__next_state 
                = ((IData)(vlSelf->topf1__DOT__tick)
                    ? 2U : vlSelf->topf1__DOT__f1_light__DOT__current_state);
        } else if ((2U == vlSelf->topf1__DOT__f1_light__DOT__current_state)) {
            vlSelf->data_out = 3U;
            vlSelf->topf1__DOT__f1_light__DOT__next_state 
                = ((IData)(vlSelf->topf1__DOT__tick)
                    ? 3U : vlSelf->topf1__DOT__f1_light__DOT__current_state);
        } else if ((3U == vlSelf->topf1__DOT__f1_light__DOT__current_state)) {
            vlSelf->data_out = 7U;
            vlSelf->topf1__DOT__f1_light__DOT__next_state 
                = ((IData)(vlSelf->topf1__DOT__tick)
                    ? 4U : vlSelf->topf1__DOT__f1_light__DOT__current_state);
        } else if ((4U == vlSelf->topf1__DOT__f1_light__DOT__current_state)) {
            vlSelf->data_out = 0xfU;
            vlSelf->topf1__DOT__f1_light__DOT__next_state 
                = ((IData)(vlSelf->topf1__DOT__tick)
                    ? 5U : vlSelf->topf1__DOT__f1_light__DOT__current_state);
        } else if ((5U == vlSelf->topf1__DOT__f1_light__DOT__current_state)) {
            vlSelf->data_out = 0x1fU;
            vlSelf->topf1__DOT__f1_light__DOT__next_state 
                = ((IData)(vlSelf->topf1__DOT__tick)
                    ? 6U : vlSelf->topf1__DOT__f1_light__DOT__current_state);
        } else if ((6U == vlSelf->topf1__DOT__f1_light__DOT__current_state)) {
            vlSelf->data_out = 0x3fU;
            vlSelf->topf1__DOT__f1_light__DOT__next_state 
                = ((IData)(vlSelf->topf1__DOT__tick)
                    ? 7U : vlSelf->topf1__DOT__f1_light__DOT__current_state);
        } else {
            vlSelf->data_out = 0x7fU;
            vlSelf->topf1__DOT__f1_light__DOT__next_state 
                = ((IData)(vlSelf->topf1__DOT__tick)
                    ? 8U : vlSelf->topf1__DOT__f1_light__DOT__current_state);
        }
    } else if ((8U == vlSelf->topf1__DOT__f1_light__DOT__current_state)) {
        vlSelf->data_out = 0xffU;
        vlSelf->topf1__DOT__f1_light__DOT__next_state 
            = ((IData)(vlSelf->topf1__DOT__tick) ? 0U
                : vlSelf->topf1__DOT__f1_light__DOT__current_state);
    } else {
        vlSelf->data_out = 0U;
        vlSelf->topf1__DOT__f1_light__DOT__next_state = 0U;
    }
}

VL_ATTR_COLD void Vtopf1___024root___eval_initial(Vtopf1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopf1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopf1___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtopf1___024root___eval_settle(Vtopf1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopf1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopf1___024root___eval_settle\n"); );
    // Body
    Vtopf1___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtopf1___024root___final(Vtopf1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopf1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopf1___024root___final\n"); );
}

VL_ATTR_COLD void Vtopf1___024root___ctor_var_reset(Vtopf1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopf1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopf1___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(16);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->topf1__DOT__tick = VL_RAND_RESET_I(1);
    vlSelf->topf1__DOT__clock__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->topf1__DOT__f1_light__DOT__current_state = 0;
    vlSelf->topf1__DOT__f1_light__DOT__next_state = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
