// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtopf1.h for the primary calling header

#include "verilated.h"

#include "Vtopf1___024root.h"

VL_INLINE_OPT void Vtopf1___024root___sequent__TOP__0(Vtopf1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopf1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopf1___024root___sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__topf1__DOT__clock__DOT__count;
    // Body
    __Vdly__topf1__DOT__clock__DOT__count = vlSelf->topf1__DOT__clock__DOT__count;
    if (vlSelf->rst) {
        vlSelf->topf1__DOT__tick = 0U;
        __Vdly__topf1__DOT__clock__DOT__count = vlSelf->N;
        vlSelf->topf1__DOT__f1_light__DOT__current_state = 0U;
    } else {
        if (vlSelf->en) {
            if ((0U == (IData)(vlSelf->topf1__DOT__clock__DOT__count))) {
                vlSelf->topf1__DOT__tick = 1U;
                __Vdly__topf1__DOT__clock__DOT__count 
                    = vlSelf->N;
            } else {
                __Vdly__topf1__DOT__clock__DOT__count 
                    = (0xffffU & ((IData)(vlSelf->topf1__DOT__clock__DOT__count) 
                                  - (IData)(1U)));
                vlSelf->topf1__DOT__tick = 0U;
            }
        }
        vlSelf->topf1__DOT__f1_light__DOT__current_state 
            = vlSelf->topf1__DOT__f1_light__DOT__next_state;
    }
    vlSelf->topf1__DOT__clock__DOT__count = __Vdly__topf1__DOT__clock__DOT__count;
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

void Vtopf1___024root___eval(Vtopf1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopf1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopf1___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtopf1___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtopf1___024root___eval_debug_assertions(Vtopf1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopf1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopf1___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
