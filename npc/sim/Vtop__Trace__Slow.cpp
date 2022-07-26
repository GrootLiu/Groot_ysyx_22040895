// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+163,"clk", false,-1);
        tracep->declBit(c+164,"rst", false,-1);
        tracep->declBus(c+165,"inst_i", false,-1, 31,0);
        tracep->declQuad(c+166,"instaddr_o", false,-1, 63,0);
        tracep->declBit(c+163,"top clk", false,-1);
        tracep->declBit(c+164,"top rst", false,-1);
        tracep->declBus(c+165,"top inst_i", false,-1, 31,0);
        tracep->declQuad(c+166,"top instaddr_o", false,-1, 63,0);
        tracep->declBit(c+1,"top ce_ifu_instrom", false,-1);
        tracep->declBit(c+66,"top jump_branch_cu_ifu", false,-1);
        tracep->declBus(c+165,"top inst_ifu_idu", false,-1, 31,0);
        tracep->declQuad(c+166,"top pc_ifu_idu", false,-1, 63,0);
        tracep->declBus(c+67,"top opcode_id_cu", false,-1, 6,0);
        tracep->declBus(c+68,"top func3_id_cu", false,-1, 2,0);
        tracep->declBus(c+69,"top func7_id_cu", false,-1, 6,0);
        tracep->declBus(c+70,"top imm1_id_sext", false,-1, 11,0);
        tracep->declBus(c+71,"top imm2_id_sext", false,-1, 19,0);
        tracep->declBit(c+72,"top immsel_cu_sext", false,-1);
        tracep->declQuad(c+73,"top simm_sext_opnummux_exu", false,-1, 63,0);
        tracep->declBus(c+75,"top rs1addr_id_reg", false,-1, 4,0);
        tracep->declBus(c+76,"top rs2addr_id_reg", false,-1, 4,0);
        tracep->declBus(c+77,"top rdaddr_id_reg", false,-1, 4,0);
        tracep->declBit(c+78,"top re1_cu_reg", false,-1);
        tracep->declBit(c+79,"top re2_cu_reg", false,-1);
        tracep->declBit(c+80,"top we_cu_reg", false,-1);
        tracep->declBit(c+81,"top opsrc_cu_opnumsel", false,-1);
        tracep->declBus(c+82,"top aluop_cu_exu", false,-1, 3,0);
        tracep->declBus(c+83,"top bcuop_cu_exu", false,-1, 2,0);
        tracep->declBit(c+66,"top jump_branch_exu_cu", false,-1);
        tracep->declQuad(c+84,"top dnpc_exu_ifu", false,-1, 63,0);
        tracep->declQuad(c+86,"top rdata1_reg_mux", false,-1, 63,0);
        tracep->declQuad(c+168,"top rdata2_reg_mux", false,-1, 63,0);
        tracep->declQuad(c+88,"top wdata_ex_reg", false,-1, 63,0);
        tracep->declQuad(c+90,"top pc_id_exu", false,-1, 63,0);
        tracep->declQuad(c+86,"top opnum1_opnumsel_ex", false,-1, 63,0);
        tracep->declQuad(c+92,"top opnum2_opnumsel_ex", false,-1, 63,0);
        tracep->declBit(c+163,"top my_ifu clk", false,-1);
        tracep->declBit(c+164,"top my_ifu rst", false,-1);
        tracep->declBus(c+165,"top my_ifu inst_i_ifu", false,-1, 31,0);
        tracep->declBit(c+66,"top my_ifu pcsel_i_ifu", false,-1);
        tracep->declQuad(c+84,"top my_ifu dnpc_i_ifu", false,-1, 63,0);
        tracep->declBus(c+165,"top my_ifu inst_o_ifu", false,-1, 31,0);
        tracep->declQuad(c+166,"top my_ifu instaddr_o_ifu", false,-1, 63,0);
        tracep->declQuad(c+166,"top my_ifu pc_o_ifu", false,-1, 63,0);
        tracep->declBit(c+1,"top my_ifu ce_o_ifu", false,-1);
        tracep->declBit(c+163,"top my_ifu my_pc clk", false,-1);
        tracep->declBit(c+164,"top my_ifu my_pc rst", false,-1);
        tracep->declBit(c+66,"top my_ifu my_pc pcsel_i_pc", false,-1);
        tracep->declQuad(c+84,"top my_ifu my_pc dnpc_i_pc", false,-1, 63,0);
        tracep->declQuad(c+166,"top my_ifu my_pc pc_o_pc", false,-1, 63,0);
        tracep->declBit(c+1,"top my_ifu my_pc ce_o_pc", false,-1);
        tracep->declBit(c+171,"top my_ifu my_pc pcsel", false,-1);
        tracep->declBit(c+164,"top my_sext rst", false,-1);
        tracep->declBit(c+72,"top my_sext immsel_i_sext", false,-1);
        tracep->declBus(c+70,"top my_sext imm1_i_sext", false,-1, 11,0);
        tracep->declBus(c+71,"top my_sext imm2_i_sext", false,-1, 19,0);
        tracep->declQuad(c+73,"top my_sext simm_o_sext", false,-1, 63,0);
        tracep->declQuad(c+94,"top my_sext sign_imm_ext", false,-1, 63,0);
        tracep->declQuad(c+96,"top my_sext sign_imm1_ext", false,-1, 63,0);
        tracep->declQuad(c+98,"top my_sext sign_imm2_ext", false,-1, 63,0);
        tracep->declBit(c+164,"top my_idu rst", false,-1);
        tracep->declBus(c+165,"top my_idu inst_i_idu", false,-1, 31,0);
        tracep->declQuad(c+166,"top my_idu pc_i_idu", false,-1, 63,0);
        tracep->declBus(c+67,"top my_idu opcode_o_idu", false,-1, 6,0);
        tracep->declBus(c+68,"top my_idu func3_o_idu", false,-1, 2,0);
        tracep->declBus(c+69,"top my_idu func7_o_idu", false,-1, 6,0);
        tracep->declBus(c+70,"top my_idu imm1_o_idu", false,-1, 11,0);
        tracep->declBus(c+71,"top my_idu imm2_o_idu", false,-1, 19,0);
        tracep->declBus(c+75,"top my_idu rs1addr_o_idu", false,-1, 4,0);
        tracep->declBus(c+76,"top my_idu rs2addr_o_idu", false,-1, 4,0);
        tracep->declBus(c+77,"top my_idu rdaddr_o_idu", false,-1, 4,0);
        tracep->declQuad(c+90,"top my_idu pc_o_idu", false,-1, 63,0);
        tracep->declBit(c+100,"top my_idu branch", false,-1);
        tracep->declBus(c+170,"top my_idu branch_offset", false,-1, 11,0);
        tracep->declBit(c+163,"top my_regfile clk", false,-1);
        tracep->declBit(c+164,"top my_regfile rst", false,-1);
        tracep->declBit(c+78,"top my_regfile re1_i_reg", false,-1);
        tracep->declBit(c+79,"top my_regfile re2_i_reg", false,-1);
        tracep->declBit(c+80,"top my_regfile we_i_reg", false,-1);
        tracep->declBus(c+75,"top my_regfile raddr1_i_reg", false,-1, 4,0);
        tracep->declBus(c+76,"top my_regfile raddr2_i_reg", false,-1, 4,0);
        tracep->declBus(c+77,"top my_regfile waddr_i_reg", false,-1, 4,0);
        tracep->declQuad(c+86,"top my_regfile rdata1_o_reg", false,-1, 63,0);
        tracep->declQuad(c+168,"top my_regfile rdata2_o_reg", false,-1, 63,0);
        tracep->declQuad(c+88,"top my_regfile wdata_i_reg", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+2+i*2,"top my_regfile regs", true,(i+0), 63,0);}}
        tracep->declBit(c+81,"top my_opnumsel opsrc_i_opnumsel", false,-1);
        tracep->declQuad(c+73,"top my_opnumsel simm_i_opnumsel", false,-1, 63,0);
        tracep->declQuad(c+86,"top my_opnumsel rdata1_opnumsel", false,-1, 63,0);
        tracep->declQuad(c+168,"top my_opnumsel rdata2_opnumsel", false,-1, 63,0);
        tracep->declQuad(c+86,"top my_opnumsel opnum1_o_opnumsel", false,-1, 63,0);
        tracep->declQuad(c+92,"top my_opnumsel opnum2_o_opnumsel", false,-1, 63,0);
        tracep->declBit(c+164,"top my_cu rst", false,-1);
        tracep->declBus(c+67,"top my_cu opcode_i_cu", false,-1, 6,0);
        tracep->declBus(c+68,"top my_cu func3_i_cu", false,-1, 2,0);
        tracep->declBus(c+69,"top my_cu func7_i_cu", false,-1, 6,0);
        tracep->declBit(c+66,"top my_cu jump_branch_i_cu", false,-1);
        tracep->declBus(c+82,"top my_cu aluop_o_cu", false,-1, 3,0);
        tracep->declBus(c+83,"top my_cu bcuop_o_cu", false,-1, 2,0);
        tracep->declBit(c+81,"top my_cu opsel_o_cu", false,-1);
        tracep->declBit(c+72,"top my_cu immsel_o_cu", false,-1);
        tracep->declBit(c+78,"top my_cu re1_o_cu", false,-1);
        tracep->declBit(c+79,"top my_cu re2_o_cu", false,-1);
        tracep->declBit(c+80,"top my_cu we_o_cu", false,-1);
        tracep->declBit(c+66,"top my_cu jump_branch_o_cu", false,-1);
        tracep->declBus(c+67,"top my_cu op", false,-1, 6,0);
        tracep->declBus(c+68,"top my_cu func3", false,-1, 2,0);
        tracep->declBus(c+69,"top my_cu func7", false,-1, 6,0);
        tracep->declBit(c+101,"top my_cu addi_op", false,-1);
        tracep->declBit(c+102,"top my_cu andi_op", false,-1);
        tracep->declBit(c+103,"top my_cu ori_op", false,-1);
        tracep->declBit(c+104,"top my_cu xori_op", false,-1);
        tracep->declBit(c+105,"top my_cu slti_op", false,-1);
        tracep->declBit(c+106,"top my_cu sltiu_op", false,-1);
        tracep->declBit(c+107,"top my_cu add_op", false,-1);
        tracep->declBit(c+108,"top my_cu sub_op", false,-1);
        tracep->declBit(c+109,"top my_cu and_op", false,-1);
        tracep->declBit(c+110,"top my_cu or_op", false,-1);
        tracep->declBit(c+111,"top my_cu xor_op", false,-1);
        tracep->declBit(c+112,"top my_cu slt_op", false,-1);
        tracep->declBit(c+113,"top my_cu sltu_op", false,-1);
        tracep->declBit(c+114,"top my_cu sll_op", false,-1);
        tracep->declBit(c+115,"top my_cu srl_op", false,-1);
        tracep->declBit(c+116,"top my_cu sra_op", false,-1);
        tracep->declBit(c+117,"top my_cu auipc_op", false,-1);
        tracep->declBit(c+118,"top my_cu beq_op", false,-1);
        tracep->declBit(c+172,"top my_cu bge_op", false,-1);
        tracep->declBit(c+119,"top my_cu op_rs1_imm", false,-1);
        tracep->declBit(c+79,"top my_cu op_rs1_rs2", false,-1);
        tracep->declBit(c+120,"top my_cu imm1", false,-1);
        tracep->declBit(c+117,"top my_cu imm2", false,-1);
        tracep->declBit(c+78,"top my_cu reg_r1", false,-1);
        tracep->declBit(c+79,"top my_cu reg_r2", false,-1);
        tracep->declBit(c+80,"top my_cu reg_w", false,-1);
        tracep->declBit(c+164,"top my_exu rst", false,-1);
        tracep->declBus(c+82,"top my_exu aluop_i_exu", false,-1, 3,0);
        tracep->declBus(c+83,"top my_exu bcuop_i_exu", false,-1, 2,0);
        tracep->declBit(c+66,"top my_exu jump_branch_o_exu", false,-1);
        tracep->declQuad(c+84,"top my_exu dnpc_o_exu", false,-1, 63,0);
        tracep->declQuad(c+86,"top my_exu op1_i_exu", false,-1, 63,0);
        tracep->declQuad(c+92,"top my_exu op2_i_exu", false,-1, 63,0);
        tracep->declQuad(c+88,"top my_exu result_o_exu", false,-1, 63,0);
        tracep->declQuad(c+90,"top my_exu pc_i_exu", false,-1, 63,0);
        tracep->declQuad(c+73,"top my_exu offset_i_exu", false,-1, 63,0);
        tracep->declBit(c+121,"top my_exu lt_alu_bcu", false,-1);
        tracep->declBit(c+122,"top my_exu ltu_alu_bcu", false,-1);
        tracep->declBit(c+123,"top my_exu zero_alu_bcu", false,-1);
        tracep->declQuad(c+124,"top my_exu alu_result", false,-1, 63,0);
        tracep->declBit(c+126,"top my_exu auipc_op", false,-1);
        tracep->declQuad(c+127,"top my_exu adder_result", false,-1, 63,0);
        tracep->declBus(c+82,"top my_exu my_alu aluop_i_alu", false,-1, 3,0);
        tracep->declQuad(c+86,"top my_exu my_alu op1_i_alu", false,-1, 63,0);
        tracep->declQuad(c+92,"top my_exu my_alu op2_i_alu", false,-1, 63,0);
        tracep->declQuad(c+124,"top my_exu my_alu result_o_alu", false,-1, 63,0);
        tracep->declBit(c+121,"top my_exu my_alu lt_o_alu", false,-1);
        tracep->declBit(c+122,"top my_exu my_alu ltu_o_alu", false,-1);
        tracep->declBit(c+123,"top my_exu my_alu zero_o_alu", false,-1);
        tracep->declBit(c+129,"top my_exu my_alu op_add", false,-1);
        tracep->declBit(c+130,"top my_exu my_alu op_sub", false,-1);
        tracep->declBit(c+131,"top my_exu my_alu op_slt", false,-1);
        tracep->declBit(c+132,"top my_exu my_alu op_sltu", false,-1);
        tracep->declBit(c+133,"top my_exu my_alu op_sll", false,-1);
        tracep->declBit(c+134,"top my_exu my_alu op_srl", false,-1);
        tracep->declBit(c+135,"top my_exu my_alu op_sra", false,-1);
        tracep->declBit(c+136,"top my_exu my_alu op_and", false,-1);
        tracep->declBit(c+137,"top my_exu my_alu op_or", false,-1);
        tracep->declBit(c+138,"top my_exu my_alu op_xor", false,-1);
        tracep->declQuad(c+139,"top my_exu my_alu add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+173,"top my_exu my_alu sub_result", false,-1, 63,0);
        tracep->declQuad(c+141,"top my_exu my_alu slt_result", false,-1, 63,0);
        tracep->declQuad(c+143,"top my_exu my_alu sltu_result", false,-1, 63,0);
        tracep->declQuad(c+145,"top my_exu my_alu sll_result", false,-1, 63,0);
        tracep->declQuad(c+147,"top my_exu my_alu srl_result", false,-1, 63,0);
        tracep->declQuad(c+149,"top my_exu my_alu sra_result", false,-1, 63,0);
        tracep->declQuad(c+151,"top my_exu my_alu and_result", false,-1, 63,0);
        tracep->declQuad(c+153,"top my_exu my_alu or_result", false,-1, 63,0);
        tracep->declQuad(c+155,"top my_exu my_alu xor_result", false,-1, 63,0);
        tracep->declQuad(c+139,"top my_exu my_alu adder_result", false,-1, 63,0);
        tracep->declBit(c+157,"top my_exu my_alu adder_cout", false,-1);
        tracep->declQuad(c+86,"top my_exu my_alu op1", false,-1, 63,0);
        tracep->declQuad(c+158,"top my_exu my_alu op2", false,-1, 63,0);
        tracep->declQuad(c+160,"top my_exu my_alu cin", false,-1, 63,0);
        tracep->declBit(c+121,"top my_exu my_bcu lt_i_bcu", false,-1);
        tracep->declBit(c+122,"top my_exu my_bcu ltu_i_bcu", false,-1);
        tracep->declBit(c+123,"top my_exu my_bcu zero_i_bcu", false,-1);
        tracep->declBus(c+83,"top my_exu my_bcu bcuop_i_bcu", false,-1, 2,0);
        tracep->declQuad(c+90,"top my_exu my_bcu pc_i_bcu", false,-1, 63,0);
        tracep->declQuad(c+73,"top my_exu my_bcu offset_i_bcu", false,-1, 63,0);
        tracep->declBit(c+66,"top my_exu my_bcu jump_branch_o_bcu", false,-1);
        tracep->declQuad(c+84,"top my_exu my_bcu dnpc_o_bcu", false,-1, 63,0);
        tracep->declBit(c+162,"top my_exu my_bcu op_beq", false,-1);
        tracep->declBit(c+66,"top my_exu my_bcu beq", false,-1);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp10;
    VlWide<3>/*95:0*/ __Vtemp11;
    VlWide<3>/*95:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp13;
    VlWide<3>/*95:0*/ __Vtemp14;
    VlWide<3>/*95:0*/ __Vtemp17;
    VlWide<3>/*95:0*/ __Vtemp18;
    VlWide<3>/*95:0*/ __Vtemp19;
    VlWide<3>/*95:0*/ __Vtemp20;
    VlWide<3>/*95:0*/ __Vtemp21;
    VlWide<3>/*95:0*/ __Vtemp24;
    VlWide<3>/*95:0*/ __Vtemp25;
    VlWide<3>/*95:0*/ __Vtemp26;
    VlWide<3>/*95:0*/ __Vtemp27;
    VlWide<3>/*95:0*/ __Vtemp28;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->top__DOT__ce_ifu_instrom));
        tracep->fullQData(oldp+2,(vlSelf->top__DOT__my_regfile__DOT__regs[0]),64);
        tracep->fullQData(oldp+4,(vlSelf->top__DOT__my_regfile__DOT__regs[1]),64);
        tracep->fullQData(oldp+6,(vlSelf->top__DOT__my_regfile__DOT__regs[2]),64);
        tracep->fullQData(oldp+8,(vlSelf->top__DOT__my_regfile__DOT__regs[3]),64);
        tracep->fullQData(oldp+10,(vlSelf->top__DOT__my_regfile__DOT__regs[4]),64);
        tracep->fullQData(oldp+12,(vlSelf->top__DOT__my_regfile__DOT__regs[5]),64);
        tracep->fullQData(oldp+14,(vlSelf->top__DOT__my_regfile__DOT__regs[6]),64);
        tracep->fullQData(oldp+16,(vlSelf->top__DOT__my_regfile__DOT__regs[7]),64);
        tracep->fullQData(oldp+18,(vlSelf->top__DOT__my_regfile__DOT__regs[8]),64);
        tracep->fullQData(oldp+20,(vlSelf->top__DOT__my_regfile__DOT__regs[9]),64);
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__my_regfile__DOT__regs[10]),64);
        tracep->fullQData(oldp+24,(vlSelf->top__DOT__my_regfile__DOT__regs[11]),64);
        tracep->fullQData(oldp+26,(vlSelf->top__DOT__my_regfile__DOT__regs[12]),64);
        tracep->fullQData(oldp+28,(vlSelf->top__DOT__my_regfile__DOT__regs[13]),64);
        tracep->fullQData(oldp+30,(vlSelf->top__DOT__my_regfile__DOT__regs[14]),64);
        tracep->fullQData(oldp+32,(vlSelf->top__DOT__my_regfile__DOT__regs[15]),64);
        tracep->fullQData(oldp+34,(vlSelf->top__DOT__my_regfile__DOT__regs[16]),64);
        tracep->fullQData(oldp+36,(vlSelf->top__DOT__my_regfile__DOT__regs[17]),64);
        tracep->fullQData(oldp+38,(vlSelf->top__DOT__my_regfile__DOT__regs[18]),64);
        tracep->fullQData(oldp+40,(vlSelf->top__DOT__my_regfile__DOT__regs[19]),64);
        tracep->fullQData(oldp+42,(vlSelf->top__DOT__my_regfile__DOT__regs[20]),64);
        tracep->fullQData(oldp+44,(vlSelf->top__DOT__my_regfile__DOT__regs[21]),64);
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__my_regfile__DOT__regs[22]),64);
        tracep->fullQData(oldp+48,(vlSelf->top__DOT__my_regfile__DOT__regs[23]),64);
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__my_regfile__DOT__regs[24]),64);
        tracep->fullQData(oldp+52,(vlSelf->top__DOT__my_regfile__DOT__regs[25]),64);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__my_regfile__DOT__regs[26]),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__my_regfile__DOT__regs[27]),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__my_regfile__DOT__regs[28]),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__my_regfile__DOT__regs[29]),64);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__my_regfile__DOT__regs[30]),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__my_regfile__DOT__regs[31]),64);
        tracep->fullBit(oldp+66,(((0ULL == vlSelf->top__DOT__my_exu__DOT__alu_result) 
                                  & (1U == (1U & (- (IData)((IData)(vlSelf->top__DOT__my_cu__DOT__beq_op))))))));
        tracep->fullCData(oldp+67,(vlSelf->top__DOT__opcode_id_cu),7);
        tracep->fullCData(oldp+68,(vlSelf->top__DOT__func3_id_cu),3);
        tracep->fullCData(oldp+69,(vlSelf->top__DOT__func7_id_cu),7);
        tracep->fullSData(oldp+70,(vlSelf->top__DOT__imm1_id_sext),12);
        tracep->fullIData(oldp+71,(vlSelf->top__DOT__imm2_id_sext),20);
        tracep->fullBit(oldp+72,(((((((((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__andi_op)) 
                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__ori_op)) 
                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__xori_op)) 
                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__slti_op)) 
                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__sltiu_op)) 
                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op)) 
                                  | (0x17U != (IData)(vlSelf->top__DOT__opcode_id_cu)))));
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__simm_sext_opnummux_exu),64);
        tracep->fullCData(oldp+75,(vlSelf->top__DOT__rs1addr_id_reg),5);
        tracep->fullCData(oldp+76,(vlSelf->top__DOT__rs2addr_id_reg),5);
        tracep->fullCData(oldp+77,(vlSelf->top__DOT__rdaddr_id_reg),5);
        tracep->fullBit(oldp+78,((((((((((((((((((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
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
                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op))));
        tracep->fullBit(oldp+79,((((((((((((IData)(vlSelf->top__DOT__my_cu__DOT__add_op) 
                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__sub_op)) 
                                          | (IData)(vlSelf->top__DOT__my_cu__DOT__and_op)) 
                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__or_op)) 
                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__xor_op)) 
                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__slt_op)) 
                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__sltu_op)) 
                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__sll_op)) 
                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__srl_op)) 
                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__sra_op)) 
                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op))));
        tracep->fullBit(oldp+80,((((((((((((((((((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
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
                                  | (0x17U == (IData)(vlSelf->top__DOT__opcode_id_cu)))));
        tracep->fullBit(oldp+81,((1U & ((~ (((((((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
                                                 | (IData)(vlSelf->top__DOT__my_cu__DOT__andi_op)) 
                                                | (IData)(vlSelf->top__DOT__my_cu__DOT__ori_op)) 
                                               | (IData)(vlSelf->top__DOT__my_cu__DOT__xori_op)) 
                                              | (IData)(vlSelf->top__DOT__my_cu__DOT__slti_op)) 
                                             | (IData)(vlSelf->top__DOT__my_cu__DOT__sltiu_op)) 
                                            | (0x17U 
                                               == (IData)(vlSelf->top__DOT__opcode_id_cu)))) 
                                        | (((((((((((IData)(vlSelf->top__DOT__my_cu__DOT__add_op) 
                                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__sub_op)) 
                                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__and_op)) 
                                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__or_op)) 
                                                 | (IData)(vlSelf->top__DOT__my_cu__DOT__xor_op)) 
                                                | (IData)(vlSelf->top__DOT__my_cu__DOT__slt_op)) 
                                               | (IData)(vlSelf->top__DOT__my_cu__DOT__sltu_op)) 
                                              | (IData)(vlSelf->top__DOT__my_cu__DOT__sll_op)) 
                                             | (IData)(vlSelf->top__DOT__my_cu__DOT__srl_op)) 
                                            | (IData)(vlSelf->top__DOT__my_cu__DOT__sra_op)) 
                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op))))));
        tracep->fullCData(oldp+82,(vlSelf->top__DOT__aluop_cu_exu),4);
        tracep->fullCData(oldp+83,((1U & (- (IData)((IData)(vlSelf->top__DOT__my_cu__DOT__beq_op))))),3);
        tracep->fullQData(oldp+84,((vlSelf->top__DOT__pc_id_exu 
                                    + vlSelf->top__DOT__simm_sext_opnummux_exu)),64);
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__rdata1_reg_mux),64);
        tracep->fullQData(oldp+88,((((0xaU == (IData)(vlSelf->top__DOT__aluop_cu_exu))
                                      ? 1U : 0U) ? 
                                    (vlSelf->top__DOT__pc_id_exu 
                                     + (vlSelf->top__DOT__opnum2_opnumsel_ex 
                                        << 0xcU)) : vlSelf->top__DOT__my_exu__DOT__alu_result)),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__pc_id_exu),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__opnum2_opnumsel_ex),64);
        tracep->fullQData(oldp+94,((((((((((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__andi_op)) 
                                          | (IData)(vlSelf->top__DOT__my_cu__DOT__ori_op)) 
                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__xori_op)) 
                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__slti_op)) 
                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__sltiu_op)) 
                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op)) 
                                     | (0x17U != (IData)(vlSelf->top__DOT__opcode_id_cu)))
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
        tracep->fullQData(oldp+96,((((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->top__DOT__imm1_id_sext) 
                                                            >> 0xbU))))) 
                                     << 0xcU) | (QData)((IData)(vlSelf->top__DOT__imm1_id_sext)))),64);
        tracep->fullQData(oldp+98,((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__imm2_id_sext 
                                                            >> 0x13U))))) 
                                     << 0x14U) | (QData)((IData)(vlSelf->top__DOT__imm2_id_sext)))),64);
        tracep->fullBit(oldp+100,(((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                   & (0U == (IData)(vlSelf->top__DOT__func3_id_cu)))));
        tracep->fullBit(oldp+101,(vlSelf->top__DOT__my_cu__DOT__addi_op));
        tracep->fullBit(oldp+102,(vlSelf->top__DOT__my_cu__DOT__andi_op));
        tracep->fullBit(oldp+103,(vlSelf->top__DOT__my_cu__DOT__ori_op));
        tracep->fullBit(oldp+104,(vlSelf->top__DOT__my_cu__DOT__xori_op));
        tracep->fullBit(oldp+105,(vlSelf->top__DOT__my_cu__DOT__slti_op));
        tracep->fullBit(oldp+106,(vlSelf->top__DOT__my_cu__DOT__sltiu_op));
        tracep->fullBit(oldp+107,(vlSelf->top__DOT__my_cu__DOT__add_op));
        tracep->fullBit(oldp+108,(vlSelf->top__DOT__my_cu__DOT__sub_op));
        tracep->fullBit(oldp+109,(vlSelf->top__DOT__my_cu__DOT__and_op));
        tracep->fullBit(oldp+110,(vlSelf->top__DOT__my_cu__DOT__or_op));
        tracep->fullBit(oldp+111,(vlSelf->top__DOT__my_cu__DOT__xor_op));
        tracep->fullBit(oldp+112,(vlSelf->top__DOT__my_cu__DOT__slt_op));
        tracep->fullBit(oldp+113,(vlSelf->top__DOT__my_cu__DOT__sltu_op));
        tracep->fullBit(oldp+114,(vlSelf->top__DOT__my_cu__DOT__sll_op));
        tracep->fullBit(oldp+115,(vlSelf->top__DOT__my_cu__DOT__srl_op));
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__my_cu__DOT__sra_op));
        tracep->fullBit(oldp+117,((0x17U == (IData)(vlSelf->top__DOT__opcode_id_cu))));
        tracep->fullBit(oldp+118,(vlSelf->top__DOT__my_cu__DOT__beq_op));
        tracep->fullBit(oldp+119,((((((((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__andi_op)) 
                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__ori_op)) 
                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__xori_op)) 
                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__slti_op)) 
                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__sltiu_op)) 
                                   | (0x17U == (IData)(vlSelf->top__DOT__opcode_id_cu)))));
        tracep->fullBit(oldp+120,((((((((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__andi_op)) 
                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__ori_op)) 
                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__xori_op)) 
                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__slti_op)) 
                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__sltiu_op)) 
                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op))));
        tracep->fullBit(oldp+121,((1U & (IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__slt_result))));
        VL_EXTEND_WQ(65,64, __Vtemp10, vlSelf->top__DOT__rdata1_reg_mux);
        VL_EXTEND_WQ(65,64, __Vtemp11, vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__op2);
        VL_ADD_W(3, __Vtemp12, __Vtemp10, __Vtemp11);
        VL_EXTEND_WQ(65,64, __Vtemp13, vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__cin);
        VL_ADD_W(3, __Vtemp14, __Vtemp12, __Vtemp13);
        tracep->fullBit(oldp+122,((1U & (~ (1U & __Vtemp14[2U])))));
        tracep->fullBit(oldp+123,((0ULL == vlSelf->top__DOT__my_exu__DOT__alu_result)));
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__my_exu__DOT__alu_result),64);
        tracep->fullBit(oldp+126,(((0xaU == (IData)(vlSelf->top__DOT__aluop_cu_exu))
                                    ? 1U : 0U)));
        tracep->fullQData(oldp+127,((vlSelf->top__DOT__pc_id_exu 
                                     + (vlSelf->top__DOT__opnum2_opnumsel_ex 
                                        << 0xcU))),64);
        tracep->fullBit(oldp+129,((0U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+130,((1U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+131,((2U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+132,((9U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+133,((3U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+134,((4U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+135,((5U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+136,((6U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+137,((7U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+138,((8U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__adder_result),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__slt_result),64);
        VL_EXTEND_WQ(65,64, __Vtemp17, vlSelf->top__DOT__rdata1_reg_mux);
        VL_EXTEND_WQ(65,64, __Vtemp18, vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__op2);
        VL_ADD_W(3, __Vtemp19, __Vtemp17, __Vtemp18);
        VL_EXTEND_WQ(65,64, __Vtemp20, vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__cin);
        VL_ADD_W(3, __Vtemp21, __Vtemp19, __Vtemp20);
        tracep->fullQData(oldp+143,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp21[2U])))))),64);
        tracep->fullQData(oldp+145,(VL_SHIFTL_QQQ(64,64,64, vlSelf->top__DOT__rdata1_reg_mux, vlSelf->top__DOT__opnum2_opnumsel_ex)),64);
        tracep->fullQData(oldp+147,(VL_SHIFTR_QQQ(64,64,64, vlSelf->top__DOT__rdata1_reg_mux, vlSelf->top__DOT__opnum2_opnumsel_ex)),64);
        tracep->fullQData(oldp+149,(VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__rdata1_reg_mux, vlSelf->top__DOT__opnum2_opnumsel_ex)),64);
        tracep->fullQData(oldp+151,((vlSelf->top__DOT__rdata1_reg_mux 
                                     & vlSelf->top__DOT__opnum2_opnumsel_ex)),64);
        tracep->fullQData(oldp+153,((vlSelf->top__DOT__rdata1_reg_mux 
                                     | vlSelf->top__DOT__opnum2_opnumsel_ex)),64);
        tracep->fullQData(oldp+155,((vlSelf->top__DOT__rdata1_reg_mux 
                                     ^ vlSelf->top__DOT__opnum2_opnumsel_ex)),64);
        VL_EXTEND_WQ(65,64, __Vtemp24, vlSelf->top__DOT__rdata1_reg_mux);
        VL_EXTEND_WQ(65,64, __Vtemp25, vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__op2);
        VL_ADD_W(3, __Vtemp26, __Vtemp24, __Vtemp25);
        VL_EXTEND_WQ(65,64, __Vtemp27, vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__cin);
        VL_ADD_W(3, __Vtemp28, __Vtemp26, __Vtemp27);
        tracep->fullBit(oldp+157,((1U & __Vtemp28[2U])));
        tracep->fullQData(oldp+158,(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__op2),64);
        tracep->fullQData(oldp+160,(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__cin),64);
        tracep->fullBit(oldp+162,((1U == (1U & (- (IData)((IData)(vlSelf->top__DOT__my_cu__DOT__beq_op)))))));
        tracep->fullBit(oldp+163,(vlSelf->clk));
        tracep->fullBit(oldp+164,(vlSelf->rst));
        tracep->fullIData(oldp+165,(vlSelf->inst_i),32);
        tracep->fullQData(oldp+166,(vlSelf->instaddr_o),64);
        tracep->fullQData(oldp+168,(((1U & (((IData)(vlSelf->rst) 
                                             | (0U 
                                                == (IData)(vlSelf->top__DOT__rs2addr_id_reg))) 
                                            | (~ ((
                                                   (((((((((IData)(vlSelf->top__DOT__my_cu__DOT__add_op) 
                                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__sub_op)) 
                                                          | (IData)(vlSelf->top__DOT__my_cu__DOT__and_op)) 
                                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__or_op)) 
                                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__xor_op)) 
                                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__slt_op)) 
                                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__sltu_op)) 
                                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__sll_op)) 
                                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__srl_op)) 
                                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__sra_op)) 
                                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op)))))
                                      ? 0ULL : vlSelf->top__DOT__my_regfile__DOT__regs
                                     [vlSelf->top__DOT__rs2addr_id_reg])),64);
        tracep->fullSData(oldp+170,(((0xf00U & vlSelf->inst_i) 
                                     | ((0xfcU & (vlSelf->inst_i 
                                                  >> 0x17U)) 
                                        | ((2U & (vlSelf->inst_i 
                                                  >> 6U)) 
                                           | (vlSelf->inst_i 
                                              >> 0x1fU))))),12);
        tracep->fullBit(oldp+171,(vlSelf->top__DOT__my_ifu__DOT__my_pc__DOT__pcsel));
        tracep->fullBit(oldp+172,(vlSelf->top__DOT__my_cu__DOT__bge_op));
        tracep->fullQData(oldp+173,(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__sub_result),64);
    }
}
