// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN(inst_i,31,0);
    VL_OUT(instaddr_o,31,0);

    // LOCAL SIGNALS
    CData/*0:0*/ top__DOT__ce_ifu_instrom;
    CData/*4:0*/ top__DOT__rs1addr_id_reg;
    CData/*4:0*/ top__DOT__rdaddr_id_reg;
    CData/*1:0*/ top__DOT__opsrc_cu_opnumsel;
    CData/*0:0*/ top__DOT__my_cu__DOT__addi;
    SData/*11:0*/ top__DOT__imm1_id_sext;
    IData/*19:0*/ top__DOT__imm2_id_sext;
    QData/*63:0*/ top__DOT__simm_sext_opnummux;
    QData/*63:0*/ top__DOT__rdata1_reg_mux;
    QData/*63:0*/ top__DOT__wdata_ex_reg;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__my_regfile__DOT__regs;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
