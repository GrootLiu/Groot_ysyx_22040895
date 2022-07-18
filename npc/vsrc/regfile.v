`include "../include/define.v"

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

    
    
endmodule //regfile
