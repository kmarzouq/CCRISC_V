// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc_top.h for the primary calling header

#ifndef VERILATED_VSOC_TOP___024UNIT_H_
#define VERILATED_VSOC_TOP___024UNIT_H_  // guard

#include "verilated.h"


class Vsoc_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsoc_top___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vsoc_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsoc_top___024unit(Vsoc_top__Syms* symsp, const char* v__name);
    ~Vsoc_top___024unit();
    VL_UNCOPYABLE(Vsoc_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
