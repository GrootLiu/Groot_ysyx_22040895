`ifndef _DEFINE_H
`define _DEFINE_H
`include "../include/define.v"
`endif

module ysyx_22040895_sext (input wire rst,
             input wire immsel_i_sext,
             input wire[`ysyx_22040895_imm1Length] imm1_i_sext,
             input wire[`ysyx_22040895_imm2Length] imm2_i_sext,
             output wire[`ysyx_22040895_RegBus] simm_o_sext);
    
    wire[`ysyx_22040895_RegBus] sign_imm_ext;
    wire[`ysyx_22040895_RegBus] sign_imm1_ext;
    wire[`ysyx_22040895_RegBus] sign_imm2_ext;
    
    // sign_imm_ext = 1 表示对imm1进行符号扩展，sign_imm_ext = 0 表示对imm2进行符号扩展
    
    assign sign_imm1_ext = {{52{imm1_i_sext[11]}}, imm1_i_sext[11:0]};
    assign sign_imm2_ext = {{44{imm2_i_sext[19]}}, imm2_i_sext[19:0]};
    assign sign_imm_ext = (immsel_i_sext == 1'b1) ? sign_imm1_ext : sign_imm2_ext;
    assign simm_o_sext  = (rst == `ysyx_22040895_RstEnable) ? 64'b0 : sign_imm_ext;
    
    
endmodule //sext
    
