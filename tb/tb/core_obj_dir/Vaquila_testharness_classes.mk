# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vaquila_testharness.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vaquila_testharness \
	Vaquila_testharness___024root__DepSet_h9dc2b255__0 \
	Vaquila_testharness___024root__DepSet_h568d0bc1__0 \
	Vaquila_testharness_aquila_testharness__DepSet_h5997e4c0__0 \
	Vaquila_testharness_aquila_top__DepSet_h134878e0__0 \
	Vaquila_testharness_dp_ram__DepSet_hfd631e94__0 \
	Vaquila_testharness_dp_ram__DepSet_h75eea882__0 \
	Vaquila_testharness_intc__DepSet_h09fffc54__0 \
	Vaquila_testharness_intc__DepSet_hca89c9c2__0 \
	Vaquila_testharness_mock_uart__DepSet_h03d96f26__0 \
	Vaquila_testharness_mock_uart__DepSet_hc4a83910__0 \
	Vaquila_testharness_core_top__DepSet_hdc01b3c6__0 \
	Vaquila_testharness_core_top__DepSet_h97500d30__0 \
	Vaquila_testharness_csr_file__DepSet_hc6196cb9__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vaquila_testharness__ConstPool_0 \
	Vaquila_testharness___024root__Slow \
	Vaquila_testharness___024root__DepSet_h9dc2b255__0__Slow \
	Vaquila_testharness___024root__DepSet_h568d0bc1__0__Slow \
	Vaquila_testharness_aquila_testharness__Slow \
	Vaquila_testharness_aquila_testharness__DepSet_h5997e4c0__0__Slow \
	Vaquila_testharness_aquila_testharness__DepSet_h1ae1c236__0__Slow \
	Vaquila_testharness_aquila_top__Slow \
	Vaquila_testharness_aquila_top__DepSet_h134878e0__0__Slow \
	Vaquila_testharness_aquila_top__DepSet_hd4174656__0__Slow \
	Vaquila_testharness_dp_ram__Slow \
	Vaquila_testharness_dp_ram__DepSet_hfd631e94__0__Slow \
	Vaquila_testharness_dp_ram__DepSet_h75eea882__0__Slow \
	Vaquila_testharness_intc__Slow \
	Vaquila_testharness_intc__DepSet_h09fffc54__0__Slow \
	Vaquila_testharness_intc__DepSet_hca89c9c2__0__Slow \
	Vaquila_testharness_mock_uart__Slow \
	Vaquila_testharness_mock_uart__DepSet_hc4a83910__0__Slow \
	Vaquila_testharness_core_top__Slow \
	Vaquila_testharness_core_top__DepSet_hdc01b3c6__0__Slow \
	Vaquila_testharness_core_top__DepSet_h97500d30__0__Slow \
	Vaquila_testharness_csr_file__Slow \
	Vaquila_testharness_csr_file__DepSet_hc6196cb9__0__Slow \
	Vaquila_testharness_csr_file__DepSet_h81683aad__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vaquila_testharness__Dpi \
	Vaquila_testharness__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vaquila_testharness__Syms \
	Vaquila_testharness__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_fst_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
