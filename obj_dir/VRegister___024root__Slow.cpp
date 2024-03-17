// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegister.h for the primary calling header

#include "verilated.h"

#include "VRegister__Syms.h"
#include "VRegister___024root.h"

void VRegister___024root___ctor_var_reset(VRegister___024root* vlSelf);

VRegister___024root::VRegister___024root(VRegister__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRegister___024root___ctor_var_reset(this);
}

void VRegister___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VRegister___024root::~VRegister___024root() {
}
