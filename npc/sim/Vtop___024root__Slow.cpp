// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop___024root___combo__TOP__2(Vtop___024root* vlSelf);

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___combo__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst_i = VL_RAND_RESET_I(32);
    vlSelf->instaddr_o = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ce_ifu_instrom = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__opcode_id_cu = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__func3_id_cu = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__func7_id_cu = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__imm1_id_sext = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__imm2_id_sext = VL_RAND_RESET_I(20);
    vlSelf->top__DOT__simm_sext_opnummux_exu = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__rs1addr_id_reg = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rs2addr_id_reg = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rdaddr_id_reg = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__aluop_cu_exu = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__bcuop_cu_exu = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__rdata1_reg_mux = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__pc_id_exu = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__opnum2_opnumsel_ex = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_ifu__DOT__my_pc__DOT__pcsel = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__my_regfile__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__my_cu__DOT__addi_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_cu__DOT__add_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_cu__DOT__sub_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_cu__DOT__andi_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_cu__DOT__and_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_cu__DOT__sll_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_cu__DOT__ori_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_cu__DOT__or_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_cu__DOT__srl_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_cu__DOT__xori_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_cu__DOT__xor_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_cu__DOT__sra_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_cu__DOT__slti_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_cu__DOT__slt_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_cu__DOT__sltiu_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_cu__DOT__sltu_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_cu__DOT__beq_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_cu__DOT__bge_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_cu__DOT__bgeu_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_cu__DOT__blt_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_cu__DOT__bltu_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_cu__DOT__jalr_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_cu__DOT__bne_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__dnpc_o_bcu = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__sub_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__slt_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__adder_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__adder_cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__op2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__cin = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}