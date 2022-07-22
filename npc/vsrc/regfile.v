`include "/home/groot/ysyx-workbench/npc/include/define.v"

module regfile (input wire clk,
                input wire rst,
                input wire re1_i_reg,
                input wire re2_i_reg,
                input wire we_i_reg,
                input wire[`RegAddrBus] raddr1_i_reg,
                input wire[`RegAddrBus] raddr2_i_reg,
                input wire[`RegAddrBus] waddr_i_reg,
                output wire[`RegBus] rdata1_o_reg,
                output wire[`RegBus] rdata2_o_reg,
                input wire[`RegBus] wdata_i_reg);

    // 定义一个具有32个32位寄存器的寄存器组
    reg[`RegBus] regs[0 : `RegNum-1];

    // 寄存器写操作
    always @(posedge clk) begin
        if (rst == `RstDisable) begin
            if (we_i_reg == `WriteEnable && waddr_i_reg != 5'b0) begin
                regs[waddr_i_reg] <= wdata_i_reg;
            end
        end
    end

    // 寄存器读端口1
    assign rdata1_o_reg = (rst == `RstEnable || raddr1_i_reg == 5'b0) ? 64'b0 : regs[raddr1_i_reg];
    // 寄存器读端口2
    assign rdata2_o_reg = (rst == `RstEnable || raddr1_i_reg == 5'b0) ? 64'b0 : regs[raddr2_i_reg];
        
endmodule //regfile
