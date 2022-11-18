// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040895_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040895_TOP___024ROOT_H_
#define VERILATED_VYSYX_22040895_TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040895_top__Syms;
class Vysyx_22040895_top_VerilatedVcd;
class Vysyx_22040895_top___024unit;


//----------

VL_MODULE(Vysyx_22040895_top___024root) {
  public:
    // CELLS
    Vysyx_22040895_top___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN(inst_i,31,0);
    VL_OUT64(instaddr_o,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ top__DOT__ce_ifu_instrom;
    CData/*6:0*/ top__DOT__opcode_id_cu;
    CData/*2:0*/ top__DOT__func3_id_cu;
    CData/*6:0*/ top__DOT__func7_id_cu;
    CData/*4:0*/ top__DOT__rs1addr_id_reg;
    CData/*4:0*/ top__DOT__rs2addr_id_reg;
    CData/*4:0*/ top__DOT__rdaddr_id_reg;
    CData/*3:0*/ top__DOT__aluop_cu_exu;
    CData/*2:0*/ top__DOT__bcuop_cu_exu;
    CData/*1:0*/ top__DOT__sl_cu_mmu_exu;
    CData/*1:0*/ top__DOT__munit_cu_mmu;
    CData/*0:0*/ top__DOT__my_ifu__DOT__my_pc__DOT__pcsel;
    CData/*0:0*/ top__DOT__my_cu__DOT__addi_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__add_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__sub_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__andi_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__and_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__sll_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__ori_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__or_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__srl_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__xori_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__xor_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__sra_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__slti_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__slt_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__sltiu_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__sltu_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__addw_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__lh_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__lw_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__ld_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__addiw_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__beq_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__bge_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__sh_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__bgeu_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__sw_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__blt_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__sd_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__bltu_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__bne_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__jalr_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__store_op;
    CData/*0:0*/ top__DOT__my_cu__DOT__load_op;
    CData/*0:0*/ top__DOT__my_exu__DOT__my_alu__DOT__adder_cout;
    CData/*7:0*/ top__DOT__my_mmu__DOT__munit_o_mmu;
    SData/*11:0*/ top__DOT__imm1_id_sext;
    IData/*19:0*/ top__DOT__imm2_id_sext;
    QData/*63:0*/ top__DOT__simm_sext_opnummux_exu;
    QData/*63:0*/ top__DOT__rdata1_reg_mux;
    QData/*63:0*/ top__DOT__wdata_mmu_reg;
    QData/*63:0*/ top__DOT__pc_id_exu;
    QData/*63:0*/ top__DOT__opnum2_opnumsel_ex;
    QData/*63:0*/ top__DOT__result_exu_mmu;
    QData/*63:0*/ top__DOT__my_exu__DOT__op2_i_alu;
    QData/*63:0*/ top__DOT__my_exu__DOT__alu_result;
    QData/*63:0*/ top__DOT__my_exu__DOT__my_alu__DOT__sub_result;
    QData/*63:0*/ top__DOT__my_exu__DOT__my_alu__DOT__slt_result;
    QData/*63:0*/ top__DOT__my_exu__DOT__my_alu__DOT__adder_result;
    QData/*63:0*/ top__DOT__my_exu__DOT__my_alu__DOT__op2;
    QData/*63:0*/ top__DOT__my_exu__DOT__my_alu__DOT__cin;
    QData/*63:0*/ top__DOT__my_mmu__DOT__rmdata_i_mmu;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__my_regfile__DOT__regs;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_22040895_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040895_top___024root);  ///< Copying not allowed
  public:
    Vysyx_22040895_top___024root(const char* name);
    ~Vysyx_22040895_top___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040895_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
