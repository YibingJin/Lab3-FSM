// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtopf1.h for the primary calling header

#include "verilated.h"

#include "Vtopf1__Syms.h"
#include "Vtopf1___024root.h"

void Vtopf1___024root___ctor_var_reset(Vtopf1___024root* vlSelf);

Vtopf1___024root::Vtopf1___024root(Vtopf1__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtopf1___024root___ctor_var_reset(this);
}

void Vtopf1___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtopf1___024root::~Vtopf1___024root() {
}
