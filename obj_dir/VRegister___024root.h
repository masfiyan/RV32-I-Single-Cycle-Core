// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegister.h for the primary calling header

#ifndef VERILATED_VREGISTER___024ROOT_H_
#define VERILATED_VREGISTER___024ROOT_H_  // guard

#include "verilated.h"

class VRegister__Syms;

class VRegister___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(reg_Write,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    VL_IN(inst,31,0);
    VL_IN(write_date,31,0);
    VL_OUT(rs1,31,0);
    VL_OUT(rs2,31,0);
    VlUnpacked<IData/*31:0*/, 32> Register__DOT__regs;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VRegister__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRegister___024root(VRegister__Syms* symsp, const char* name);
    ~VRegister___024root();
    VL_UNCOPYABLE(VRegister___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
