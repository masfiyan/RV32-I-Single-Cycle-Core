// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vinst_mem.h for the primary calling header

#ifndef VERILATED_VINST_MEM___024ROOT_H_
#define VERILATED_VINST_MEM___024ROOT_H_  // guard

#include "verilated.h"

class Vinst_mem__Syms;

class Vinst_mem___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ inst_mem__DOT___Vpast_0_0;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    VL_IN16(addr,9,0);
    VL_OUT(inst,31,0);
    VlUnpacked<IData/*31:0*/, 1024> inst_mem__DOT__mem;

    // INTERNAL VARIABLES
    Vinst_mem__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vinst_mem___024root(Vinst_mem__Syms* symsp, const char* name);
    ~Vinst_mem___024root();
    VL_UNCOPYABLE(Vinst_mem___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
