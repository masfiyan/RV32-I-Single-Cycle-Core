// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinst_mem.h for the primary calling header

#include "verilated.h"

#include "Vinst_mem__Syms.h"
#include "Vinst_mem___024root.h"

void Vinst_mem___024root___ctor_var_reset(Vinst_mem___024root* vlSelf);

Vinst_mem___024root::Vinst_mem___024root(Vinst_mem__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vinst_mem___024root___ctor_var_reset(this);
}

void Vinst_mem___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vinst_mem___024root::~Vinst_mem___024root() {
}
