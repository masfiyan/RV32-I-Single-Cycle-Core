// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VProgramCounter.h"
#include "VProgramCounter__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VProgramCounter::VProgramCounter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VProgramCounter__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , start{vlSymsp->TOP.start}
    , pc{vlSymsp->TOP.pc}
    , pc4{vlSymsp->TOP.pc4}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VProgramCounter::VProgramCounter(const char* _vcname__)
    : VProgramCounter(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VProgramCounter::~VProgramCounter() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VProgramCounter___024root___eval_initial(VProgramCounter___024root* vlSelf);
void VProgramCounter___024root___eval_settle(VProgramCounter___024root* vlSelf);
void VProgramCounter___024root___eval(VProgramCounter___024root* vlSelf);
#ifdef VL_DEBUG
void VProgramCounter___024root___eval_debug_assertions(VProgramCounter___024root* vlSelf);
#endif  // VL_DEBUG
void VProgramCounter___024root___final(VProgramCounter___024root* vlSelf);

static void _eval_initial_loop(VProgramCounter__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VProgramCounter___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VProgramCounter___024root___eval_settle(&(vlSymsp->TOP));
        VProgramCounter___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VProgramCounter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VProgramCounter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VProgramCounter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VProgramCounter___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VProgramCounter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VProgramCounter::final() {
    VProgramCounter___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VProgramCounter::hierName() const { return vlSymsp->name(); }
const char* VProgramCounter::modelName() const { return "VProgramCounter"; }
unsigned VProgramCounter::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VProgramCounter::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VProgramCounter___024root__trace_init_top(VProgramCounter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VProgramCounter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VProgramCounter___024root*>(voidSelf);
    VProgramCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VProgramCounter___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VProgramCounter___024root__trace_register(VProgramCounter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VProgramCounter::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VProgramCounter::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VProgramCounter___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
