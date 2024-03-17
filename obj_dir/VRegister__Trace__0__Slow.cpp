// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRegister__Syms.h"


VL_ATTR_COLD void VRegister___024root__trace_init_sub__TOP__0(VRegister___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+33,"clk", false,-1);
    tracep->declBit(c+34,"rst", false,-1);
    tracep->declBus(c+35,"inst", false,-1, 31,0);
    tracep->declBit(c+36,"reg_Write", false,-1);
    tracep->declBus(c+37,"write_date", false,-1, 31,0);
    tracep->declBus(c+38,"rs1", false,-1, 31,0);
    tracep->declBus(c+39,"rs2", false,-1, 31,0);
    tracep->pushNamePrefix("Register ");
    tracep->declBit(c+33,"clk", false,-1);
    tracep->declBit(c+34,"rst", false,-1);
    tracep->declBus(c+35,"inst", false,-1, 31,0);
    tracep->declBit(c+36,"reg_Write", false,-1);
    tracep->declBus(c+37,"write_date", false,-1, 31,0);
    tracep->declBus(c+38,"rs1", false,-1, 31,0);
    tracep->declBus(c+39,"rs2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VRegister___024root__trace_init_top(VRegister___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root__trace_init_top\n"); );
    // Body
    VRegister___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VRegister___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRegister___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRegister___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VRegister___024root__trace_register(VRegister___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VRegister___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VRegister___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VRegister___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VRegister___024root__trace_full_sub_0(VRegister___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VRegister___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root__trace_full_top_0\n"); );
    // Init
    VRegister___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegister___024root*>(voidSelf);
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VRegister___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VRegister___024root__trace_full_sub_0(VRegister___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->Register__DOT__regs[31]),32);
    bufp->fullBit(oldp+33,(vlSelf->clk));
    bufp->fullBit(oldp+34,(vlSelf->rst));
    bufp->fullIData(oldp+35,(vlSelf->inst),32);
    bufp->fullBit(oldp+36,(vlSelf->reg_Write));
    bufp->fullIData(oldp+37,(vlSelf->write_date),32);
    bufp->fullIData(oldp+38,(vlSelf->rs1),32);
    bufp->fullIData(oldp+39,(vlSelf->rs2),32);
}
