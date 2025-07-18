// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VAQUILA_TESTHARNESS_H_
#define VERILATED_VAQUILA_TESTHARNESS_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vaquila_testharness__Syms;
class Vaquila_testharness___024root;
class VerilatedFstC;
class Vaquila_testharness_aquila_testharness;


// This class is the main interface to the Verilated model
class Vaquila_testharness VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vaquila_testharness__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_OUT8(&spi_ss,0,0);
    VL_OUT8(&spi_sck,0,0);
    VL_OUT8(&spi_mosi,0,0);
    VL_IN8(&spi_miso,0,0);
    VL_IN(&main_memory_addr,31,0);
    VL_OUT(&cur_instr_addr,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vaquila_testharness_aquila_testharness* const aquila_testharness;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vaquila_testharness___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vaquila_testharness(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vaquila_testharness(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vaquila_testharness();
  private:
    VL_UNCOPYABLE(Vaquila_testharness);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedFstC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
