`include "/home/groot/ysyx-workbench/npc/include/define.v"

import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);

module ysyx_22040895_regfile (input wire clk,
                              input wire rst,
                              input wire re1_i_reg,
                              input wire re2_i_reg,
                              input wire we_i_reg,
                              input wire[`ysyx_22040895_RegAddrBus] raddr1_i_reg,
                              input wire[`ysyx_22040895_RegAddrBus] raddr2_i_reg,
                              input wire[`ysyx_22040895_RegAddrBus] waddr_i_reg,
                              output wire[`ysyx_22040895_RegBus] rdata1_o_reg,
                              output wire[`ysyx_22040895_RegBus] rdata2_o_reg,
                              input wire[`ysyx_22040895_RegBus] wdata_i_reg);
    
    // 定义一个具有32个64位寄存器的寄存器组
    reg[`ysyx_22040895_RegBus] regs[0 : `ysyx_22040895_RegNum-1];
    // 寄存器写操作
    always @(posedge clk) begin
        if (rst == `ysyx_22040895_RstDisable) begin
            if (we_i_reg == `ysyx_22040895_WriteEnable && (waddr_i_reg != 5'b0)) begin
                regs[waddr_i_reg] <= wdata_i_reg;
            end
        end
    end
    
    // 寄存器读端口1
    assign rdata1_o_reg = (rst == `ysyx_22040895_RstEnable || raddr1_i_reg == 5'b0 || re1_i_reg == `ysyx_22040895_ReadDisable) ? 64'b0 : regs[raddr1_i_reg];
    // 寄存器读端口2
    assign rdata2_o_reg = (rst == `ysyx_22040895_RstEnable || raddr2_i_reg == 5'b0 || re2_i_reg == `ysyx_22040895_ReadDisable) ? 64'b0 : regs[raddr2_i_reg];
    
    initial set_gpr_ptr(regs);  // rf为通用寄存器的二维数组变量
endmodule //regfile
