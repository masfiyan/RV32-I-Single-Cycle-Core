// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinst_mem.h for the primary calling header

#include "verilated.h"

#include "Vinst_mem___024root.h"

VL_ATTR_COLD void Vinst_mem___024root___eval_initial(Vinst_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_mem___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

void Vinst_mem___024root___combo__TOP__0(Vinst_mem___024root* vlSelf);

VL_ATTR_COLD void Vinst_mem___024root___eval_settle(Vinst_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_mem___024root___eval_settle\n"); );
    // Body
    Vinst_mem___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vinst_mem___024root___final(Vinst_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_mem___024root___final\n"); );
}

VL_ATTR_COLD void Vinst_mem___024root___ctor_var_reset(Vinst_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_mem___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->addr = VL_RAND_RESET_I(10);
    vlSelf->inst = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->inst_mem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->inst_mem__DOT___Vpast_0_0 = VL_RAND_RESET_I(1);
}
