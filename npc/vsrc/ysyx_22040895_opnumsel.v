`include "define.v"

module ysyx_22040895_opnumsel (
    input  wire opsrc_i_opnumsel,
    input  wire[`ysyx_22040895_RegBus] simm_i_opnumsel,
    input  wire[`ysyx_22040895_RegBus] rdata1_opnumsel,
    input  wire[`ysyx_22040895_RegBus] rdata2_opnumsel ,
    output wire[`ysyx_22040895_RegBus] opnum1_o_opnumsel,
    output wire[`ysyx_22040895_RegBus] opnum2_o_opnumsel
);


    assign opnum1_o_opnumsel = rdata1_opnumsel;
    assign opnum2_o_opnumsel = (opsrc_i_opnumsel == 1) ? rdata2_opnumsel : simm_i_opnumsel;

endmodule //opnumsel

