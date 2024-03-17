// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VProgramCounter__Syms.h"


void VProgramCounter___024root__trace_chg_sub_0(VProgramCounter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VProgramCounter___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProgramCounter___024root__trace_chg_top_0\n"); );
    // Init
    VProgramCounter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VProgramCounter___024root*>(voidSelf);
    VProgramCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VProgramCounter___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VProgramCounter___024root__trace_chg_sub_0(VProgramCounter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VProgramCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProgramCounter___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst));
    bufp->chgIData(oldp+2,(vlSelf->start),32);
    bufp->chgIData(oldp+3,(vlSelf->pc),32);
    bufp->chgIData(oldp+4,(vlSelf->pc4),32);
}

void VProgramCounter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProgramCounter___024root__trace_cleanup\n"); );
    // Init
    VProgramCounter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VProgramCounter___024root*>(voidSelf);
    VProgramCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
