`ifndef _DEFINE_H
`define _DEFINE_H
`include "../include/define.v"
`endif

module ysyx_22040895_mdu (input wire[`ysyx_22040895_mduopLength] mduop_i_mdu,
                          input wire[`ysyx_22040895_RegBus] op1_i_mdu,
                          input wire[`ysyx_22040895_RegBus] op2_i_mdu,
                          output wire[`ysyx_22040895_RegBus] result_o_mdu);

	wire[`ysyx_22040895_RegBus] multiplication;
	wire[`ysyx_22040895_RegBus] division;
	wire[`ysyx_22040895_RegBus] reminder;
	
	wire[`ysyx_22040895_RegBus] mul_result;
	wire[`ysyx_22040895_RegBus] mulw_result;
	wire[`ysyx_22040895_RegBus] divw_result;
	wire[`ysyx_22040895_RegBus] remw_result;
	
	wire op_mul  = (mduop_i_mdu == 4'b0001) ? 1'b1 : 1'b0;
	wire op_mulw = (mduop_i_mdu == 4'b0101) ? 1'b1 : 1'b0;
	wire op_divw = (mduop_i_mdu == 4'b1001) ? 1'b1 : 1'b0;
	wire op_remw = (mduop_i_mdu == 4'b1101) ? 1'b1 : 1'b0;
	
	assign reminder = op1_i_mdu[31:0] % op2_i_mdu[31:0];
	assign multiplication = op1_i_mdu * op2_i_mdu;
	assign division = op1_i_mdu[31:0] / op2_i_mdu[31:0];

	assign mul_result  = multiplication;
	assign remw_result = {{32{reminder[31]}}, reminder[31:0]};
	assign mulw_result = {{32{multiplication[31]}}, multiplication[31:0]};
	assign divw_result = {{32{division[31]}}, division[31:0]};

	assign result_o_mdu = (op_mul == 1'b1) ? mul_result :
	(op_mulw == 1'b1) ? mulw_result :
	(op_divw == 1'b1) ? divw_result :
	(op_remw == 1'b1) ? remw_result : 0;

endmodule //ysyx_22040895_mdu
