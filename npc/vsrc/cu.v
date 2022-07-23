`include "/home/groot/ysyx-workbench/npc/include/define.v"

module cu (input wire rst,
           input wire[`OpCodeLength] opcode_i_cu,
           input wire[`func3Length] func3_i_cu,
           input wire[`func7Length] func7_i_cu,
           input wire jb_i_cu,
           output wire[`aluopLength] aluop_o_cu,
           output wire[1:0] opsel_o_cu,
           output wire immsel_o_cu,
           output wire re1_o_cu,
           output wire re2_o_cu,
           output wire we_o_cu,
           output wire pcsel_o_cu);
    
    wire[`OpCodeLength] op   = opcode_i_cu;
    wire[`func3Length] func3 = func3_i_cu;
    wire[`func7Length] func7 = func7_i_cu;
    
    //  指令
    wire addi;
    
    // 解析输入生成指令
    assign addi = (op == 7'b0010011) & (func3 == 3'b000);

    // 解析指令生成控制信号
    assign aluop_o_cu = ({4{addi}} & 4'b0000);
    assign opsel_o_cu = ({2{addi}} & 2'b00);
    assign immsel_o_cu = (addi & 1'b1);
    assign re1_o_cu = (addi & 1'b1);
    assign re2_o_cu = (addi & 1'b0);
    assign we_o_cu = (addi & 1'b1);
    assign pcsel_o_cu = (addi & 1'b0);

endmodule //cu
