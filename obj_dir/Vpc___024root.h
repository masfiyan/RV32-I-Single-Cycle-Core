// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpc.h for the primary calling header

#ifndef VERILATED_VPC___024ROOT_H_
#define VERILATED_VPC___024ROOT_H_  // guard

#include "verilated.h"

class Vpc__Syms;

class Vpc___024root final : public VerilatedModule {
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
    Vpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpc___024root(Vpc__Syms* symsp, const char* name);
    ~Vpc___024root();
    VL_UNCOPYABLE(Vpc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
