`ifndef _DEFINE_H
`define _DEFINE_H
`include "../include/define.v"
`endif

module ysyx_22040895_csr (input clk,
                          input rst,
                          input	re_i_csr,
                          input	we_i_csr,
                          input	wire [`ysyx_22040895_CSRRegAddrBus] raddr_i_csr,
                          input	wire [`ysyx_22040895_CSRRegAddrBus] waddr_i_csr,
                          output	wire [`ysyx_22040895_RegBus] rdata_o_csr,
                          input	wire [`ysyx_22040895_RegBus] wdata_i_csr,
                          input	wire set_mepc_i_csr,
                          input	wire get_mepc_i_csr,
                          input	wire [`ysyx_22040895_RegBus] wdata_mepc_i_csr,
                          output	wire [`ysyx_22040895_RegBus] rdata_mepc_o_csr,
                          input	wire set_mcause_i_csr,
                          input	wire get_mcause_i_csr,
                          input	wire [`ysyx_22040895_RegBus] wdata_mcause_i_csr,
                          output	wire [`ysyx_22040895_RegBus] rdata_mcause_o_csr,
                          input	wire set_mtvec_i_csr,
                          input	wire get_mtvec_i_csr,
                          input	wire [`ysyx_22040895_RegBus] wdata_mtvec_i_csr,
                          output	wire [`ysyx_22040895_RegBus] rdata_mtvec_o_csr,
                          input	wire set_mstatus_i_csr,
                          input	wire get_mstatus_i_csr,
                          input	wire [`ysyx_22040895_RegBus] wdata_mstatus_i_csr,
                          output	wire [`ysyx_22040895_RegBus] rdata_mstatus_o_csr);
    
    // 0号寄存器：mepc：中断返回地址
    // 1号寄存器：mcause：中断原因
    // 2号寄存器：mtvec：中断处理入口
    // 3号寄存器：mstatus：
    reg [`ysyx_22040895_RegBus] csr [4:0];
    
    // 按编号读CSR寄存器
    assign rdata_o_csr = (re_i_csr == `ysyx_22040895_ReadEnable) ? csr[raddr_i_csr] : `ysyx_22040895_RegWidth'b0;
    
    // 按编号写CSR寄存器
    always @(posedge clk) begin
        if (rst == `ysyx_22040895_RstDisable) begin
            if (we_i_csr == `ysyx_22040895_WriteEnable) begin
                csr[waddr_i_csr] <= wdata_i_csr;
            end
        end
    end
    
    // 读mepc寄存器
    assign rdata_mepc_o_csr = (get_mepc_i_csr == `ysyx_22040895_ReadEnable) ? csr[0] : 0;
    // 写mepc寄存器
    always @(posedge clk) begin
        if (rst == `ysyx_22040895_RstDisable) begin
            if (set_mepc_i_csr == `ysyx_22040895_WriteEnable) begin
                csr[0] <= wdata_mepc_i_csr;
            end
        end
    end
    
    // 读mcause寄存器
    assign rdata_mcause_o_csr = (get_mcause_i_csr == `ysyx_22040895_ReadEnable) ? csr[1] : 0;
    // 写mcause寄存器
    always @(posedge clk) begin
        if (`ysyx_22040895_RstDisable) begin
            if (set_mcause_i_csr == `ysyx_22040895_WriteEnable) begin
                csr[1] <= wdata_mcause_i_csr;
            end
        end
    end
    
    // 读mtvec寄存器
    assign rdata_mtvec_o_csr = (get_mtvec_i_csr == `ysyx_22040895_ReadEnable) ? csr[2] : 0;
    // 写mtvec寄存器
    always @(posedge clk) begin
        if (`ysyx_22040895_RstDisable) begin
            if (set_mtvec_i_csr == `ysyx_22040895_WriteEnable) begin
                csr[2] <= wdata_mtvec_i_csr;
            end
        end
    end
    
    // 读mstatus寄存器
    assign rdata_mstatus_o_csr = (get_mstatus_i_csr == `ysyx_22040895_ReadEnable) ? csr[3] : 0;
    // 写mstatus寄存器
    always @(posedge clk) begin
        if (`ysyx_22040895_RstDisable) begin
            if (set_mstatus_i_csr == `ysyx_22040895_WriteEnable) begin
                csr[3] <= wdata_mstatus_i_csr;
            end
        end
    end
endmodule //ysyx_22040895_csr
