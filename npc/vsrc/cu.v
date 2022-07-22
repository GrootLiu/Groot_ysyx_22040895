`include "/home/groot/ysyx-workbench/npc/include/define.v"

module cu (
    input  wire rst,
    input  wire[`OpCodeLength] opcode_i_cu,
    input  wire[`func3Length] func3_i_cu,
    input  wire[`func7Length] func7_i_cu,
    input  wire jb_i_cu,
    output wire[`aluopLength] aluop_o_cu,
    output wire[1:0] opsel_o_cu,
    output wire immsel_o_cu,
    output wire re1_o_cu, 
    output wire re2_o_cu, 
    output wire we_o_cu,
    output wire pcsel_o_cu
);

    assign aluop_o_cu = (opcode_i_cu == );

endmodule //cu