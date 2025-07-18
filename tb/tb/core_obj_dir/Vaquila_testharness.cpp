// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vaquila_testharness.h"
#include "Vaquila_testharness__Syms.h"
#include "verilated_fst_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vaquila_testharness::Vaquila_testharness(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vaquila_testharness__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , spi_ss{vlSymsp->TOP.spi_ss}
    , spi_sck{vlSymsp->TOP.spi_sck}
    , spi_mosi{vlSymsp->TOP.spi_mosi}
    , spi_miso{vlSymsp->TOP.spi_miso}
    , main_memory_addr{vlSymsp->TOP.main_memory_addr}
    , cur_instr_addr{vlSymsp->TOP.cur_instr_addr}
    , aquila_testharness{vlSymsp->TOP.aquila_testharness}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vaquila_testharness::Vaquila_testharness(const char* _vcname__)
    : Vaquila_testharness(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vaquila_testharness::~Vaquila_testharness() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vaquila_testharness___024root___eval_initial(Vaquila_testharness___024root* vlSelf);
void Vaquila_testharness___024root___eval_settle(Vaquila_testharness___024root* vlSelf);
void Vaquila_testharness___024root___eval(Vaquila_testharness___024root* vlSelf);
#ifdef VL_DEBUG
void Vaquila_testharness___024root___eval_debug_assertions(Vaquila_testharness___024root* vlSelf);
#endif  // VL_DEBUG
void Vaquila_testharness___024root___final(Vaquila_testharness___024root* vlSelf);

static void _eval_initial_loop(Vaquila_testharness__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vaquila_testharness___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vaquila_testharness___024root___eval_settle(&(vlSymsp->TOP));
        Vaquila_testharness___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vaquila_testharness::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vaquila_testharness::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vaquila_testharness___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vaquila_testharness___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vaquila_testharness::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vaquila_testharness::final() {
    Vaquila_testharness___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vaquila_testharness::hierName() const { return vlSymsp->name(); }
const char* Vaquila_testharness::modelName() const { return "Vaquila_testharness"; }
unsigned Vaquila_testharness::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vaquila_testharness::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vaquila_testharness___024root__trace_init_top(Vaquila_testharness___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vaquila_testharness___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaquila_testharness___024root*>(voidSelf);
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vaquila_testharness___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vaquila_testharness___024root__trace_register(Vaquila_testharness___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vaquila_testharness::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vaquila_testharness::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vaquila_testharness___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
