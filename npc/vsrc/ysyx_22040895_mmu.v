`include "define.v"

module ysyx_22040895_mmu (input wire rst,
                          input wire sl_i_mmu,
                          input wire mwe_i_mmu,
                          input wire[1:0] munit_i_mmu,
                          input wire[`ysyx_22040895_RegBus] result_i_mmu,
                          input wire[`ysyx_22040895_RegBus] wmdata_i_mmu,
                          output wire[`ysyx_22040895_RegBus] wdata_o_mmu,
                          input wire[`ysyx_22040895_RegBus] rmdata_i_mmu,
                          output wire[`ysyx_22040895_RegBus] maddr_o_mmu,
                          output wire mce_o_mmu,
                          output wire munit_o_mmu,
                          output wire[`ysyx_22040895_RegBus] wmdata_o_mmu,
                          output wire mwe_o_mmu);

	assign wdata_o_mmu = (sl_i_mmu == 1) ? rmdata_i_mmu : result_i_mmu;
	assign mce_o_mmu = sl_i_mmu;
	assign mwe_o_mmu = mwe_i_mmu;
	assign maddr_o_mmu = result_i_mmu;
	assign munit_o_mmu = munit_i_mmu;
	assign wmdata_o_mmu = wmdata_i_mmu;

endmodule //ysyx_22040895_mmu
