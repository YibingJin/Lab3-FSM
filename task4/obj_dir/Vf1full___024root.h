// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vf1full.h for the primary calling header

#ifndef VERILATED_VF1FULL___024ROOT_H_
#define VERILATED_VF1FULL___024ROOT_H_  // guard

#include "verilated.h"

class Vf1full__Syms;

class Vf1full___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(trigger,0,0);
    VL_OUT8(data_out,7,0);
    VL_OUT8(time_out,0,0);
    CData/*0:0*/ f1full__DOT__tick;
    CData/*0:0*/ f1full__DOT__cmd_seq;
    CData/*0:0*/ f1full__DOT__cmd_delay;
    CData/*0:0*/ f1full__DOT__en;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN16(N,15,0);
    SData/*15:0*/ f1full__DOT__clock__DOT__count;
    SData/*9:0*/ f1full__DOT__delatedtime__DOT__count;
    IData/*31:0*/ f1full__DOT__delatedtime__DOT__current_state;
    IData/*31:0*/ f1full__DOT__delatedtime__DOT__next_state;
    IData/*31:0*/ f1full__DOT__f1_light__DOT__current_state;
    IData/*31:0*/ f1full__DOT__f1_light__DOT__next_state;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vf1full__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vf1full___024root(Vf1full__Syms* symsp, const char* name);
    ~Vf1full___024root();
    VL_UNCOPYABLE(Vf1full___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
