// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VProgramCounter.h for the primary calling header

#ifndef VERILATED_VPROGRAMCOUNTER___024ROOT_H_
#define VERILATED_VPROGRAMCOUNTER___024ROOT_H_  // guard

#include "verilated.h"

class VProgramCounter__Syms;

class VProgramCounter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    VL_IN(start,31,0);
    VL_OUT(pc,31,0);
    VL_OUT(pc4,31,0);

    // INTERNAL VARIABLES
    VProgramCounter__Syms* const vlSymsp;

    // CONSTRUCTORS
    VProgramCounter___024root(VProgramCounter__Syms* symsp, const char* name);
    ~VProgramCounter___024root();
    VL_UNCOPYABLE(VProgramCounter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
