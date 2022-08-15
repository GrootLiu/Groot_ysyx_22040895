`include "/home/groot/ysyx-workbench/npc/include/define.v"

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
                         output wire jump_branch_o_cu,
                         output wire sl_o_cu,
                         output wire mwe_o_cu,
                         output wire[1:0] munit_o_cu);
    
    wire[`ysyx_22040895_OpCodeLength] op   = opcode_i_cu;
    wire[`ysyx_22040895_func3Length] func3 = func3_i_cu;
    wire[`ysyx_22040895_func7Length] func7 = func7_i_cu;
    
    //  指令
    // I type               // R type               // R type
    wire addi_op;           wire add_op;            wire sub_op;
    wire andi_op;           wire and_op;            wire sll_op;
    wire ori_op;            wire or_op;             wire srl_op;
    wire xori_op;           wire xor_op;            wire sra_op;
    wire slti_op;           wire slt_op;
    wire sltiu_op;          wire sltu_op;
    
    // B type               // U type				// s type
    wire beq_op;            wire auipc_op;			wire sb_op;
    wire bge_op;			wire lui_op;			wire sh_op;
    wire bgeu_op;           						wire sw_op;
    wire blt_op;            // J type
    wire bltu_op;           wire jal_op;
    wire bne_op;			wire jalr_op;
    
    wire store_op;
    
    // 解析输入生成指令
    assign addi_op  = (op == 7'b0010011) & (func3 == 3'b000);
    assign andi_op  = (op == 7'b0010011) & (func3 == 3'b111);
    assign ori_op   = (op == 7'b0010011) & (func3 == 3'b110);
    assign xori_op  = (op == 7'b0010011) & (func3 == 3'b100);
    assign slti_op  = (op == 7'b0010011) & (func3 == 3'b010);
    assign sltiu_op = (op == 7'b0010011) & (func3 == 3'b011);
    
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
    
    assign store_op = sb_op | sh_op | sw_op;
    
    // 解析指令生成控制信号
    assign aluop_o_cu = ({4{addi_op   | add_op | store_op}}  & 4'b0000)
    | ({4{sub_op}}  & 4'b0001)
    | ({4{andi_op   | and_op}}  & 4'b0110)
    | ({4{ori_op    | or_op}}   & 4'b0111)
    | ({4{xori_op   | xor_op}}  & 4'b1000)
    | ({4{slti_op   | slt_op | beq_op | bge_op | blt_op | bne_op}}  & 4'b0010)
    | ({4{sltiu_op  | sltu_op| bgeu_op| bltu_op}} & 4'b1001)
    | ({4{sll_op}}  & 4'b0011)
    | ({4{srl_op}}  & 4'b0100)
    | ({4{sra_op}}  & 4'b0101)
    | ({4{auipc_op}}& 4'b1010)
    | ({4{lui_op}}  & 4'b1011)
    | ({4{jalr_op}} & 4'b1100);
    
    assign bcuop_o_cu = ({3{beq_op}} & 3'b001)
    |({3{bge_op}} & 3'b010)
    |({3{bgeu_op}}& 3'b011)
    |({3{blt_op}} & 3'b100)
    |({3{bltu_op}}& 3'b101)
    |({3{bne_op}} & 3'b110)
    |({3{jal_op}} & 3'b111);
    
    wire op_rs1_imm = (addi_op  | andi_op | ori_op | xori_op | slti_op | sltiu_op | auipc_op | jalr_op | lui_op);
    wire op_rs1_rs2 = (add_op   | sub_op  | and_op | or_op   | xor_op  | slt_op   | sltu_op  | sll_op | srl_op | sra_op | beq_op | bge_op  | bgeu_op | blt_op  | bltu_op | bne_op | store_op);
    wire imm1       = (addi_op  | andi_op | ori_op | xori_op | slti_op | sltiu_op | beq_op   | bge_op | bge_op | bgeu_op| blt_op | bltu_op | bne_op  | jalr_op | store_op) ;
    wire imm2       = (auipc_op | jal_op  | lui_op);
    wire reg_r1     = (addi_op | andi_op | ori_op | xori_op | slti_op | sltiu_op | add_op  | sub_op | and_op | or_op  | xor_op | slt_op | sltu_op | sll_op | srl_op | sra_op | beq_op | bge_op | bgeu_op | blt_op | bltu_op | bne_op | jalr_op | store_op);
    wire reg_r2     = (add_op  | sub_op  | and_op |  or_op  | xor_op  | slt_op   | sltu_op | sll_op | srl_op | sra_op | beq_op | bge_op | bgeu_op | blt_op | bltu_op| bne_op | store_op);
    wire reg_w      = (addi_op | andi_op | ori_op | xori_op | slti_op | sltiu_op | add_op  | sub_op | and_op | or_op  | xor_op | slt_op | sltu_op | sll_op | srl_op | sra_op | auipc_op | jal_op | jalr_op | lui_op);
    
    assign opsel_o_cu       = ~op_rs1_imm | op_rs1_rs2;
    assign immsel_o_cu      = imm1 | ~imm2;
    assign re1_o_cu         = reg_r1;
    assign re2_o_cu         = reg_r2;
    assign we_o_cu          = reg_w;
    assign jump_branch_o_cu = jump_branch_i_cu | jal_op | jalr_op;
    assign sl_o_cu          = store_op;
    assign mwe_o_cu         = store_op;
    assign munit_o_cu = ({2{sb_op}} & 2'b00)
    |({2{sh_op}} & 2'b01)
    |({2{sw_op}} & 2'b10);
endmodule //cu
