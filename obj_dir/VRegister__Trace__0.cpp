// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRegister__Syms.h"


void VRegister___024root__trace_chg_sub_0(VRegister___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VRegister___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root__trace_chg_top_0\n"); );
    // Init
    VRegister___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegister___024root*>(voidSelf);
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VRegister___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VRegister___024root__trace_chg_sub_0(VRegister___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->Register__DOT__regs[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->Register__DOT__regs[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->Register__DOT__regs[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->Register__DOT__regs[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->Register__DOT__regs[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->Register__DOT__regs[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->Register__DOT__regs[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->Register__DOT__regs[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->Register__DOT__regs[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->Register__DOT__regs[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->Register__DOT__regs[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->Register__DOT__regs[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->Register__DOT__regs[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->Register__DOT__regs[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->Register__DOT__regs[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->Register__DOT__regs[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->Register__DOT__regs[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->Register__DOT__regs[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->Register__DOT__regs[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->Register__DOT__regs[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->Register__DOT__regs[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->Register__DOT__regs[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->Register__DOT__regs[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->Register__DOT__regs[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->Register__DOT__regs[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->Register__DOT__regs[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->Register__DOT__regs[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->Register__DOT__regs[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->Register__DOT__regs[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->Register__DOT__regs[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->Register__DOT__regs[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->Register__DOT__regs[31]),32);
    }
    bufp->chgBit(oldp+32,(vlSelf->clk));
    bufp->chgBit(oldp+33,(vlSelf->rst));
    bufp->chgIData(oldp+34,(vlSelf->inst),32);
    bufp->chgBit(oldp+35,(vlSelf->reg_Write));
    bufp->chgIData(oldp+36,(vlSelf->write_date),32);
    bufp->chgIData(oldp+37,(vlSelf->rs1),32);
    bufp->chgIData(oldp+38,(vlSelf->rs2),32);
}

void VRegister___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root__trace_cleanup\n"); );
    // Init
    VRegister___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegister___024root*>(voidSelf);
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
