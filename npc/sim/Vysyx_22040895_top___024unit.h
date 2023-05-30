// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040895_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040895_TOP___024UNIT_H_
#define VERILATED_VYSYX_22040895_TOP___024UNIT_H_  // guard

#include "verilated.h"

class Vysyx_22040895_top__Syms;

class Vysyx_22040895_top___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vysyx_22040895_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_22040895_top___024unit(Vysyx_22040895_top__Syms* symsp, const char* name);
    ~Vysyx_22040895_top___024unit();
    VL_UNCOPYABLE(Vysyx_22040895_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
