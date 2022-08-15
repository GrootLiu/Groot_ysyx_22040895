// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040895_top__Syms.h"


void Vysyx_22040895_top___024root__traceInitSub0(Vysyx_22040895_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22040895_top___024root__traceInitTop(Vysyx_22040895_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040895_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22040895_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22040895_top___024root__traceInitSub0(Vysyx_22040895_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040895_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+200,"clk", false,-1);
        tracep->declBit(c+201,"rst", false,-1);
        tracep->declBus(c+202,"inst_i", false,-1, 31,0);
        tracep->declQuad(c+203,"instaddr_o", false,-1, 63,0);
        tracep->declBit(c+200,"top clk", false,-1);
        tracep->declBit(c+201,"top rst", false,-1);
        tracep->declBus(c+202,"top inst_i", false,-1, 31,0);
        tracep->declQuad(c+203,"top instaddr_o", false,-1, 63,0);
        tracep->declBit(c+135,"top ce_ifu_instrom", false,-1);
        tracep->declBit(c+1,"top jump_branch_cu_ifu", false,-1);
        tracep->declBus(c+202,"top inst_ifu_idu", false,-1, 31,0);
        tracep->declQuad(c+203,"top pc_ifu_idu", false,-1, 63,0);
        tracep->declBus(c+2,"top opcode_id_cu", false,-1, 6,0);
        tracep->declBus(c+3,"top func3_id_cu", false,-1, 2,0);
        tracep->declBus(c+4,"top func7_id_cu", false,-1, 6,0);
        tracep->declBus(c+5,"top imm1_id_sext", false,-1, 11,0);
        tracep->declBus(c+6,"top imm2_id_sext", false,-1, 19,0);
        tracep->declBit(c+7,"top immsel_cu_sext", false,-1);
        tracep->declQuad(c+8,"top simm_sext_opnummux_exu", false,-1, 63,0);
        tracep->declBus(c+10,"top rs1addr_id_reg", false,-1, 4,0);
        tracep->declBus(c+11,"top rs2addr_id_reg", false,-1, 4,0);
        tracep->declBus(c+12,"top rdaddr_id_reg", false,-1, 4,0);
        tracep->declBit(c+13,"top re1_cu_reg", false,-1);
        tracep->declBit(c+14,"top re2_cu_reg", false,-1);
        tracep->declBit(c+15,"top we_cu_reg", false,-1);
        tracep->declBit(c+16,"top opsrc_cu_opnumsel", false,-1);
        tracep->declBus(c+17,"top aluop_cu_exu", false,-1, 3,0);
        tracep->declBus(c+18,"top bcuop_cu_exu", false,-1, 2,0);
        tracep->declBit(c+19,"top jump_branch_exu_cu", false,-1);
        tracep->declQuad(c+20,"top dnpc_exu_ifu", false,-1, 63,0);
        tracep->declQuad(c+22,"top rdata1_reg_mux", false,-1, 63,0);
        tracep->declQuad(c+205,"top rdata2_reg_mux", false,-1, 63,0);
        tracep->declQuad(c+24,"top wdata_ex_reg", false,-1, 63,0);
        tracep->declQuad(c+26,"top pc_id_exu", false,-1, 63,0);
        tracep->declQuad(c+22,"top opnum1_opnumsel_ex", false,-1, 63,0);
        tracep->declQuad(c+28,"top opnum2_opnumsel_ex", false,-1, 63,0);
        tracep->declBit(c+200,"top my_ifu clk", false,-1);
        tracep->declBit(c+201,"top my_ifu rst", false,-1);
        tracep->declBus(c+202,"top my_ifu inst_i_ifu", false,-1, 31,0);
        tracep->declBit(c+1,"top my_ifu pcsel_i_ifu", false,-1);
        tracep->declQuad(c+20,"top my_ifu dnpc_i_ifu", false,-1, 63,0);
        tracep->declBus(c+202,"top my_ifu inst_o_ifu", false,-1, 31,0);
        tracep->declQuad(c+203,"top my_ifu instaddr_o_ifu", false,-1, 63,0);
        tracep->declQuad(c+203,"top my_ifu pc_o_ifu", false,-1, 63,0);
        tracep->declBit(c+135,"top my_ifu ce_o_ifu", false,-1);
        tracep->declBit(c+200,"top my_ifu my_pc clk", false,-1);
        tracep->declBit(c+201,"top my_ifu my_pc rst", false,-1);
        tracep->declBit(c+1,"top my_ifu my_pc pcsel_i_pc", false,-1);
        tracep->declQuad(c+20,"top my_ifu my_pc dnpc_i_pc", false,-1, 63,0);
        tracep->declQuad(c+203,"top my_ifu my_pc pc_o_pc", false,-1, 63,0);
        tracep->declBit(c+135,"top my_ifu my_pc ce_o_pc", false,-1);
        tracep->declBit(c+210,"top my_ifu my_pc pcsel", false,-1);
        tracep->declBit(c+201,"top my_sext rst", false,-1);
        tracep->declBit(c+7,"top my_sext immsel_i_sext", false,-1);
        tracep->declBus(c+5,"top my_sext imm1_i_sext", false,-1, 11,0);
        tracep->declBus(c+6,"top my_sext imm2_i_sext", false,-1, 19,0);
        tracep->declQuad(c+8,"top my_sext simm_o_sext", false,-1, 63,0);
        tracep->declQuad(c+30,"top my_sext sign_imm_ext", false,-1, 63,0);
        tracep->declQuad(c+32,"top my_sext sign_imm1_ext", false,-1, 63,0);
        tracep->declQuad(c+34,"top my_sext sign_imm2_ext", false,-1, 63,0);
        tracep->declBit(c+201,"top my_idu rst", false,-1);
        tracep->declBus(c+202,"top my_idu inst_i_idu", false,-1, 31,0);
        tracep->declQuad(c+203,"top my_idu pc_i_idu", false,-1, 63,0);
        tracep->declBus(c+2,"top my_idu opcode_o_idu", false,-1, 6,0);
        tracep->declBus(c+3,"top my_idu func3_o_idu", false,-1, 2,0);
        tracep->declBus(c+4,"top my_idu func7_o_idu", false,-1, 6,0);
        tracep->declBus(c+5,"top my_idu imm1_o_idu", false,-1, 11,0);
        tracep->declBus(c+6,"top my_idu imm2_o_idu", false,-1, 19,0);
        tracep->declBus(c+10,"top my_idu rs1addr_o_idu", false,-1, 4,0);
        tracep->declBus(c+11,"top my_idu rs2addr_o_idu", false,-1, 4,0);
        tracep->declBus(c+12,"top my_idu rdaddr_o_idu", false,-1, 4,0);
        tracep->declQuad(c+26,"top my_idu pc_o_idu", false,-1, 63,0);
        tracep->declBit(c+36,"top my_idu branch", false,-1);
        tracep->declBit(c+37,"top my_idu beq", false,-1);
        tracep->declBit(c+38,"top my_idu bge", false,-1);
        tracep->declBit(c+39,"top my_idu bgeu", false,-1);
        tracep->declBit(c+40,"top my_idu blt", false,-1);
        tracep->declBit(c+41,"top my_idu bltu", false,-1);
        tracep->declBit(c+42,"top my_idu bne", false,-1);
        tracep->declBit(c+43,"top my_idu jal", false,-1);
        tracep->declBit(c+44,"top my_idu store", false,-1);
        tracep->declBus(c+207,"top my_idu branch_offset", false,-1, 11,0);
        tracep->declBus(c+208,"top my_idu jal_offset", false,-1, 19,0);
        tracep->declBus(c+209,"top my_idu store_offset", false,-1, 11,0);
        tracep->declBit(c+200,"top my_regfile clk", false,-1);
        tracep->declBit(c+201,"top my_regfile rst", false,-1);
        tracep->declBit(c+13,"top my_regfile re1_i_reg", false,-1);
        tracep->declBit(c+14,"top my_regfile re2_i_reg", false,-1);
        tracep->declBit(c+15,"top my_regfile we_i_reg", false,-1);
        tracep->declBus(c+10,"top my_regfile raddr1_i_reg", false,-1, 4,0);
        tracep->declBus(c+11,"top my_regfile raddr2_i_reg", false,-1, 4,0);
        tracep->declBus(c+12,"top my_regfile waddr_i_reg", false,-1, 4,0);
        tracep->declQuad(c+22,"top my_regfile rdata1_o_reg", false,-1, 63,0);
        tracep->declQuad(c+205,"top my_regfile rdata2_o_reg", false,-1, 63,0);
        tracep->declQuad(c+24,"top my_regfile wdata_i_reg", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+136+i*2,"top my_regfile regs", true,(i+0), 63,0);}}
        tracep->declBit(c+16,"top my_opnumsel opsrc_i_opnumsel", false,-1);
        tracep->declQuad(c+8,"top my_opnumsel simm_i_opnumsel", false,-1, 63,0);
        tracep->declQuad(c+22,"top my_opnumsel rdata1_opnumsel", false,-1, 63,0);
        tracep->declQuad(c+205,"top my_opnumsel rdata2_opnumsel", false,-1, 63,0);
        tracep->declQuad(c+22,"top my_opnumsel opnum1_o_opnumsel", false,-1, 63,0);
        tracep->declQuad(c+28,"top my_opnumsel opnum2_o_opnumsel", false,-1, 63,0);
        tracep->declBit(c+201,"top my_cu rst", false,-1);
        tracep->declBus(c+2,"top my_cu opcode_i_cu", false,-1, 6,0);
        tracep->declBus(c+3,"top my_cu func3_i_cu", false,-1, 2,0);
        tracep->declBus(c+4,"top my_cu func7_i_cu", false,-1, 6,0);
        tracep->declBit(c+19,"top my_cu jump_branch_i_cu", false,-1);
        tracep->declBus(c+17,"top my_cu aluop_o_cu", false,-1, 3,0);
        tracep->declBus(c+18,"top my_cu bcuop_o_cu", false,-1, 2,0);
        tracep->declBit(c+16,"top my_cu opsel_o_cu", false,-1);
        tracep->declBit(c+7,"top my_cu immsel_o_cu", false,-1);
        tracep->declBit(c+13,"top my_cu re1_o_cu", false,-1);
        tracep->declBit(c+14,"top my_cu re2_o_cu", false,-1);
        tracep->declBit(c+15,"top my_cu we_o_cu", false,-1);
        tracep->declBit(c+1,"top my_cu jump_branch_o_cu", false,-1);
        tracep->declBus(c+2,"top my_cu op", false,-1, 6,0);
        tracep->declBus(c+3,"top my_cu func3", false,-1, 2,0);
        tracep->declBus(c+4,"top my_cu func7", false,-1, 6,0);
        tracep->declBit(c+45,"top my_cu addi_op", false,-1);
        tracep->declBit(c+46,"top my_cu add_op", false,-1);
        tracep->declBit(c+47,"top my_cu sub_op", false,-1);
        tracep->declBit(c+48,"top my_cu andi_op", false,-1);
        tracep->declBit(c+49,"top my_cu and_op", false,-1);
        tracep->declBit(c+50,"top my_cu sll_op", false,-1);
        tracep->declBit(c+51,"top my_cu ori_op", false,-1);
        tracep->declBit(c+52,"top my_cu or_op", false,-1);
        tracep->declBit(c+53,"top my_cu srl_op", false,-1);
        tracep->declBit(c+54,"top my_cu xori_op", false,-1);
        tracep->declBit(c+55,"top my_cu xor_op", false,-1);
        tracep->declBit(c+56,"top my_cu sra_op", false,-1);
        tracep->declBit(c+57,"top my_cu slti_op", false,-1);
        tracep->declBit(c+58,"top my_cu slt_op", false,-1);
        tracep->declBit(c+59,"top my_cu sltiu_op", false,-1);
        tracep->declBit(c+60,"top my_cu sltu_op", false,-1);
        tracep->declBit(c+61,"top my_cu beq_op", false,-1);
        tracep->declBit(c+62,"top my_cu auipc_op", false,-1);
        tracep->declBit(c+63,"top my_cu bge_op", false,-1);
        tracep->declBit(c+64,"top my_cu lui_op", false,-1);
        tracep->declBit(c+65,"top my_cu bgeu_op", false,-1);
        tracep->declBit(c+66,"top my_cu blt_op", false,-1);
        tracep->declBit(c+67,"top my_cu bltu_op", false,-1);
        tracep->declBit(c+43,"top my_cu jal_op", false,-1);
        tracep->declBit(c+68,"top my_cu bne_op", false,-1);
        tracep->declBit(c+69,"top my_cu jalr_op", false,-1);
        tracep->declBit(c+70,"top my_cu op_rs1_imm", false,-1);
        tracep->declBit(c+14,"top my_cu op_rs1_rs2", false,-1);
        tracep->declBit(c+71,"top my_cu imm1", false,-1);
        tracep->declBit(c+72,"top my_cu imm2", false,-1);
        tracep->declBit(c+13,"top my_cu reg_r1", false,-1);
        tracep->declBit(c+14,"top my_cu reg_r2", false,-1);
        tracep->declBit(c+15,"top my_cu reg_w", false,-1);
        tracep->declBit(c+201,"top my_exu rst", false,-1);
        tracep->declBus(c+17,"top my_exu aluop_i_exu", false,-1, 3,0);
        tracep->declBus(c+18,"top my_exu bcuop_i_exu", false,-1, 2,0);
        tracep->declBit(c+19,"top my_exu jump_branch_o_exu", false,-1);
        tracep->declQuad(c+20,"top my_exu dnpc_o_exu", false,-1, 63,0);
        tracep->declQuad(c+22,"top my_exu op1_i_exu", false,-1, 63,0);
        tracep->declQuad(c+28,"top my_exu op2_i_exu", false,-1, 63,0);
        tracep->declQuad(c+24,"top my_exu result_o_exu", false,-1, 63,0);
        tracep->declQuad(c+26,"top my_exu pc_i_exu", false,-1, 63,0);
        tracep->declQuad(c+8,"top my_exu offset_i_exu", false,-1, 63,0);
        tracep->declBit(c+73,"top my_exu lt_alu_bcu", false,-1);
        tracep->declBit(c+74,"top my_exu ltu_alu_bcu", false,-1);
        tracep->declBit(c+75,"top my_exu zero_alu_bcu", false,-1);
        tracep->declQuad(c+76,"top my_exu alu_result", false,-1, 63,0);
        tracep->declQuad(c+78,"top my_exu dnpc_o_bcu", false,-1, 63,0);
        tracep->declBit(c+80,"top my_exu auipc_op", false,-1);
        tracep->declBit(c+81,"top my_exu lui_op", false,-1);
        tracep->declBit(c+82,"top my_exu jal_op", false,-1);
        tracep->declBit(c+83,"top my_exu jalr_op", false,-1);
        tracep->declQuad(c+84,"top my_exu adder_op1", false,-1, 63,0);
        tracep->declQuad(c+86,"top my_exu adder_op2", false,-1, 63,0);
        tracep->declQuad(c+88,"top my_exu adder_result", false,-1, 63,0);
        tracep->declBus(c+17,"top my_exu my_alu aluop_i_alu", false,-1, 3,0);
        tracep->declQuad(c+22,"top my_exu my_alu op1_i_alu", false,-1, 63,0);
        tracep->declQuad(c+28,"top my_exu my_alu op2_i_alu", false,-1, 63,0);
        tracep->declQuad(c+76,"top my_exu my_alu result_o_alu", false,-1, 63,0);
        tracep->declBit(c+73,"top my_exu my_alu lt_o_alu", false,-1);
        tracep->declBit(c+74,"top my_exu my_alu ltu_o_alu", false,-1);
        tracep->declBit(c+75,"top my_exu my_alu zero_o_alu", false,-1);
        tracep->declBit(c+90,"top my_exu my_alu op_add", false,-1);
        tracep->declBit(c+91,"top my_exu my_alu op_sub", false,-1);
        tracep->declBit(c+92,"top my_exu my_alu op_slt", false,-1);
        tracep->declBit(c+93,"top my_exu my_alu op_sltu", false,-1);
        tracep->declBit(c+94,"top my_exu my_alu op_sll", false,-1);
        tracep->declBit(c+95,"top my_exu my_alu op_srl", false,-1);
        tracep->declBit(c+96,"top my_exu my_alu op_sra", false,-1);
        tracep->declBit(c+97,"top my_exu my_alu op_and", false,-1);
        tracep->declBit(c+98,"top my_exu my_alu op_or", false,-1);
        tracep->declBit(c+99,"top my_exu my_alu op_xor", false,-1);
        tracep->declQuad(c+100,"top my_exu my_alu add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+211,"top my_exu my_alu sub_result", false,-1, 63,0);
        tracep->declQuad(c+102,"top my_exu my_alu slt_result", false,-1, 63,0);
        tracep->declQuad(c+104,"top my_exu my_alu sltu_result", false,-1, 63,0);
        tracep->declQuad(c+106,"top my_exu my_alu sll_result", false,-1, 63,0);
        tracep->declQuad(c+108,"top my_exu my_alu srl_result", false,-1, 63,0);
        tracep->declQuad(c+110,"top my_exu my_alu sra_result", false,-1, 63,0);
        tracep->declQuad(c+112,"top my_exu my_alu and_result", false,-1, 63,0);
        tracep->declQuad(c+114,"top my_exu my_alu or_result", false,-1, 63,0);
        tracep->declQuad(c+116,"top my_exu my_alu xor_result", false,-1, 63,0);
        tracep->declQuad(c+100,"top my_exu my_alu adder_result", false,-1, 63,0);
        tracep->declBit(c+118,"top my_exu my_alu adder_cout", false,-1);
        tracep->declQuad(c+22,"top my_exu my_alu op1", false,-1, 63,0);
        tracep->declQuad(c+119,"top my_exu my_alu op2", false,-1, 63,0);
        tracep->declQuad(c+121,"top my_exu my_alu cin", false,-1, 63,0);
        tracep->declBit(c+73,"top my_exu my_bcu lt_i_bcu", false,-1);
        tracep->declBit(c+74,"top my_exu my_bcu ltu_i_bcu", false,-1);
        tracep->declBit(c+75,"top my_exu my_bcu zero_i_bcu", false,-1);
        tracep->declBus(c+18,"top my_exu my_bcu bcuop_i_bcu", false,-1, 2,0);
        tracep->declQuad(c+26,"top my_exu my_bcu pc_i_bcu", false,-1, 63,0);
        tracep->declQuad(c+8,"top my_exu my_bcu offset_i_bcu", false,-1, 63,0);
        tracep->declBit(c+19,"top my_exu my_bcu jump_branch_o_bcu", false,-1);
        tracep->declQuad(c+78,"top my_exu my_bcu dnpc_o_bcu", false,-1, 63,0);
        tracep->declBit(c+123,"top my_exu my_bcu op_beq", false,-1);
        tracep->declBit(c+124,"top my_exu my_bcu op_bge", false,-1);
        tracep->declBit(c+125,"top my_exu my_bcu op_bgeu", false,-1);
        tracep->declBit(c+126,"top my_exu my_bcu op_blt", false,-1);
        tracep->declBit(c+127,"top my_exu my_bcu op_bltu", false,-1);
        tracep->declBit(c+128,"top my_exu my_bcu op_bne", false,-1);
        tracep->declBit(c+129,"top my_exu my_bcu beq", false,-1);
        tracep->declBit(c+130,"top my_exu my_bcu bge", false,-1);
        tracep->declBit(c+131,"top my_exu my_bcu bgeu", false,-1);
        tracep->declBit(c+132,"top my_exu my_bcu blt", false,-1);
        tracep->declBit(c+133,"top my_exu my_bcu bltu", false,-1);
        tracep->declBit(c+134,"top my_exu my_bcu bne", false,-1);
    }
}

void Vysyx_22040895_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22040895_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22040895_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22040895_top___024root__traceRegister(Vysyx_22040895_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040895_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22040895_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22040895_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22040895_top___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22040895_top___024root__traceFullSub0(Vysyx_22040895_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22040895_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22040895_top___024root* const __restrict vlSelf = static_cast<Vysyx_22040895_top___024root*>(voidSelf);
    Vysyx_22040895_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22040895_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22040895_top___024root__traceFullSub0(Vysyx_22040895_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040895_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((((((((((0ULL == vlSelf->top__DOT__my_exu__DOT__alu_result) 
                                        & (1U == (IData)(vlSelf->top__DOT__bcuop_cu_exu))) 
                                       | ((~ (IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__slt_result)) 
                                          & (2U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))) 
                                      | ((IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__adder_cout) 
                                         & (3U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))) 
                                     | ((IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__slt_result) 
                                        & (4U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))) 
                                    | ((~ (IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)) 
                                       & (5U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))) 
                                   | ((0ULL != vlSelf->top__DOT__my_exu__DOT__alu_result) 
                                      & (6U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))) 
                                  | (0x6fU == (IData)(vlSelf->top__DOT__opcode_id_cu))) 
                                 | (IData)(vlSelf->top__DOT__my_cu__DOT__jalr_op))));
        tracep->fullCData(oldp+2,(vlSelf->top__DOT__opcode_id_cu),7);
        tracep->fullCData(oldp+3,(vlSelf->top__DOT__func3_id_cu),3);
        tracep->fullCData(oldp+4,(vlSelf->top__DOT__func7_id_cu),7);
        tracep->fullSData(oldp+5,(vlSelf->top__DOT__imm1_id_sext),12);
        tracep->fullIData(oldp+6,(vlSelf->top__DOT__imm2_id_sext),20);
        tracep->fullBit(oldp+7,((1U & (((((((((((((
                                                   ((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
                                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__andi_op)) 
                                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__ori_op)) 
                                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__xori_op)) 
                                                 | (IData)(vlSelf->top__DOT__my_cu__DOT__slti_op)) 
                                                | (IData)(vlSelf->top__DOT__my_cu__DOT__sltiu_op)) 
                                               | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op)) 
                                              | (IData)(vlSelf->top__DOT__my_cu__DOT__bge_op)) 
                                             | (IData)(vlSelf->top__DOT__my_cu__DOT__bge_op)) 
                                            | (IData)(vlSelf->top__DOT__my_cu__DOT__bgeu_op)) 
                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__blt_op)) 
                                          | (IData)(vlSelf->top__DOT__my_cu__DOT__bltu_op)) 
                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__bne_op)) 
                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__jalr_op)) 
                                       | (~ (((0x17U 
                                               == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                              | (0x6fU 
                                                 == (IData)(vlSelf->top__DOT__opcode_id_cu))) 
                                             | (0x37U 
                                                == (IData)(vlSelf->top__DOT__opcode_id_cu))))))));
        tracep->fullQData(oldp+8,(vlSelf->top__DOT__simm_sext_opnummux_exu),64);
        tracep->fullCData(oldp+10,(vlSelf->top__DOT__rs1addr_id_reg),5);
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__rs2addr_id_reg),5);
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__rdaddr_id_reg),5);
        tracep->fullBit(oldp+13,(((((((((((((((((((
                                                   (((((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
                                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__andi_op)) 
                                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__ori_op)) 
                                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__xori_op)) 
                                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__slti_op)) 
                                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__sltiu_op)) 
                                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__add_op)) 
                                                 | (IData)(vlSelf->top__DOT__my_cu__DOT__sub_op)) 
                                                | (IData)(vlSelf->top__DOT__my_cu__DOT__and_op)) 
                                               | (IData)(vlSelf->top__DOT__my_cu__DOT__or_op)) 
                                              | (IData)(vlSelf->top__DOT__my_cu__DOT__xor_op)) 
                                             | (IData)(vlSelf->top__DOT__my_cu__DOT__slt_op)) 
                                            | (IData)(vlSelf->top__DOT__my_cu__DOT__sltu_op)) 
                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__sll_op)) 
                                          | (IData)(vlSelf->top__DOT__my_cu__DOT__srl_op)) 
                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__sra_op)) 
                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op)) 
                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__bge_op)) 
                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__bgeu_op)) 
                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__blt_op)) 
                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__bltu_op)) 
                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__bne_op)) 
                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__jalr_op))));
        tracep->fullBit(oldp+14,(((((((((((((((((IData)(vlSelf->top__DOT__my_cu__DOT__add_op) 
                                                | (IData)(vlSelf->top__DOT__my_cu__DOT__sub_op)) 
                                               | (IData)(vlSelf->top__DOT__my_cu__DOT__and_op)) 
                                              | (IData)(vlSelf->top__DOT__my_cu__DOT__or_op)) 
                                             | (IData)(vlSelf->top__DOT__my_cu__DOT__xor_op)) 
                                            | (IData)(vlSelf->top__DOT__my_cu__DOT__slt_op)) 
                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__sltu_op)) 
                                          | (IData)(vlSelf->top__DOT__my_cu__DOT__sll_op)) 
                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__srl_op)) 
                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__sra_op)) 
                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op)) 
                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__bge_op)) 
                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__bgeu_op)) 
                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__blt_op)) 
                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__bltu_op)) 
                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__bne_op))));
        tracep->fullBit(oldp+15,(((((((((((((((((((
                                                   ((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
                                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__andi_op)) 
                                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__ori_op)) 
                                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__xori_op)) 
                                                 | (IData)(vlSelf->top__DOT__my_cu__DOT__slti_op)) 
                                                | (IData)(vlSelf->top__DOT__my_cu__DOT__sltiu_op)) 
                                               | (IData)(vlSelf->top__DOT__my_cu__DOT__add_op)) 
                                              | (IData)(vlSelf->top__DOT__my_cu__DOT__sub_op)) 
                                             | (IData)(vlSelf->top__DOT__my_cu__DOT__and_op)) 
                                            | (IData)(vlSelf->top__DOT__my_cu__DOT__or_op)) 
                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__xor_op)) 
                                          | (IData)(vlSelf->top__DOT__my_cu__DOT__slt_op)) 
                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__sltu_op)) 
                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__sll_op)) 
                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__srl_op)) 
                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__sra_op)) 
                                     | (0x17U == (IData)(vlSelf->top__DOT__opcode_id_cu))) 
                                    | (0x6fU == (IData)(vlSelf->top__DOT__opcode_id_cu))) 
                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__jalr_op)) 
                                  | (0x37U == (IData)(vlSelf->top__DOT__opcode_id_cu)))));
        tracep->fullBit(oldp+16,((1U & ((~ (((((((((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
                                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__andi_op)) 
                                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__ori_op)) 
                                                 | (IData)(vlSelf->top__DOT__my_cu__DOT__xori_op)) 
                                                | (IData)(vlSelf->top__DOT__my_cu__DOT__slti_op)) 
                                               | (IData)(vlSelf->top__DOT__my_cu__DOT__sltiu_op)) 
                                              | (0x17U 
                                                 == (IData)(vlSelf->top__DOT__opcode_id_cu))) 
                                             | (IData)(vlSelf->top__DOT__my_cu__DOT__jalr_op)) 
                                            | (0x37U 
                                               == (IData)(vlSelf->top__DOT__opcode_id_cu)))) 
                                        | ((((((((((((((((IData)(vlSelf->top__DOT__my_cu__DOT__add_op) 
                                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__sub_op)) 
                                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__and_op)) 
                                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__or_op)) 
                                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__xor_op)) 
                                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__slt_op)) 
                                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__sltu_op)) 
                                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__sll_op)) 
                                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__srl_op)) 
                                                 | (IData)(vlSelf->top__DOT__my_cu__DOT__sra_op)) 
                                                | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op)) 
                                               | (IData)(vlSelf->top__DOT__my_cu__DOT__bge_op)) 
                                              | (IData)(vlSelf->top__DOT__my_cu__DOT__bgeu_op)) 
                                             | (IData)(vlSelf->top__DOT__my_cu__DOT__blt_op)) 
                                            | (IData)(vlSelf->top__DOT__my_cu__DOT__bltu_op)) 
                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__bne_op))))));
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__aluop_cu_exu),4);
        tracep->fullCData(oldp+18,(vlSelf->top__DOT__bcuop_cu_exu),3);
        tracep->fullBit(oldp+19,((((((((0ULL == vlSelf->top__DOT__my_exu__DOT__alu_result) 
                                       & (1U == (IData)(vlSelf->top__DOT__bcuop_cu_exu))) 
                                      | ((~ (IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__slt_result)) 
                                         & (2U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))) 
                                     | ((IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__adder_cout) 
                                        & (3U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))) 
                                    | ((IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__slt_result) 
                                       & (4U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))) 
                                   | ((~ (IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)) 
                                      & (5U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))) 
                                  | ((0ULL != vlSelf->top__DOT__my_exu__DOT__alu_result) 
                                     & (6U == (IData)(vlSelf->top__DOT__bcuop_cu_exu))))));
        tracep->fullQData(oldp+20,(((0xcU == (IData)(vlSelf->top__DOT__aluop_cu_exu))
                                     ? (0xfffffffffffffffeULL 
                                        & (vlSelf->top__DOT__rdata1_reg_mux 
                                           + vlSelf->top__DOT__simm_sext_opnummux_exu))
                                     : (vlSelf->top__DOT__pc_id_exu 
                                        + (vlSelf->top__DOT__simm_sext_opnummux_exu 
                                           << 1U)))),64);
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__rdata1_reg_mux),64);
        tracep->fullQData(oldp+24,(((((0xaU == (IData)(vlSelf->top__DOT__aluop_cu_exu)) 
                                      | (7U == (IData)(vlSelf->top__DOT__bcuop_cu_exu))) 
                                     | (0xcU == (IData)(vlSelf->top__DOT__aluop_cu_exu)))
                                     ? (((0xbU == (IData)(vlSelf->top__DOT__aluop_cu_exu))
                                          ? 0ULL : vlSelf->top__DOT__pc_id_exu) 
                                        + ((0xaU == (IData)(vlSelf->top__DOT__aluop_cu_exu))
                                            ? (vlSelf->top__DOT__opnum2_opnumsel_ex 
                                               << 0xcU)
                                            : (((7U 
                                                 == (IData)(vlSelf->top__DOT__bcuop_cu_exu)) 
                                                | (0xcU 
                                                   == (IData)(vlSelf->top__DOT__aluop_cu_exu)))
                                                ? 4ULL
                                                : 0ULL)))
                                     : vlSelf->top__DOT__my_exu__DOT__alu_result)),64);
        tracep->fullQData(oldp+26,(vlSelf->top__DOT__pc_id_exu),64);
        tracep->fullQData(oldp+28,(vlSelf->top__DOT__opnum2_opnumsel_ex),64);
        tracep->fullQData(oldp+30,(((1U & (((((((((
                                                   ((((((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
                                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__andi_op)) 
                                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__ori_op)) 
                                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__xori_op)) 
                                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__slti_op)) 
                                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__sltiu_op)) 
                                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op)) 
                                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__bge_op)) 
                                                 | (IData)(vlSelf->top__DOT__my_cu__DOT__bge_op)) 
                                                | (IData)(vlSelf->top__DOT__my_cu__DOT__bgeu_op)) 
                                               | (IData)(vlSelf->top__DOT__my_cu__DOT__blt_op)) 
                                              | (IData)(vlSelf->top__DOT__my_cu__DOT__bltu_op)) 
                                             | (IData)(vlSelf->top__DOT__my_cu__DOT__bne_op)) 
                                            | (IData)(vlSelf->top__DOT__my_cu__DOT__jalr_op)) 
                                           | (~ (((0x17U 
                                                   == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                                  | (0x6fU 
                                                     == (IData)(vlSelf->top__DOT__opcode_id_cu))) 
                                                 | (0x37U 
                                                    == (IData)(vlSelf->top__DOT__opcode_id_cu))))))
                                     ? (((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__imm1_id_sext) 
                                                                >> 0xbU))))) 
                                         << 0xcU) | (QData)((IData)(vlSelf->top__DOT__imm1_id_sext)))
                                     : (((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT__imm2_id_sext 
                                                                >> 0x13U))))) 
                                         << 0x14U) 
                                        | (QData)((IData)(vlSelf->top__DOT__imm2_id_sext))))),64);
        tracep->fullQData(oldp+32,((((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->top__DOT__imm1_id_sext) 
                                                            >> 0xbU))))) 
                                     << 0xcU) | (QData)((IData)(vlSelf->top__DOT__imm1_id_sext)))),64);
        tracep->fullQData(oldp+34,((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__imm2_id_sext 
                                                            >> 0x13U))))) 
                                     << 0x14U) | (QData)((IData)(vlSelf->top__DOT__imm2_id_sext)))),64);
        tracep->fullBit(oldp+36,((((((((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                       & (0U == (IData)(vlSelf->top__DOT__func3_id_cu))) 
                                      | ((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                         & (5U == (IData)(vlSelf->top__DOT__func3_id_cu)))) 
                                     | ((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                        & (7U == (IData)(vlSelf->top__DOT__func3_id_cu)))) 
                                    | ((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                       & (4U == (IData)(vlSelf->top__DOT__func3_id_cu)))) 
                                   | ((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                      & (6U == (IData)(vlSelf->top__DOT__func3_id_cu)))) 
                                  | ((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                     & (1U == (IData)(vlSelf->top__DOT__func3_id_cu))))));
        tracep->fullBit(oldp+37,(((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                  & (0U == (IData)(vlSelf->top__DOT__func3_id_cu)))));
        tracep->fullBit(oldp+38,(((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                  & (5U == (IData)(vlSelf->top__DOT__func3_id_cu)))));
        tracep->fullBit(oldp+39,(((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                  & (7U == (IData)(vlSelf->top__DOT__func3_id_cu)))));
        tracep->fullBit(oldp+40,(((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                  & (4U == (IData)(vlSelf->top__DOT__func3_id_cu)))));
        tracep->fullBit(oldp+41,(((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                  & (6U == (IData)(vlSelf->top__DOT__func3_id_cu)))));
        tracep->fullBit(oldp+42,(((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                  & (1U == (IData)(vlSelf->top__DOT__func3_id_cu)))));
        tracep->fullBit(oldp+43,((0x6fU == (IData)(vlSelf->top__DOT__opcode_id_cu))));
        tracep->fullBit(oldp+44,((0x23U == (IData)(vlSelf->top__DOT__opcode_id_cu))));
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__my_cu__DOT__addi_op));
        tracep->fullBit(oldp+46,(vlSelf->top__DOT__my_cu__DOT__add_op));
        tracep->fullBit(oldp+47,(vlSelf->top__DOT__my_cu__DOT__sub_op));
        tracep->fullBit(oldp+48,(vlSelf->top__DOT__my_cu__DOT__andi_op));
        tracep->fullBit(oldp+49,(vlSelf->top__DOT__my_cu__DOT__and_op));
        tracep->fullBit(oldp+50,(vlSelf->top__DOT__my_cu__DOT__sll_op));
        tracep->fullBit(oldp+51,(vlSelf->top__DOT__my_cu__DOT__ori_op));
        tracep->fullBit(oldp+52,(vlSelf->top__DOT__my_cu__DOT__or_op));
        tracep->fullBit(oldp+53,(vlSelf->top__DOT__my_cu__DOT__srl_op));
        tracep->fullBit(oldp+54,(vlSelf->top__DOT__my_cu__DOT__xori_op));
        tracep->fullBit(oldp+55,(vlSelf->top__DOT__my_cu__DOT__xor_op));
        tracep->fullBit(oldp+56,(vlSelf->top__DOT__my_cu__DOT__sra_op));
        tracep->fullBit(oldp+57,(vlSelf->top__DOT__my_cu__DOT__slti_op));
        tracep->fullBit(oldp+58,(vlSelf->top__DOT__my_cu__DOT__slt_op));
        tracep->fullBit(oldp+59,(vlSelf->top__DOT__my_cu__DOT__sltiu_op));
        tracep->fullBit(oldp+60,(vlSelf->top__DOT__my_cu__DOT__sltu_op));
        tracep->fullBit(oldp+61,(vlSelf->top__DOT__my_cu__DOT__beq_op));
        tracep->fullBit(oldp+62,((0x17U == (IData)(vlSelf->top__DOT__opcode_id_cu))));
        tracep->fullBit(oldp+63,(vlSelf->top__DOT__my_cu__DOT__bge_op));
        tracep->fullBit(oldp+64,((0x37U == (IData)(vlSelf->top__DOT__opcode_id_cu))));
        tracep->fullBit(oldp+65,(vlSelf->top__DOT__my_cu__DOT__bgeu_op));
        tracep->fullBit(oldp+66,(vlSelf->top__DOT__my_cu__DOT__blt_op));
        tracep->fullBit(oldp+67,(vlSelf->top__DOT__my_cu__DOT__bltu_op));
        tracep->fullBit(oldp+68,(vlSelf->top__DOT__my_cu__DOT__bne_op));
        tracep->fullBit(oldp+69,(vlSelf->top__DOT__my_cu__DOT__jalr_op));
        tracep->fullBit(oldp+70,((((((((((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__andi_op)) 
                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__ori_op)) 
                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__xori_op)) 
                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__slti_op)) 
                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__sltiu_op)) 
                                    | (0x17U == (IData)(vlSelf->top__DOT__opcode_id_cu))) 
                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__jalr_op)) 
                                  | (0x37U == (IData)(vlSelf->top__DOT__opcode_id_cu)))));
        tracep->fullBit(oldp+71,(((((((((((((((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
                                              | (IData)(vlSelf->top__DOT__my_cu__DOT__andi_op)) 
                                             | (IData)(vlSelf->top__DOT__my_cu__DOT__ori_op)) 
                                            | (IData)(vlSelf->top__DOT__my_cu__DOT__xori_op)) 
                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__slti_op)) 
                                          | (IData)(vlSelf->top__DOT__my_cu__DOT__sltiu_op)) 
                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op)) 
                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__bge_op)) 
                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__bge_op)) 
                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__bgeu_op)) 
                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__blt_op)) 
                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__bltu_op)) 
                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__bne_op)) 
                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__jalr_op))));
        tracep->fullBit(oldp+72,((((0x17U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                   | (0x6fU == (IData)(vlSelf->top__DOT__opcode_id_cu))) 
                                  | (0x37U == (IData)(vlSelf->top__DOT__opcode_id_cu)))));
        tracep->fullBit(oldp+73,((1U & (IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__slt_result))));
        tracep->fullBit(oldp+74,((1U & (~ (IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)))));
        tracep->fullBit(oldp+75,((0ULL == vlSelf->top__DOT__my_exu__DOT__alu_result)));
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__my_exu__DOT__alu_result),64);
        tracep->fullQData(oldp+78,((vlSelf->top__DOT__pc_id_exu 
                                    + (vlSelf->top__DOT__simm_sext_opnummux_exu 
                                       << 1U))),64);
        tracep->fullBit(oldp+80,((0xaU == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+81,((0xbU == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+82,((7U == (IData)(vlSelf->top__DOT__bcuop_cu_exu))));
        tracep->fullBit(oldp+83,((0xcU == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
        tracep->fullQData(oldp+84,(((0xbU == (IData)(vlSelf->top__DOT__aluop_cu_exu))
                                     ? 0ULL : vlSelf->top__DOT__pc_id_exu)),64);
        tracep->fullQData(oldp+86,(((0xaU == (IData)(vlSelf->top__DOT__aluop_cu_exu))
                                     ? (vlSelf->top__DOT__opnum2_opnumsel_ex 
                                        << 0xcU) : 
                                    (((7U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)) 
                                      | (0xcU == (IData)(vlSelf->top__DOT__aluop_cu_exu)))
                                      ? 4ULL : 0ULL))),64);
        tracep->fullQData(oldp+88,((((0xbU == (IData)(vlSelf->top__DOT__aluop_cu_exu))
                                      ? 0ULL : vlSelf->top__DOT__pc_id_exu) 
                                    + ((0xaU == (IData)(vlSelf->top__DOT__aluop_cu_exu))
                                        ? (vlSelf->top__DOT__opnum2_opnumsel_ex 
                                           << 0xcU)
                                        : (((7U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)) 
                                            | (0xcU 
                                               == (IData)(vlSelf->top__DOT__aluop_cu_exu)))
                                            ? 4ULL : 0ULL)))),64);
        tracep->fullBit(oldp+90,((0U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+91,((1U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+92,((2U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+93,((9U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+94,((3U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+95,((4U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+96,((5U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+97,((6U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+98,((7U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+99,((8U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__adder_result),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__slt_result),64);
        tracep->fullQData(oldp+104,((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)))))),64);
        tracep->fullQData(oldp+106,(VL_SHIFTL_QQQ(64,64,64, vlSelf->top__DOT__rdata1_reg_mux, vlSelf->top__DOT__opnum2_opnumsel_ex)),64);
        tracep->fullQData(oldp+108,(VL_SHIFTR_QQQ(64,64,64, vlSelf->top__DOT__rdata1_reg_mux, vlSelf->top__DOT__opnum2_opnumsel_ex)),64);
        tracep->fullQData(oldp+110,(VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__rdata1_reg_mux, vlSelf->top__DOT__opnum2_opnumsel_ex)),64);
        tracep->fullQData(oldp+112,((vlSelf->top__DOT__rdata1_reg_mux 
                                     & vlSelf->top__DOT__opnum2_opnumsel_ex)),64);
        tracep->fullQData(oldp+114,((vlSelf->top__DOT__rdata1_reg_mux 
                                     | vlSelf->top__DOT__opnum2_opnumsel_ex)),64);
        tracep->fullQData(oldp+116,((vlSelf->top__DOT__rdata1_reg_mux 
                                     ^ vlSelf->top__DOT__opnum2_opnumsel_ex)),64);
        tracep->fullBit(oldp+118,(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__adder_cout));
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__op2),64);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__cin),64);
        tracep->fullBit(oldp+123,((1U == (IData)(vlSelf->top__DOT__bcuop_cu_exu))));
        tracep->fullBit(oldp+124,((2U == (IData)(vlSelf->top__DOT__bcuop_cu_exu))));
        tracep->fullBit(oldp+125,((3U == (IData)(vlSelf->top__DOT__bcuop_cu_exu))));
        tracep->fullBit(oldp+126,((4U == (IData)(vlSelf->top__DOT__bcuop_cu_exu))));
        tracep->fullBit(oldp+127,((5U == (IData)(vlSelf->top__DOT__bcuop_cu_exu))));
        tracep->fullBit(oldp+128,((6U == (IData)(vlSelf->top__DOT__bcuop_cu_exu))));
        tracep->fullBit(oldp+129,(((0ULL == vlSelf->top__DOT__my_exu__DOT__alu_result) 
                                   & (1U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))));
        tracep->fullBit(oldp+130,(((~ (IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__slt_result)) 
                                   & (2U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))));
        tracep->fullBit(oldp+131,(((IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__adder_cout) 
                                   & (3U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))));
        tracep->fullBit(oldp+132,(((IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__slt_result) 
                                   & (4U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))));
        tracep->fullBit(oldp+133,(((~ (IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)) 
                                   & (5U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))));
        tracep->fullBit(oldp+134,(((0ULL != vlSelf->top__DOT__my_exu__DOT__alu_result) 
                                   & (6U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))));
        tracep->fullBit(oldp+135,(vlSelf->top__DOT__ce_ifu_instrom));
        tracep->fullQData(oldp+136,(vlSelf->top__DOT__my_regfile__DOT__regs[0]),64);
        tracep->fullQData(oldp+138,(vlSelf->top__DOT__my_regfile__DOT__regs[1]),64);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__my_regfile__DOT__regs[2]),64);
        tracep->fullQData(oldp+142,(vlSelf->top__DOT__my_regfile__DOT__regs[3]),64);
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__my_regfile__DOT__regs[4]),64);
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__my_regfile__DOT__regs[5]),64);
        tracep->fullQData(oldp+148,(vlSelf->top__DOT__my_regfile__DOT__regs[6]),64);
        tracep->fullQData(oldp+150,(vlSelf->top__DOT__my_regfile__DOT__regs[7]),64);
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__my_regfile__DOT__regs[8]),64);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__my_regfile__DOT__regs[9]),64);
        tracep->fullQData(oldp+156,(vlSelf->top__DOT__my_regfile__DOT__regs[10]),64);
        tracep->fullQData(oldp+158,(vlSelf->top__DOT__my_regfile__DOT__regs[11]),64);
        tracep->fullQData(oldp+160,(vlSelf->top__DOT__my_regfile__DOT__regs[12]),64);
        tracep->fullQData(oldp+162,(vlSelf->top__DOT__my_regfile__DOT__regs[13]),64);
        tracep->fullQData(oldp+164,(vlSelf->top__DOT__my_regfile__DOT__regs[14]),64);
        tracep->fullQData(oldp+166,(vlSelf->top__DOT__my_regfile__DOT__regs[15]),64);
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__my_regfile__DOT__regs[16]),64);
        tracep->fullQData(oldp+170,(vlSelf->top__DOT__my_regfile__DOT__regs[17]),64);
        tracep->fullQData(oldp+172,(vlSelf->top__DOT__my_regfile__DOT__regs[18]),64);
        tracep->fullQData(oldp+174,(vlSelf->top__DOT__my_regfile__DOT__regs[19]),64);
        tracep->fullQData(oldp+176,(vlSelf->top__DOT__my_regfile__DOT__regs[20]),64);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__my_regfile__DOT__regs[21]),64);
        tracep->fullQData(oldp+180,(vlSelf->top__DOT__my_regfile__DOT__regs[22]),64);
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__my_regfile__DOT__regs[23]),64);
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__my_regfile__DOT__regs[24]),64);
        tracep->fullQData(oldp+186,(vlSelf->top__DOT__my_regfile__DOT__regs[25]),64);
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__my_regfile__DOT__regs[26]),64);
        tracep->fullQData(oldp+190,(vlSelf->top__DOT__my_regfile__DOT__regs[27]),64);
        tracep->fullQData(oldp+192,(vlSelf->top__DOT__my_regfile__DOT__regs[28]),64);
        tracep->fullQData(oldp+194,(vlSelf->top__DOT__my_regfile__DOT__regs[29]),64);
        tracep->fullQData(oldp+196,(vlSelf->top__DOT__my_regfile__DOT__regs[30]),64);
        tracep->fullQData(oldp+198,(vlSelf->top__DOT__my_regfile__DOT__regs[31]),64);
        tracep->fullBit(oldp+200,(vlSelf->clk));
        tracep->fullBit(oldp+201,(vlSelf->rst));
        tracep->fullIData(oldp+202,(vlSelf->inst_i),32);
        tracep->fullQData(oldp+203,(vlSelf->instaddr_o),64);
        tracep->fullQData(oldp+205,(((1U & (((IData)(vlSelf->rst) 
                                             | (0U 
                                                == (IData)(vlSelf->top__DOT__rs2addr_id_reg))) 
                                            | (~ ((
                                                   ((((((((((((((IData)(vlSelf->top__DOT__my_cu__DOT__add_op) 
                                                                | (IData)(vlSelf->top__DOT__my_cu__DOT__sub_op)) 
                                                               | (IData)(vlSelf->top__DOT__my_cu__DOT__and_op)) 
                                                              | (IData)(vlSelf->top__DOT__my_cu__DOT__or_op)) 
                                                             | (IData)(vlSelf->top__DOT__my_cu__DOT__xor_op)) 
                                                            | (IData)(vlSelf->top__DOT__my_cu__DOT__slt_op)) 
                                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__sltu_op)) 
                                                          | (IData)(vlSelf->top__DOT__my_cu__DOT__sll_op)) 
                                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__srl_op)) 
                                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__sra_op)) 
                                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op)) 
                                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__bge_op)) 
                                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__bgeu_op)) 
                                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__blt_op)) 
                                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__bltu_op)) 
                                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__bne_op)))))
                                      ? 0ULL : vlSelf->top__DOT__my_regfile__DOT__regs
                                     [vlSelf->top__DOT__rs2addr_id_reg])),64);
        tracep->fullSData(oldp+207,(((0xf00U & vlSelf->inst_i) 
                                     | ((0xfcU & (vlSelf->inst_i 
                                                  >> 0x17U)) 
                                        | ((2U & (vlSelf->inst_i 
                                                  >> 6U)) 
                                           | (vlSelf->inst_i 
                                              >> 0x1fU))))),12);
        tracep->fullIData(oldp+208,(((0x80000U & (vlSelf->inst_i 
                                                  >> 0xcU)) 
                                     | ((0x7f800U & 
                                         (vlSelf->inst_i 
                                          >> 1U)) | 
                                        ((0x400U & 
                                          (vlSelf->inst_i 
                                           >> 0xaU)) 
                                         | (0x3ffU 
                                            & (vlSelf->inst_i 
                                               >> 0x15U)))))),20);
        tracep->fullSData(oldp+209,(((0xfe0U & (vlSelf->inst_i 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->inst_i 
                                                 >> 7U)))),12);
        tracep->fullBit(oldp+210,(vlSelf->top__DOT__my_ifu__DOT__my_pc__DOT__pcsel));
        tracep->fullQData(oldp+211,(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__sub_result),64);
    }
}
