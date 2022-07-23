`include "/home/groot/ysyx-workbench/npc/include/define.v"
`include "/home/groot/ysyx-workbench/npc/vsrc/alu.v"

`timescale 1ns/100ps

module alu_tb;

  // Parameters

  // Ports
  reg  [`aluopLength] aluop_i_alu;
  reg  [`RegBus] op1_i_alu;
  reg  [`RegBus] op2_i_alu;
  wire [`RegBus] result_o_alu;

  alu alu_dut (
    .aluop_i_alu   (aluop_i_alu),
    .op1_i_alu     (op1_i_alu),
    .op2_i_alu     (op2_i_alu),
    .result_o_alu  (result_o_alu)
  );

  initial begin
    begin
        aluop_i_alu = 4'b0000;
        op1_i_alu = 64'h0000000000000001;
        op2_i_alu = 64'h0000000000000001;
        #100  $finish;
    end
  end
  
  initial begin
    $dumpfile("wave.vcd"); // 指定用作dumpfile的文件
    $dumpvars; // dump all vars
  end

endmodule
