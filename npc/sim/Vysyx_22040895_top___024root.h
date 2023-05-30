// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040895_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040895_TOP___024ROOT_H_
#define VERILATED_VYSYX_22040895_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_22040895_top__Syms;
class Vysyx_22040895_top___024unit;


class Vysyx_22040895_top___024root final : public VerilatedModule {
  public:
    // CELLS
    Vysyx_22040895_top___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*0:0*/ top__DOT__ce_ifu_instrom;
        CData/*6:0*/ top__DOT__opcode_id_cu;
        CData/*2:0*/ top__DOT__func3_id_cu;
        CData/*6:0*/ top__DOT__func7_id_cu;
        CData/*4:0*/ top__DOT__rs1addr_id_reg;
        CData/*4:0*/ top__DOT__rs2addr_id_reg;
        CData/*4:0*/ top__DOT__rdaddr_id_reg;
        CData/*3:0*/ top__DOT__aluop_cu_exu;
        CData/*2:0*/ top__DOT__bcuop_cu_exu;
        CData/*3:0*/ top__DOT__mduop_cu_exu;
        CData/*0:0*/ top__DOT__wordop_cu_exu;
        CData/*1:0*/ top__DOT__sl_cu_mmu_exu;
        CData/*0:0*/ top__DOT__mew_cu_mmu;
        CData/*1:0*/ top__DOT__munit_cu_mmu;
        CData/*2:0*/ top__DOT__csrraddr_idu_csr;
        CData/*0:0*/ top__DOT__re_cu_csr;
        CData/*2:0*/ top__DOT__privileged_op_cu_privileged;
        CData/*0:0*/ top__DOT__my_ifu__DOT__my_pc__DOT__pcsel;
        CData/*0:0*/ top__DOT__my_idu__DOT__beq;
        CData/*0:0*/ top__DOT__my_idu__DOT__bge;
        CData/*0:0*/ top__DOT__my_idu__DOT__bgeu;
        CData/*0:0*/ top__DOT__my_idu__DOT__blt;
        CData/*0:0*/ top__DOT__my_idu__DOT__bltu;
        CData/*0:0*/ top__DOT__my_idu__DOT__bne;
        CData/*2:0*/ top__DOT__my_idu__DOT__csraddr;
        CData/*0:0*/ top__DOT__my_cu__DOT__csrrs_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__csrrw_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__addi_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__add_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__sub_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__andi_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__and_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__subw_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__ori_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__or_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__sll_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__xori_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__xor_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__sllw_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__slti_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__slt_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__srl_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__sltiu_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__sltu_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__srlw_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__addw_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__sra_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__lbu_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__sraw_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__lh_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__lhu_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__lw_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__ld_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__addiw_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__srai_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__sraiw_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__srli_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__srliw_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__slli_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__slliw_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__sh_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__sw_op;
    };
    struct {
        CData/*0:0*/ top__DOT__my_cu__DOT__sd_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__jalr_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__load_op;
        CData/*0:0*/ top__DOT__my_cu__DOT__load_unsigned_op;
        CData/*0:0*/ top__DOT__my_cu__DOT____VdfgTmp_hde486365__0;
        CData/*0:0*/ top__DOT__my_cu__DOT____VdfgTmp_h85762de3__0;
        CData/*0:0*/ top__DOT__my_cu__DOT____VdfgTmp_h88ef4d41__0;
        CData/*0:0*/ top__DOT__my_cu__DOT____VdfgTmp_h993c3d0f__0;
        CData/*0:0*/ top__DOT__my_cu__DOT____VdfgTmp_h9a1a96aa__0;
        CData/*0:0*/ top__DOT__my_cu__DOT____VdfgTmp_h91a0a311__0;
        CData/*0:0*/ top__DOT__my_cu__DOT____VdfgTmp_hc013935d__0;
        CData/*0:0*/ top__DOT__my_cu__DOT____VdfgTmp_h4550e04c__0;
        CData/*0:0*/ top__DOT__my_exu__DOT__lt_alu_bcu;
        CData/*0:0*/ top__DOT__my_exu__DOT____VdfgTmp_h6e87c126__0;
        CData/*0:0*/ top__DOT__my_exu__DOT____VdfgTmp_hecbdebcd__0;
        CData/*0:0*/ top__DOT__my_exu__DOT__my_alu__DOT__adder_cout;
        CData/*0:0*/ top__DOT__my_exu__DOT__my_alu__DOT____VdfgTmp_h2cc5735b__0;
        CData/*0:0*/ top__DOT__my_exu__DOT__my_alu__DOT____VdfgTmp_hee26600d__0;
        CData/*7:0*/ top__DOT__my_mmu__DOT__munit_o_mmu;
        CData/*0:0*/ __VdfgTmp_h06e588e5__0;
        CData/*0:0*/ __VdfgTmp_hf4b63914__0;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ __VdfgTmp_h325779d1__0;
        VL_IN(inst_i,31,0);
        IData/*19:0*/ __VdfgTmp_h2ddab970__0;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_OUT64(instaddr_o,63,0);
        QData/*63:0*/ top__DOT__simm_sext_opnummux_exu;
        QData/*63:0*/ top__DOT__rdata1_reg_mux;
        QData/*63:0*/ top__DOT__pc_id_exu_csr;
        QData/*63:0*/ top__DOT__opnum2_opnumsel_ex;
        QData/*63:0*/ top__DOT__result_exu_mmu;
        QData/*63:0*/ top__DOT__csrrdata_csr_privileged;
        QData/*63:0*/ top__DOT__csrwdata_privileged_csr;
        QData/*63:0*/ top__DOT__csrwdata_mtvec_privileged_csr;
        QData/*63:0*/ top__DOT__csrwdata_mstatus_privileged_csr;
        QData/*63:0*/ top__DOT__result_privileged_exu;
        QData/*63:0*/ top__DOT__my_exu__DOT__op2_i_alu;
        QData/*63:0*/ top__DOT__my_exu__DOT__alu_result;
        QData/*63:0*/ top__DOT__my_exu__DOT__math_result;
        QData/*63:0*/ top__DOT__my_exu__DOT__my_alu__DOT__add_sub_result;
        QData/*63:0*/ top__DOT__my_exu__DOT__my_alu__DOT__sub_result;
        QData/*63:0*/ top__DOT__my_exu__DOT__my_alu__DOT__op2;
        QData/*63:0*/ top__DOT__my_exu__DOT__my_mdu__DOT__multiplication;
        QData/*63:0*/ top__DOT__my_exu__DOT__my_mdu__DOT__division;
        QData/*63:0*/ top__DOT__my_exu__DOT__my_mdu__DOT__reminder;
        QData/*63:0*/ top__DOT__my_exu__DOT__my_mdu__DOT____VdfgTmp_h3ffa10bd__0;
        QData/*63:0*/ top__DOT__my_mmu__DOT__rmdata_i_mmu;
        QData/*63:0*/ top__DOT__my_csr__DOT____Vlvbound_hbcf75953__0;
        QData/*63:0*/ top__DOT__my_privileged__DOT__mstatus;
        QData/*63:0*/ top__DOT__my_privileged__DOT__temp;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__my_regfile__DOT__regs;
        VlUnpacked<QData/*63:0*/, 5> top__DOT__my_csr__DOT__csr;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_22040895_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_22040895_top___024root(Vysyx_22040895_top__Syms* symsp, const char* name);
    ~Vysyx_22040895_top___024root();
    VL_UNCOPYABLE(Vysyx_22040895_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
