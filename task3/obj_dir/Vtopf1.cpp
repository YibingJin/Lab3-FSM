// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtopf1.h"
#include "Vtopf1__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtopf1::Vtopf1(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtopf1__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , data_out{vlSymsp->TOP.data_out}
    , N{vlSymsp->TOP.N}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtopf1::Vtopf1(const char* _vcname__)
    : Vtopf1(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtopf1::~Vtopf1() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtopf1___024root___eval_initial(Vtopf1___024root* vlSelf);
void Vtopf1___024root___eval_settle(Vtopf1___024root* vlSelf);
void Vtopf1___024root___eval(Vtopf1___024root* vlSelf);
#ifdef VL_DEBUG
void Vtopf1___024root___eval_debug_assertions(Vtopf1___024root* vlSelf);
#endif  // VL_DEBUG
void Vtopf1___024root___final(Vtopf1___024root* vlSelf);

static void _eval_initial_loop(Vtopf1__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtopf1___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtopf1___024root___eval_settle(&(vlSymsp->TOP));
        Vtopf1___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vtopf1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtopf1::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtopf1___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtopf1___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vtopf1::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtopf1::final() {
    Vtopf1___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtopf1::hierName() const { return vlSymsp->name(); }
const char* Vtopf1::modelName() const { return "Vtopf1"; }
unsigned Vtopf1::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vtopf1::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtopf1___024root__trace_init_top(Vtopf1___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtopf1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtopf1___024root*>(voidSelf);
    Vtopf1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtopf1___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtopf1___024root__trace_register(Vtopf1___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtopf1::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtopf1___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
