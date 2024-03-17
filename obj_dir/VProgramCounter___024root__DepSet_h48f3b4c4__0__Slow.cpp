// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProgramCounter.h for the primary calling header

#include "verilated.h"

#include "VProgramCounter___024root.h"

VL_ATTR_COLD void VProgramCounter___024root___eval_initial(VProgramCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VProgramCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProgramCounter___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void VProgramCounter___024root___eval_settle(VProgramCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VProgramCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProgramCounter___024root___eval_settle\n"); );
}

VL_ATTR_COLD void VProgramCounter___024root___final(VProgramCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VProgramCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProgramCounter___024root___final\n"); );
}

VL_ATTR_COLD void VProgramCounter___024root___ctor_var_reset(VProgramCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VProgramCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProgramCounter___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->pc4 = VL_RAND_RESET_I(32);
}
