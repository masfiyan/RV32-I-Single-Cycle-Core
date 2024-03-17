// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegister.h for the primary calling header

#include "verilated.h"

#include "VRegister___024root.h"

VL_INLINE_OPT void VRegister___024root___sequent__TOP__0(VRegister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__Register__DOT__regs__v0;
    IData/*31:0*/ __Vdlyvval__Register__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__Register__DOT__regs__v0;
    // Body
    __Vdlyvset__Register__DOT__regs__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (((IData)(vlSelf->reg_Write) & (0U != (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 7U))))) {
            __Vdlyvval__Register__DOT__regs__v0 = vlSelf->write_date;
            __Vdlyvset__Register__DOT__regs__v0 = 1U;
            __Vdlyvdim0__Register__DOT__regs__v0 = 
                (0x1fU & (vlSelf->inst >> 7U));
        }
    }
    if (__Vdlyvset__Register__DOT__regs__v0) {
        vlSelf->Register__DOT__regs[__Vdlyvdim0__Register__DOT__regs__v0] 
            = __Vdlyvval__Register__DOT__regs__v0;
    }
}

VL_INLINE_OPT void VRegister___024root___combo__TOP__0(VRegister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->rs1 = ((0U != (0x1fU & (vlSelf->inst >> 0xfU)))
                    ? vlSelf->Register__DOT__regs[(0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0xfU))]
                    : 0U);
    vlSelf->rs2 = ((0U != (0x1fU & (vlSelf->inst >> 0x14U)))
                    ? vlSelf->Register__DOT__regs[(0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0x14U))]
                    : 0U);
}

void VRegister___024root___eval(VRegister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->__Vclklast__TOP__rst)))) {
        VRegister___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    VRegister___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void VRegister___024root___eval_debug_assertions(VRegister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->reg_Write & 0xfeU))) {
        Verilated::overWidthError("reg_Write");}
}
#endif  // VL_DEBUG
