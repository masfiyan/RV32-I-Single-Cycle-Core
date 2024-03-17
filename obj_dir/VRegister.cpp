// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRegister.h"
#include "VRegister__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRegister::VRegister(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRegister__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , reg_Write{vlSymsp->TOP.reg_Write}
    , inst{vlSymsp->TOP.inst}
    , write_date{vlSymsp->TOP.write_date}
    , rs1{vlSymsp->TOP.rs1}
    , rs2{vlSymsp->TOP.rs2}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VRegister::VRegister(const char* _vcname__)
    : VRegister(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRegister::~VRegister() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VRegister___024root___eval_initial(VRegister___024root* vlSelf);
void VRegister___024root___eval_settle(VRegister___024root* vlSelf);
void VRegister___024root___eval(VRegister___024root* vlSelf);
#ifdef VL_DEBUG
void VRegister___024root___eval_debug_assertions(VRegister___024root* vlSelf);
#endif  // VL_DEBUG
void VRegister___024root___final(VRegister___024root* vlSelf);

static void _eval_initial_loop(VRegister__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VRegister___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VRegister___024root___eval_settle(&(vlSymsp->TOP));
        VRegister___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VRegister::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRegister::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRegister___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VRegister___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VRegister::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VRegister::final() {
    VRegister___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRegister::hierName() const { return vlSymsp->name(); }
const char* VRegister::modelName() const { return "VRegister"; }
unsigned VRegister::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VRegister::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VRegister___024root__trace_init_top(VRegister___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRegister___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegister___024root*>(voidSelf);
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VRegister___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VRegister___024root__trace_register(VRegister___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRegister::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VRegister::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRegister___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
