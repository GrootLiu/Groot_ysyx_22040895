`include "/home/groot/ysyx-workbench/npc/include/define.v"
`include "/home/groot/ysyx-workbench/npc/vsrc/alu.v"

module exu (input wire rst,
           input wire[`aluopLength] aluop_i_exu,
           output wire pcsel_o_exu,
           output wire[`InstAddrBus] dnpc_o_exu,
           input wire[`RegBus] op1_i_exu,
           input wire[`RegBus] op2_i_exu,
           output wire[`RegBus] result_o_exu,
           input wire[`InstAddrBus] pc_i_exu);


alu u_alu(
	//ports
	.aluop_i_alu  		(aluop_i_exu),
	.op1_i_alu    		(op1_i_exu),
	.op2_i_alu    		(op2_i_exu),
	.result_o_alu 		(result_o_exu)
);

    
endmodule //ex
