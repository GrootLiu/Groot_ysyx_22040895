// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040895_top.h for the primary calling header

#include "Vysyx_22040895_top___024root.h"
#include "Vysyx_22040895_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040895_top___024root___ctor_var_reset(Vysyx_22040895_top___024root* vlSelf);

Vysyx_22040895_top___024root::Vysyx_22040895_top___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040895_top___024root___ctor_var_reset(this);
}

void Vysyx_22040895_top___024root::__Vconfigure(Vysyx_22040895_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040895_top___024root::~Vysyx_22040895_top___024root() {
}

void Vysyx_22040895_top___024root___settle__TOP__2(Vysyx_22040895_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040895_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040895_top___024root___settle__TOP__2\n"); );
    // Variables
    CData/*0:0*/ ysyx_22040895_top__DOT__my_cu__DOT__beq_op;
    CData/*0:0*/ ysyx_22040895_top__DOT__my_cu__DOT__bge_op;
    CData/*0:0*/ ysyx_22040895_top__DOT__my_cu__DOT__bgeu_op;
    CData/*0:0*/ ysyx_22040895_top__DOT__my_cu__DOT__blt_op;
    CData/*0:0*/ ysyx_22040895_top__DOT__my_cu__DOT__bltu_op;
    CData/*0:0*/ ysyx_22040895_top__DOT__my_cu__DOT__bne_op;
    SData/*11:0*/ ysyx_22040895_top__DOT__imm1_id_sext;
    IData/*19:0*/ ysyx_22040895_top__DOT__imm2_id_sext;
    VlWide<3>/*95:0*/ __Vtemp2;
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp6;
    QData/*63:0*/ ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_result;
    QData/*63:0*/ ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__op2;
    QData/*63:0*/ ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__cin;
    // Body
    if (vlSelf->rst) {
        vlSelf->ysyx_22040895_top__DOT__rs1addr_id_reg = 0U;
        vlSelf->ysyx_22040895_top__DOT__rs2addr_id_reg = 0U;
        vlSelf->ysyx_22040895_top__DOT__func7_id_cu = 0U;
        vlSelf->ysyx_22040895_top__DOT__func3_id_cu = 0U;
        vlSelf->ysyx_22040895_top__DOT__rdaddr_id_reg = 0U;
        vlSelf->ysyx_22040895_top__DOT__opcode_id_cu = 0U;
        vlSelf->ysyx_22040895_top__DOT__pc_id_exu = 0ULL;
    } else {
        vlSelf->ysyx_22040895_top__DOT__rs1addr_id_reg 
            = (0x1fU & (vlSelf->inst_i >> 0xfU));
        vlSelf->ysyx_22040895_top__DOT__rs2addr_id_reg 
            = (0x1fU & (vlSelf->inst_i >> 0x14U));
        vlSelf->ysyx_22040895_top__DOT__func7_id_cu 
            = (vlSelf->inst_i >> 0x19U);
        vlSelf->ysyx_22040895_top__DOT__func3_id_cu 
            = (7U & (vlSelf->inst_i >> 0xcU));
        vlSelf->ysyx_22040895_top__DOT__rdaddr_id_reg 
            = (0x1fU & (vlSelf->inst_i >> 7U));
        vlSelf->ysyx_22040895_top__DOT__opcode_id_cu 
            = (0x7fU & vlSelf->inst_i);
        vlSelf->ysyx_22040895_top__DOT__pc_id_exu = vlSelf->instaddr_o;
    }
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__add_op 
        = (((0x33U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
            & (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu))) 
           & (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__func7_id_cu)));
    if (vlSelf->rst) {
        ysyx_22040895_top__DOT__imm2_id_sext = 0U;
        ysyx_22040895_top__DOT__imm1_id_sext = 0U;
    } else {
        ysyx_22040895_top__DOT__imm2_id_sext = (0xfffffU 
                                                & ((0x6fU 
                                                    == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))
                                                    ? 
                                                   ((0x80000U 
                                                     & (vlSelf->inst_i 
                                                        >> 0xcU)) 
                                                    | ((0x7f800U 
                                                        & (vlSelf->inst_i 
                                                           >> 1U)) 
                                                       | ((0x400U 
                                                           & (vlSelf->inst_i 
                                                              >> 0xaU)) 
                                                          | (0x3ffU 
                                                             & (vlSelf->inst_i 
                                                                >> 0x15U)))))
                                                    : 
                                                   (vlSelf->inst_i 
                                                    >> 0xcU)));
        ysyx_22040895_top__DOT__imm1_id_sext = (0xfffU 
                                                & ((((((((0x63U 
                                                          == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                                         & (0U 
                                                            == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu))) 
                                                        | ((0x63U 
                                                            == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                                           & (5U 
                                                              == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))) 
                                                       | ((0x63U 
                                                           == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                                          & (7U 
                                                             == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))) 
                                                      | ((0x63U 
                                                          == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                                         & (4U 
                                                            == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))) 
                                                     | ((0x63U 
                                                         == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                                        & (6U 
                                                           == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))) 
                                                    | ((0x63U 
                                                        == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                                       & (1U 
                                                          == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu))))
                                                    ? 
                                                   ((0xf00U 
                                                     & vlSelf->inst_i) 
                                                    | ((0xfcU 
                                                        & (vlSelf->inst_i 
                                                           >> 0x17U)) 
                                                       | ((2U 
                                                           & (vlSelf->inst_i 
                                                              >> 6U)) 
                                                          | (vlSelf->inst_i 
                                                             >> 0x1fU))))
                                                    : 
                                                   (vlSelf->inst_i 
                                                    >> 0x14U)));
    }
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sub_op 
        = (((0x33U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
            & (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu))) 
           & (0x20U == (IData)(vlSelf->ysyx_22040895_top__DOT__func7_id_cu)));
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__and_op 
        = (((0x33U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
            & (7U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu))) 
           & (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__func7_id_cu)));
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__or_op 
        = (((0x33U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
            & (6U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu))) 
           & (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__func7_id_cu)));
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xor_op 
        = (((0x33U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
            & (4U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu))) 
           & (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__func7_id_cu)));
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slt_op 
        = (((0x33U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
            & (2U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu))) 
           & (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__func7_id_cu)));
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltu_op 
        = (((0x33U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
            & (3U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu))) 
           & (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__func7_id_cu)));
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sll_op 
        = (((0x33U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
            & (1U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu))) 
           & (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__func7_id_cu)));
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__srl_op 
        = (((0x33U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
            & (5U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu))) 
           & (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__func7_id_cu)));
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sra_op 
        = (((0x33U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
            & (5U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu))) 
           & (0x20U == (IData)(vlSelf->ysyx_22040895_top__DOT__func7_id_cu)));
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op 
        = ((0x13U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
           & (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)));
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__andi_op 
        = ((0x13U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
           & (7U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)));
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__ori_op 
        = ((0x13U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
           & (6U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)));
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xori_op 
        = ((0x13U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
           & (4U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)));
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slti_op 
        = ((0x13U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
           & (2U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)));
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltiu_op 
        = ((0x13U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
           & (3U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)));
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__jalr_op 
        = ((0x67U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
           & (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)));
    ysyx_22040895_top__DOT__my_cu__DOT__beq_op = ((0x63U 
                                                   == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                                  & (0U 
                                                     == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)));
    ysyx_22040895_top__DOT__my_cu__DOT__bge_op = ((0x63U 
                                                   == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                                  & (5U 
                                                     == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)));
    ysyx_22040895_top__DOT__my_cu__DOT__bgeu_op = (
                                                   (0x63U 
                                                    == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                                   & (7U 
                                                      == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)));
    ysyx_22040895_top__DOT__my_cu__DOT__blt_op = ((0x63U 
                                                   == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                                  & (4U 
                                                     == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)));
    ysyx_22040895_top__DOT__my_cu__DOT__bltu_op = (
                                                   (0x63U 
                                                    == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)));
    ysyx_22040895_top__DOT__my_cu__DOT__bne_op = ((0x63U 
                                                   == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                                  & (1U 
                                                     == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)));
    vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu = 
        (7U & (((((((1U & (- (IData)((IData)(ysyx_22040895_top__DOT__my_cu__DOT__beq_op)))) 
                    | (2U & (- (IData)((IData)(ysyx_22040895_top__DOT__my_cu__DOT__bge_op))))) 
                   | (3U & (- (IData)((IData)(ysyx_22040895_top__DOT__my_cu__DOT__bgeu_op))))) 
                  | (4U & (- (IData)((IData)(ysyx_22040895_top__DOT__my_cu__DOT__blt_op))))) 
                 | (5U & (- (IData)((IData)(ysyx_22040895_top__DOT__my_cu__DOT__bltu_op))))) 
                | (6U & (- (IData)((IData)(ysyx_22040895_top__DOT__my_cu__DOT__bne_op))))) 
               | (- (IData)((0x6fU == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))))));
    vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux 
        = ((1U & (((IData)(vlSelf->rst) | (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__rs1addr_id_reg))) 
                  | (~ (((((((((((((((((((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op) 
                                             | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__andi_op)) 
                                            | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__ori_op)) 
                                           | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xori_op)) 
                                          | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slti_op)) 
                                         | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltiu_op)) 
                                        | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__add_op)) 
                                       | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sub_op)) 
                                      | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__and_op)) 
                                     | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__or_op)) 
                                    | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xor_op)) 
                                   | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slt_op)) 
                                  | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltu_op)) 
                                 | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sll_op)) 
                                | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__srl_op)) 
                               | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sra_op)) 
                              | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__beq_op)) 
                             | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__bge_op)) 
                            | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__bgeu_op)) 
                           | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__blt_op)) 
                          | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__bltu_op)) 
                         | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__bne_op)) 
                        | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__jalr_op)))))
            ? 0ULL : vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs
           [vlSelf->ysyx_22040895_top__DOT__rs1addr_id_reg]);
    vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu = 
        ((((((((((((1U & (- (IData)((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sub_op)))) 
                   | (6U & (- (IData)(((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__andi_op) 
                                       | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__and_op)))))) 
                  | (7U & (- (IData)(((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__ori_op) 
                                      | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__or_op)))))) 
                 | (8U & (- (IData)(((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xori_op) 
                                     | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xor_op)))))) 
                | (2U & (- (IData)(((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slti_op) 
                                        | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slt_op)) 
                                       | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__beq_op)) 
                                      | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__bge_op)) 
                                     | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__blt_op)) 
                                    | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__bne_op)))))) 
               | (9U & (- (IData)(((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltiu_op) 
                                     | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltu_op)) 
                                    | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__bgeu_op)) 
                                   | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__bltu_op)))))) 
              | (3U & (- (IData)((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sll_op))))) 
             | (4U & (- (IData)((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__srl_op))))) 
            | (5U & (- (IData)((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sra_op))))) 
           | (0xaU & (- (IData)((0x17U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)))))) 
          | (0xbU & (- (IData)((0x37U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)))))) 
         | (0xcU & (- (IData)((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__jalr_op)))));
    vlSelf->ysyx_22040895_top__DOT__simm_sext_opnummux_exu 
        = ((IData)(vlSelf->rst) ? 0ULL : ((1U & (((
                                                   ((((((((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op) 
                                                              | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__andi_op)) 
                                                             | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__ori_op)) 
                                                            | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xori_op)) 
                                                           | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slti_op)) 
                                                          | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltiu_op)) 
                                                         | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__beq_op)) 
                                                        | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__bge_op)) 
                                                       | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__bge_op)) 
                                                      | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__bgeu_op)) 
                                                     | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__blt_op)) 
                                                    | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__bltu_op)) 
                                                   | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__bne_op)) 
                                                  | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__jalr_op)) 
                                                 | (~ 
                                                    (((0x17U 
                                                       == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                                      | (0x6fU 
                                                         == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))) 
                                                     | (0x37U 
                                                        == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))))))
                                           ? (((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(ysyx_22040895_top__DOT__imm1_id_sext) 
                                                                      >> 0xbU))))) 
                                               << 0xcU) 
                                              | (QData)((IData)(ysyx_22040895_top__DOT__imm1_id_sext)))
                                           : (((- (QData)((IData)(
                                                                  (1U 
                                                                   & (ysyx_22040895_top__DOT__imm2_id_sext 
                                                                      >> 0x13U))))) 
                                               << 0x14U) 
                                              | (QData)((IData)(ysyx_22040895_top__DOT__imm2_id_sext)))));
    ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__cin 
        = ((((1U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu)) 
             | (2U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))) 
            | (9U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu)))
            ? 1ULL : 0ULL);
    vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex 
        = ((1U & ((~ (((((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op) 
                             | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__andi_op)) 
                            | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__ori_op)) 
                           | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xori_op)) 
                          | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slti_op)) 
                         | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltiu_op)) 
                        | (0x17U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))) 
                       | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__jalr_op)) 
                      | (0x37U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)))) 
                  | ((((((((((((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__add_op) 
                                   | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sub_op)) 
                                  | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__and_op)) 
                                 | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__or_op)) 
                                | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xor_op)) 
                               | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slt_op)) 
                              | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltu_op)) 
                             | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sll_op)) 
                            | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__srl_op)) 
                           | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sra_op)) 
                          | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__beq_op)) 
                         | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__bge_op)) 
                        | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__bgeu_op)) 
                       | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__blt_op)) 
                      | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__bltu_op)) 
                     | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__bne_op))))
            ? ((1U & (((IData)(vlSelf->rst) | (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__rs2addr_id_reg))) 
                      | (~ ((((((((((((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__add_op) 
                                          | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sub_op)) 
                                         | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__and_op)) 
                                        | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__or_op)) 
                                       | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xor_op)) 
                                      | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slt_op)) 
                                     | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltu_op)) 
                                    | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sll_op)) 
                                   | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__srl_op)) 
                                  | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sra_op)) 
                                 | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__beq_op)) 
                                | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__bge_op)) 
                               | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__bgeu_op)) 
                              | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__blt_op)) 
                             | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__bltu_op)) 
                            | (IData)(ysyx_22040895_top__DOT__my_cu__DOT__bne_op)))))
                ? 0ULL : vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs
               [vlSelf->ysyx_22040895_top__DOT__rs2addr_id_reg])
            : vlSelf->ysyx_22040895_top__DOT__simm_sext_opnummux_exu);
    ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__op2 
        = ((((1U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu)) 
             | (2U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))) 
            | (9U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu)))
            ? (~ vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)
            : vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex);
    VL_EXTEND_WQ(65,64, __Vtemp2, vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux);
    VL_EXTEND_WQ(65,64, __Vtemp3, ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__op2);
    VL_ADD_W(3, __Vtemp4, __Vtemp2, __Vtemp3);
    VL_EXTEND_WQ(65,64, __Vtemp5, ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__cin);
    VL_ADD_W(3, __Vtemp6, __Vtemp4, __Vtemp5);
    vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout 
        = (1U & __Vtemp6[2U]);
    ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_result 
        = ((vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux 
            + ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__op2) 
           + ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__cin);
    vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result 
        = (QData)((IData)((1U & (((IData)((vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux 
                                           >> 0x3fU)) 
                                  & (~ (IData)((vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex 
                                                >> 0x3fU)))) 
                                 | ((~ ((IData)((vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux 
                                                 >> 0x3fU)) 
                                        ^ (IData)((vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex 
                                                   >> 0x3fU)))) 
                                    & (IData)((ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_result 
                                               >> 0x3fU)))))));
    vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result 
        = (((0U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu)) 
            | (1U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu)))
            ? ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_result
            : ((6U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                ? (vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux 
                   & vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)
                : ((7U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                    ? (vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux 
                       | vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)
                    : ((8U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                        ? (vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux 
                           ^ vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)
                        : ((2U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                            ? vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result
                            : ((9U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                ? (QData)((IData)((1U 
                                                   & (~ (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)))))
                                : ((3U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                    ? VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux, vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)
                                    : ((4U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                        ? VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux, vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)
                                        : ((5U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                            ? VL_SHIFTRS_QQQ(64,64,64, vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux, vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)
                                            : 0ULL)))))))));
}

void Vysyx_22040895_top___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vysyx_22040895_top___024root___initial__TOP__4(Vysyx_22040895_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040895_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040895_top___024root___initial__TOP__4\n"); );
    // Body
    Vysyx_22040895_top___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs);
}

void Vysyx_22040895_top___024root___eval_initial(Vysyx_22040895_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040895_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040895_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vysyx_22040895_top___024root___initial__TOP__4(vlSelf);
}

void Vysyx_22040895_top___024root___eval_settle(Vysyx_22040895_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040895_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040895_top___024root___eval_settle\n"); );
    // Body
    Vysyx_22040895_top___024root___settle__TOP__2(vlSelf);
}

void Vysyx_22040895_top___024root___final(Vysyx_22040895_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040895_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040895_top___024root___final\n"); );
}

void Vysyx_22040895_top___024root___ctor_var_reset(Vysyx_22040895_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040895_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040895_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst_i = VL_RAND_RESET_I(32);
    vlSelf->instaddr_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040895_top__DOT__opcode_id_cu = VL_RAND_RESET_I(7);
    vlSelf->ysyx_22040895_top__DOT__func3_id_cu = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040895_top__DOT__func7_id_cu = VL_RAND_RESET_I(7);
    vlSelf->ysyx_22040895_top__DOT__simm_sext_opnummux_exu = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040895_top__DOT__rs1addr_id_reg = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040895_top__DOT__rs2addr_id_reg = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040895_top__DOT__rdaddr_id_reg = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040895_top__DOT__pc_id_exu = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__add_op = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sub_op = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__andi_op = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__and_op = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sll_op = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__ori_op = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__or_op = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__srl_op = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xori_op = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xor_op = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sra_op = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slti_op = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slt_op = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltiu_op = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltu_op = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__jalr_op = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout = VL_RAND_RESET_I(1);
}
