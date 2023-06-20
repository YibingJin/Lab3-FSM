// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1full.h for the primary calling header

#include "verilated.h"

#include "Vf1full__Syms.h"
#include "Vf1full___024root.h"

void Vf1full___024root___ctor_var_reset(Vf1full___024root* vlSelf);

Vf1full___024root::Vf1full___024root(Vf1full__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vf1full___024root___ctor_var_reset(this);
}

void Vf1full___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vf1full___024root::~Vf1full___024root() {
}
