// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040895_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040895_TOP___024UNIT_H_
#define VERILATED_VYSYX_22040895_TOP___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040895_top__Syms;
class Vysyx_22040895_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040895_top___024unit) {
  public:

    // INTERNAL VARIABLES
    Vysyx_22040895_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040895_top___024unit);  ///< Copying not allowed
  public:
    Vysyx_22040895_top___024unit(const char* name);
    ~Vysyx_22040895_top___024unit();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040895_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
