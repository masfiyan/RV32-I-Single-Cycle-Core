// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinst_mem.h for the primary calling header

#include "verilated.h"

#include "Vinst_mem___024root.h"

VL_INLINE_OPT void Vinst_mem___024root___sequent__TOP__0(Vinst_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_mem___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->inst_mem__DOT___Vpast_0_0)) 
                                  & (IData)(vlSelf->rst)))))) {
            VL_READMEM_N(true, 32, 1024, 0, std::string{"/home/masfiyan/Desktop/inst.hex"}
                         ,  &(vlSelf->inst_mem__DOT__mem)
                         , 0, ~0ULL);
        }
    }
    vlSelf->inst_mem__DOT___Vpast_0_0 = vlSelf->rst;
}

VL_INLINE_OPT void Vinst_mem___024root___combo__TOP__0(Vinst_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_mem___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->inst = vlSelf->inst_mem__DOT__mem[(0x3ffU 
                                               & ((IData)(vlSelf->addr) 
                                                  >> 2U))];
}

void Vinst_mem___024root___eval(Vinst_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_mem___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vinst_mem___024root___sequent__TOP__0(vlSelf);
    }
    Vinst_mem___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vinst_mem___024root___eval_debug_assertions(Vinst_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst_mem___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->addr & 0xfc00U))) {
        Verilated::overWidthError("addr");}
}
#endif  // VL_DEBUG
