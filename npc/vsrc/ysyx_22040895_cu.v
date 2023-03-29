`ifndef _DEFINE_H
`define _DEFINE_H
`include "../include/define.v"
`endif


module ysyx_22040895_cu (input wire rst,
                         input wire[`ysyx_22040895_OpCodeLength] opcode_i_cu,
                         input wire[`ysyx_22040895_func3Length] func3_i_cu,
                         input wire[`ysyx_22040895_func7Length] func7_i_cu,
                         input wire jump_branch_i_cu,
                         output wire[`ysyx_22040895_aluopLength] aluop_o_cu,
                         output wire[`ysyx_22040895_bcuopLength] bcuop_o_cu,
                         output wire opsel_o_cu,
                         output wire immsel_o_cu,
                         output wire re1_o_cu,
                         output wire re2_o_cu,
                         output wire we_o_cu,
                         output wire pcsel_o_cu,
                         output wire[`ysyx_22040895_mduopLength] mduop_o_cu,
                         output wire[1:0] sl_o_cu,
                         output wire mwe_o_cu,
                         output wire[1:0] munit_o_cu,
                         output wire wordop_o_cu,
                         output wire shift_o_cu,
                         output wire[2:0] privileged_op_o_cu,
                         output wire csrre_o_cu,
                         output wire csrwe_o_cu,
                         output wire set_mepc_o_cu,
                         output wire get_mepc_o_cu,
                         output wire set_mcause_o_cu,
                         output wire get_mcause_o_cu,
                         output wire set_mtvec_o_cu,
                         output wire get_mtvec_o_cu,
                         output wire set_mstatus_o_cu,
                         output wire get_mstatus_o_cu);
    
    wire[`ysyx_22040895_OpCodeLength] op   = opcode_i_cu;
    wire[`ysyx_22040895_func3Length] func3 = func3_i_cu;
    wire[`ysyx_22040895_func7Length] func7 = func7_i_cu;
    
    //  指令
    // privileged 指令
    wire ecall;
    wire mret;
    wire csrrs_op;
	wire csrrw_op;
    
    // I type               // R type               // R type
    wire addi_op;           wire add_op;            wire sub_op;
    wire andi_op;           wire and_op;            wire subw_op;
    wire ori_op;            wire or_op;             wire sll_op;
    wire xori_op;           wire xor_op;            wire sllw_op;
    wire slti_op;           wire slt_op;			wire srl_op;
    wire sltiu_op;          wire sltu_op;			wire srlw_op;
    wire lb_op;				wire addw_op;			wire sra_op;
    wire lbu_op;			wire mul_op;			wire sraw_op;
    wire lh_op;				wire mulw_op;
    wire lhu_op;			wire divw_op;
    wire lw_op;				wire rem_op;
    wire ld_op;				wire remw_op;
    wire addiw_op;
    wire srai_op;
    wire sraiw_op;
    wire srli_op;
    wire srliw_op;
    wire slli_op;
    wire slliw_op;
    
    
    // B type               // U type				// s type
    wire beq_op;            wire auipc_op;			wire sb_op;
    wire bge_op;			wire lui_op;			wire sh_op;
    wire bgeu_op;           						wire sw_op;
    wire blt_op;            /* J type */			wire sd_op;
    wire bltu_op;           wire jal_op;
    wire bne_op;			wire jalr_op;
    
    wire store_op;
    wire load_op;
    wire load_unsigned_op;
    
    wire csr_op;
    
    // 解析输入生成指令
    assign ecall   	 = (op == 7'b1111111);
    assign mret      = (op == 7'b1111110);
    assign csrrs_op  = (op == 7'b1110011) & (func3 == 3'b010);
    assign csrrw_op  = (op == 7'b1110011) & (func3 == 3'b001);
    
    assign addi_op  = (op == 7'b0010011) & (func3 == 3'b000);
    assign andi_op  = (op == 7'b0010011) & (func3 == 3'b111);
    assign ori_op   = (op == 7'b0010011) & (func3 == 3'b110);
    assign xori_op  = (op == 7'b0010011) & (func3 == 3'b100);
    assign slti_op  = (op == 7'b0010011) & (func3 == 3'b010);
    assign sltiu_op = (op == 7'b0010011) & (func3 == 3'b011);
    assign addiw_op = (op == 7'b0011011) & (func3 == 3'b000);
    assign srai_op  = (op == 7'b0010011) & (func3 == 3'b101) & (func7[6:1] == 6'b010000);
    assign sraiw_op = (op == 7'b0011011) & (func3 == 3'b101) & (func7[6:1] == 6'b010000);
    assign srli_op  = (op == 7'b0010011) & (func3 == 3'b101) & (func7[6:1] == 6'b000000);
    assign srliw_op = (op == 7'b0011011) & (func3 == 3'b101) & (func7[6:1] == 6'b000000);
    assign slli_op  = (op == 7'b0010011) & (func3 == 3'b001) & (func7[6:1] == 6'b000000);
    assign slliw_op = (op == 7'b0011011) & (func3 == 3'b001) & (func7[6:1] == 6'b000000);
    
    assign add_op  = (op == 7'b0110011) & (func3 == 3'b000) & (func7 == 7'b0000000);
    assign sub_op  = (op == 7'b0110011) & (func3 == 3'b000) & (func7 == 7'b0100000);
    assign and_op  = (op == 7'b0110011) & (func3 == 3'b111) & (func7 == 7'b0000000);
    assign or_op   = (op == 7'b0110011) & (func3 == 3'b110) & (func7 == 7'b0000000);
    assign xor_op  = (op == 7'b0110011) & (func3 == 3'b100) & (func7 == 7'b0000000);
    assign slt_op  = (op == 7'b0110011) & (func3 == 3'b010) & (func7 == 7'b0000000);
    assign sltu_op = (op == 7'b0110011) & (func3 == 3'b011) & (func7 == 7'b0000000);
    assign sll_op  = (op == 7'b0110011) & (func3 == 3'b001) & (func7 == 7'b0000000);
    assign srl_op  = (op == 7'b0110011) & (func3 == 3'b101) & (func7 == 7'b0000000);
    assign sra_op  = (op == 7'b0110011) & (func3 == 3'b101) & (func7 == 7'b0100000);
    assign addw_op = (op == 7'b0111011) & (func3 == 3'b000) & (func7 == 7'b0000000);
    assign subw_op = (op == 7'b0111011) & (func3 == 3'b000) & (func7 == 7'b0100000);
    assign sllw_op = (op == 7'b0111011) & (func3 == 3'b001) & (func7 == 7'b0000000);
    assign sraw_op = (op == 7'b0111011) & (func3 == 3'b101) & (func7 == 7'b0100000);
    assign srlw_op = (op == 7'b0111011) & (func3 == 3'b101) & (func7 == 7'b0000000);
    
    assign mul_op  = (op == 7'b0110011) & (func3 == 3'b000) & (func7 == 7'b0000001);
    assign divw_op = (op == 7'b0111011) & (func3 == 3'b100) & (func7 == 7'b0000001);
    assign mulw_op = (op == 7'b0111011) & (func3 == 3'b000) & (func7 == 7'b0000001);
    assign rem_op  = (op == 7'b0110011) & (func3 == 3'b110) & (func7 == 7'b0000001);
    assign remw_op = (op == 7'b0111011) & (func3 == 3'b110) & (func7 == 7'b0000001);
    
    assign auipc_op = (op == 7'b0010111);
    assign lui_op   = (op == 7'b0110111);
    
    assign beq_op  = (op == 7'b1100011 & func3 == 3'b000);
    assign bge_op  = (op == 7'b1100011 & func3 == 3'b101);
    assign bgeu_op = (op == 7'b1100011 & func3 == 3'b111);
    assign blt_op  = (op == 7'b1100011 & func3 == 3'b100);
    assign bltu_op = (op == 7'b1100011 & func3 == 3'b110);
    assign bne_op  = (op == 7'b1100011 & func3 == 3'b001);
    
    assign jal_op  = (op == 7'b1101111);
    assign jalr_op = (op == 7'b1100111) & (func3 == 3'b000);
    
    assign sb_op = (op == 7'b0100011) & (func3 == 3'b000);
    assign sh_op = (op == 7'b0100011) & (func3 == 3'b001);
    assign sw_op = (op == 7'b0100011) & (func3 == 3'b010);
    assign sd_op = (op == 7'b0100011) & (func3 == 3'b011);
    
    assign lb_op  = (op == 7'b0000011) & (func3 == 3'b000);
    assign lh_op  = (op == 7'b0000011) & (func3 == 3'b001);
    assign lw_op  = (op == 7'b0000011) & (func3 == 3'b010);
    assign ld_op  = (op == 7'b0000011) & (func3 == 3'b011);
    assign lbu_op = (op == 7'b0000011) & (func3 == 3'b100);
    assign lhu_op = (op == 7'b0000011) & (func3 == 3'b101);
    
    assign wordop_o_cu = (addiw_op | addw_op | subw_op | sllw_op | srlw_op | sraw_op | slliw_op | srliw_op | sraiw_op) & 1'b1;
    
    assign store_op         = sb_op | sh_op | sw_op | sd_op;
    assign load_op          = lb_op | lbu_op | lh_op | lhu_op | lw_op | ld_op;
    assign load_unsigned_op = lbu_op | lhu_op;
    assign csr_op           = csrrs_op | csrrw_op;
    
    // 解析指令生成控制信号
    assign aluop_o_cu = ({4{addi_op   | add_op | store_op | load_op | addiw_op | addw_op}}  & 4'b0000)
    | ({4{sub_op 	| beq_op | bne_op | subw_op}}  & 4'b0001)
    | ({4{andi_op   | and_op}}  & 4'b0110)
    | ({4{ori_op    | or_op}}   & 4'b0111)
    | ({4{xori_op   | xor_op}}  & 4'b1000)
    | ({4{slti_op   | slt_op | bge_op | blt_op}}  & 4'b0010)
    | ({4{sltiu_op  | sltu_op| bgeu_op| bltu_op}} & 4'b1001)
    | ({4{sll_op	| slli_op| sllw_op| slliw_op}}  & 4'b0011)
    | ({4{srl_op	| srli_op| srlw_op| srliw_op}}  & 4'b0100)
    | ({4{sra_op	| srai_op| sraw_op| sraiw_op}}  & 4'b0101)
    | ({4{auipc_op}}& 4'b1010)
    | ({4{lui_op}}  & 4'b1011)
    | ({4{jalr_op}} & 4'b1100);
    
    assign bcuop_o_cu = ({3{beq_op}} & 3'b001)
    | ({3{bge_op}} & 3'b010)
    | ({3{bgeu_op}}& 3'b011)
    | ({3{blt_op}} & 3'b100)
    | ({3{bltu_op}}& 3'b101)
    | ({3{bne_op}} & 3'b110)
    | ({3{jal_op}} & 3'b111);
    
    assign mduop_o_cu = ({4{mul_op}} & 4'b0001)
    | ({4{mulw_op}} & 4'b0101)
    | ({4{divw_op}} & 4'b1001)
    | ({4{remw_op}} & 4'b1101);
    
    wire md_op = |mduop_o_cu;
    
    wire op_rs1_imm = (csr_op 	| addi_op  | andi_op | ori_op | xori_op | slti_op | sltiu_op | auipc_op | jalr_op | lui_op | load_op | addiw_op | srai_op | sraiw_op | srli_op | srliw_op | slli_op | slliw_op);
    wire op_rs1_rs2 = (add_op   | sub_op  | and_op | or_op   | xor_op  | slt_op   | sltu_op  | sll_op | srl_op | sra_op | beq_op | bge_op  | bgeu_op | blt_op  | bltu_op  | bne_op | store_op | addw_op | subw_op | sllw_op | sraw_op | srlw_op | md_op);
    wire imm1       = (addi_op  | andi_op | ori_op | xori_op | slti_op | sltiu_op | beq_op   | bge_op | bge_op | bgeu_op| blt_op | bltu_op | bne_op  | jalr_op | store_op | load_op | addiw_op | srai_op | sraiw_op | srli_op | srliw_op | slli_op | slliw_op) ;
    wire imm2       = (auipc_op | jal_op  | lui_op);
    wire reg_r1     = (csr_op 	| addi_op | andi_op | ori_op | xori_op | slti_op | sltiu_op | add_op  | sub_op | and_op | or_op  | xor_op | slt_op | sltu_op | sll_op | srl_op | sra_op | beq_op   | bge_op | bgeu_op | blt_op | bltu_op | bne_op | jalr_op | store_op | load_op | addiw_op | addw_op | sllw_op | sraw_op | srlw_op | subw_op | md_op | srai_op | sraiw_op | srli_op | srliw_op | slli_op | slliw_op);
    wire reg_r2     = (add_op  	| sub_op  | and_op |  or_op  | xor_op  | slt_op   | sltu_op | sll_op | srl_op | sra_op | beq_op | bge_op | bgeu_op | blt_op | bltu_op| bne_op | store_op | addw_op | sllw_op | sraw_op | srlw_op | subw_op | md_op);
    wire reg_w      = (csr_op	|addi_op | andi_op | ori_op | xori_op | slti_op | sltiu_op | add_op  | sub_op | and_op | or_op  | xor_op | slt_op | sltu_op | sll_op | srl_op | sra_op | auipc_op | jal_op | jalr_op | lui_op | load_op | addiw_op | addw_op | sllw_op | sraw_op | srlw_op | subw_op | md_op | srai_op | sraiw_op | srli_op | srliw_op | slli_op | slliw_op);
    
    assign opsel_o_cu  = ~op_rs1_imm | op_rs1_rs2;
    assign immsel_o_cu = imm1 | ~imm2;
    assign re1_o_cu    = reg_r1;
    assign re2_o_cu    = reg_r2;
    assign we_o_cu     = reg_w;
    // pcsel_o_cu为pc选择信号
    // 或列表里面的指令都可能会引起pc不按照+4变化，而按照其他规则变化
    assign pcsel_o_cu = jump_branch_i_cu | jal_op | jalr_op | ecall | mret;
    // sl = store/load
    assign sl_o_cu  = (store_op == 1'b1) ? 2'b01 : (load_unsigned_op == 1'b1) ? 2'b11 : (load_op == 1'b1) ? 2'b10 : 2'b00;
    assign mwe_o_cu = store_op;
    // to select which memory unit will be written
    assign munit_o_cu = ({2{sb_op | lb_op | lbu_op}} & 2'b00)
    |({2{sh_op | lh_op | lhu_op}} & 2'b01)
    |({2{sw_op | lw_op}} & 2'b10)
    |({2{sd_op | ld_op}} & 2'b11);
    assign shift_o_cu = ((sra_op | srl_op | sll_op) == 1'b1) ? 1'b0 : 1'b1;
    
    // 判断是否是特权指令
    // 并且给具体的特权指令设置特权操作op
    // ecall: 001
    // mret : 010
	// csrrs: 011
    assign privileged_op_o_cu = (ecall == 1'b1) ? 3'b001 : (mret == 1'b1) ? 3'b010 : (csrrs_op == 1'b1) ? 3'b011 : (csrrw_op == 1'b1) ? 3'b100 : 3'b000;
    
    // 下面对csr寄存器进行操作
    // 分别为读信号和写信号，读写数据的操作在exu里面
    // 信号的定义见csr.v
    assign set_mepc_o_cu    = (ecall == 1'b1) ? 1'b1 : 1'b0;
    assign get_mepc_o_cu    = (mret	 == 1'b1) ? 1'b1 : 1'b0;
    assign set_mcause_o_cu	 = (ecall == 1'b1 | mret) ? 1'b1 : 1'b0;
    assign get_mcause_o_cu	 = 1'b0;
    assign set_mtvec_o_cu 	 = 1'b0;
    assign get_mtvec_o_cu 	 = (ecall == 1'b1) ? 1'b1 : 1'b0;
    assign set_mstatus_o_cu = (mret == 1'b1) ? 1'b1 : 1'b0;
    assign get_mstatus_o_cu = (mret == 1'b1) ? 1'b1 : 1'b0;
    
    assign csrre_o_cu = csrrs_op | csrrw_op;
    assign csrwe_o_cu = csrrs_op | csrrw_op;
    
    
endmodule //cu
