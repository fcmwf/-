// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VCPU__DPI_H_
#define VERILATED_VCPU__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/xhyvm2/gitwork/labs/COMPSYS/simulator/IP/mycpu/ICache.sv:11:34
    extern void pmem_read(svBit re, int addr, int mask, int* rword);
    // DPI import at /home/xhyvm2/gitwork/labs/COMPSYS/simulator/IP/mycpu/DCache.sv:17:34
    extern void pmem_write(svBit we, int addr, int mask, int wword);
    // DPI import at /home/xhyvm2/gitwork/labs/COMPSYS/simulator/IP/mycpu/CSR.sv:12:34
    extern void set_csr_ptr(const svOpenArrayHandle m1, const svOpenArrayHandle m2, const svOpenArrayHandle m3, const svOpenArrayHandle m4);
    // DPI import at /home/xhyvm2/gitwork/labs/COMPSYS/simulator/IP/mycpu/Regfile.sv:12:34
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif

#endif  // guard
