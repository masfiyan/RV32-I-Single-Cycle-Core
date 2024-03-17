// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vinst_mem.h"
#include "Vinst_mem__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vinst_mem::Vinst_mem(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vinst_mem__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , addr{vlSymsp->TOP.addr}
    , inst{vlSymsp->TOP.inst}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vinst_mem::Vinst_mem(const char* _vcname__)
    : Vinst_mem(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vinst_mem::~Vinst_mem() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vinst_mem___024root___eval_initial(Vinst_mem___024root* vlSelf);
void Vinst_mem___024root___eval_settle(Vinst_mem___024root* vlSelf);
void Vinst_mem___024root___eval(Vinst_mem___024root* vlSelf);
#ifdef VL_DEBUG
void Vinst_mem___024root___eval_debug_assertions(Vinst_mem___024root* vlSelf);
#endif  // VL_DEBUG
void Vinst_mem___024root___final(Vinst_mem___024root* vlSelf);

static void _eval_initial_loop(Vinst_mem__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vinst_mem___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vinst_mem___024root___eval_settle(&(vlSymsp->TOP));
        Vinst_mem___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vinst_mem::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vinst_mem::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vinst_mem___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vinst_mem___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vinst_mem::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vinst_mem::final() {
    Vinst_mem___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vinst_mem::hierName() const { return vlSymsp->name(); }
const char* Vinst_mem::modelName() const { return "Vinst_mem"; }
unsigned Vinst_mem::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vinst_mem::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vinst_mem___024root__trace_init_top(Vinst_mem___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vinst_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinst_mem___024root*>(voidSelf);
    Vinst_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vinst_mem___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vinst_mem___024root__trace_register(Vinst_mem___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vinst_mem::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vinst_mem::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vinst_mem___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
