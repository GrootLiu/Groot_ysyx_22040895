`include "/home/groot/ysyx-workbench/npc/include/define.v"

import "DPI-C" function void pmem_read(input longint raddr, output longint rdata, input byte wmask);
import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);

module ysyx_22040895_mmu (input wire clk, 
						  input wire rst,
                          input wire[1:0] sl_i_mmu,
                          input wire mwe_i_mmu,
                          input wire[1:0] munit_i_mmu,
                          input wire[`ysyx_22040895_RegBus] result_i_mmu,
                          input wire[`ysyx_22040895_RegBus] wmdata_i_mmu,
                          output wire[`ysyx_22040895_RegBus] wdata_o_mmu);
    
    wire mce_o_mmu;
    wire mwe_o_mmu;
    wire[`ysyx_22040895_RegBus] maddr_o_mmu;
    wire[`ysyx_22040895_RegBus] wmdata_o_mmu;
    wire[7:0] munit_o_mmu;
    
    wire[`ysyx_22040895_RegBus] rmdata_i_mmu;
    
    assign wdata_o_mmu  = (sl_i_mmu == 2'b10) ? rmdata_i_mmu : result_i_mmu;
    assign mce_o_mmu    = | sl_i_mmu;
    assign mwe_o_mmu    = mwe_i_mmu;
    assign maddr_o_mmu  = result_i_mmu;
    assign wmdata_o_mmu = wmdata_i_mmu;
    
    // byte 		00	1
    // half word 	01	3
    // word 		10	15
    // double word 	11
    assign munit_o_mmu = (munit_i_mmu == 2'b00) ? 8'b00000001 :
    (munit_i_mmu == 2'b01) ? 8'b00000011 :
    (munit_i_mmu == 2'b10) ? 8'b00001111 :
    (munit_i_mmu == 2'b11) ? 8'b11111111 : 8'b00000000;
	

    always @(posedge clk) begin
        if (sl_i_mmu == 2'b01) begin
            pmem_write(maddr_o_mmu, wmdata_o_mmu, munit_o_mmu);
			// $display("%08x", maddr_o_mmu);
        end
		if (sl_i_mmu == 2'b10) begin
			pmem_read(maddr_o_mmu, wdata_o_mmu, munit_o_mmu);
		end
    end
endmodule //ysyx_22040895_mmu
