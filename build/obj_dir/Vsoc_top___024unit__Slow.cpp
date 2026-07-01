// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top__pch.h"
#include "Vsoc_top__Syms.h"
#include "Vsoc_top___024unit.h"

void Vsoc_top___024unit___ctor_var_reset(Vsoc_top___024unit* vlSelf);

Vsoc_top___024unit::Vsoc_top___024unit(Vsoc_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsoc_top___024unit___ctor_var_reset(this);
}

void Vsoc_top___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsoc_top___024unit::~Vsoc_top___024unit() {
}
