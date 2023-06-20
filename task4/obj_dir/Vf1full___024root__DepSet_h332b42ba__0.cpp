// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1full.h for the primary calling header

#include "verilated.h"

#include "Vf1full___024root.h"

VL_INLINE_OPT void Vf1full___024root___sequent__TOP__0(Vf1full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1full___024root___sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__f1full__DOT__clock__DOT__count;
    // Body
    __Vdly__f1full__DOT__clock__DOT__count = vlSelf->f1full__DOT__clock__DOT__count;
    vlSelf->f1full__DOT__delatedtime__DOT__count = 
        ((((IData)(vlSelf->rst) | (IData)(vlSelf->f1full__DOT__cmd_delay)) 
          | (0U == (IData)(vlSelf->f1full__DOT__delatedtime__DOT__count)))
          ? 0U : (0x3ffU & ((IData)(vlSelf->f1full__DOT__delatedtime__DOT__count) 
                            - (IData)(1U))));
    if (vlSelf->rst) {
        vlSelf->f1full__DOT__tick = 0U;
        __Vdly__f1full__DOT__clock__DOT__count = vlSelf->N;
        vlSelf->f1full__DOT__delatedtime__DOT__current_state = 0U;
    } else {
        if (vlSelf->f1full__DOT__cmd_seq) {
            if ((0U == (IData)(vlSelf->f1full__DOT__clock__DOT__count))) {
                vlSelf->f1full__DOT__tick = 1U;
                __Vdly__f1full__DOT__clock__DOT__count 
                    = vlSelf->N;
            } else {
                __Vdly__f1full__DOT__clock__DOT__count 
                    = (0xffffU & ((IData)(vlSelf->f1full__DOT__clock__DOT__count) 
                                  - (IData)(1U)));
                vlSelf->f1full__DOT__tick = 0U;
            }
        }
        vlSelf->f1full__DOT__delatedtime__DOT__current_state 
            = vlSelf->f1full__DOT__delatedtime__DOT__next_state;
    }
    vlSelf->f1full__DOT__f1_light__DOT__current_state 
        = (((IData)(vlSelf->rst) & (IData)(vlSelf->trigger))
            ? 0U : vlSelf->f1full__DOT__f1_light__DOT__next_state);
    vlSelf->f1full__DOT__clock__DOT__count = __Vdly__f1full__DOT__clock__DOT__count;
    vlSelf->time_out = ((0U != vlSelf->f1full__DOT__delatedtime__DOT__current_state) 
                        & ((1U != vlSelf->f1full__DOT__delatedtime__DOT__current_state) 
                           & (2U == vlSelf->f1full__DOT__delatedtime__DOT__current_state)));
    vlSelf->f1full__DOT__cmd_delay = (0U == vlSelf->f1full__DOT__f1_light__DOT__current_state);
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

void Vf1full___024root___eval(Vf1full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1full___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vf1full___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vf1full___024root___eval_debug_assertions(Vf1full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1full___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG
