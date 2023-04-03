`ifndef _DEFINE_H
`define _DEFINE_H
`include "../include/define.v"
`endif

module ysyx_22040895_privileged (input wire[`ysyx_22040895_InstAddrBus] pc_i_privileged,
                                 input wire[`ysyx_22040895_CSRRegAddrBus] privileged_op_i_privileged,
                                 input wire[`ysyx_22040895_RegBus] csrrdata_i_privileged,
                                 output reg[`ysyx_22040895_RegBus] csrwdata_o_privileged,
                                 input wire[`ysyx_22040895_RegBus] rdata_mepc_i_privileged,
                                 output reg[`ysyx_22040895_RegBus] wdata_mepc_o_privileged,
                                 input wire[`ysyx_22040895_RegBus] rdata_mcause_i_privileged,
                                 output reg[`ysyx_22040895_RegBus] wdata_mcause_o_privileged,
                                 input wire[`ysyx_22040895_RegBus] rdata_mtvec_i_privileged,
                                 output wire[`ysyx_22040895_RegBus] wdata_mtvec_o_privileged,
                                 input wire[`ysyx_22040895_RegBus] rdata_mstatus_i_privileged,
                                 output wire[`ysyx_22040895_RegBus] wdata_mstatus_o_privileged,
                                 input wire[`ysyx_22040895_RegBus] rs1_i_privileged,
                                 output wire[`ysyx_22040895_RegBus] pc_o_privileged,
                                 output wire[`ysyx_22040895_RegBus] result_o_peivileged,
								 output wire[`ysyx_22040895_CSRRegAddrBus] privileged_op_o_privileged);

// ecall


// 			wdata_mcause_o_exu     = 'd11;
//          wdata_mepc_o_exu = pc_i_exu;
//          privileged_pc    = rdata_mtvec_i_exu;

// mret
// csrrs
// csrrw



// 用来暂存从CSR中取出mstatus的寄存器
reg[`ysyx_22040895_RegBus] mstatus;
// 暂存中间数据
reg[`ysyx_22040895_RegBus] temp;


// // 特权指令ecall和mret的pc返回值
// reg[`ysyx_22040895_InstAddrBus] privileged_pc;
// // 暂存异常处理要写入通用寄存器的结果
// reg[`ysyx_22040895_RegBus] csrsetrd;

// always_comb  begin
//     case (privileged_op_i_exu)
//         // ecall指令
//         3'b001 : begin

//             csrwdata_o_exu      = 'b0;
//             temp                = 'b0;
//             csrsetrd            = 'b0;
//             mstatus             = 'b0;
//             wdata_mstatus_o_exu = 'b0;
//         end
//         // mret指令
//         3'b010 : begin
//             privileged_pc = rdata_mepc_i_exu;
//             mstatus       = rdata_mstatus_i_exu;
//             if (mstatus[7] == 1'b1) begin
//                 mstatus = {mstatus[63:13], 1'b0, 1'b0, mstatus[10:8], 1'b1, mstatus[6:4], 1'b1, mstatus[2:0]};
//             end
//             else begin
//                 mstatus = {mstatus[63:13], 1'b0, 1'b0, mstatus[10:8], 1'b1, mstatus[6:4], 1'b0, mstatus[2:0]};
//             end
//             wdata_mstatus_o_exu = mstatus;
//             csrwdata_o_exu      = 'b0;
//             temp                = 'b0;
//             csrsetrd            = 'b0;
//             wdata_mepc_o_exu    = 'b0;
//             wdata_mcause_o_exu  = 'b0;
//         end
//         // csrrs指令
//         3'b011 : begin
//             temp                = csrrdata_i_exu;
//             csrwdata_o_exu      = temp | op1_i_exu;
//             csrsetrd            = temp;
//             privileged_pc       = 'b0;
//             mstatus             = 'b0;
//             wdata_mstatus_o_exu = 'b0;
//             wdata_mepc_o_exu    = 'b0;
//             wdata_mcause_o_exu  = 'b0;
//         end
//         // csrrw指令
//         3'b100 : begin
//             temp                = csrrdata_i_exu;
//             csrwdata_o_exu      = op1_i_exu;
//             csrsetrd            = temp;
//             privileged_pc       = 'b0;
//             mstatus             = 'b0;
//             wdata_mstatus_o_exu = 'b0;
//             wdata_mepc_o_exu    = 'b0;
//             wdata_mcause_o_exu  = 'b0;
//         end
//         default : begin
//             temp                = 'b0;
//             csrwdata_o_exu      = 'b0;
//             csrsetrd            = 'b0;
//             privileged_pc       = 'b0;
//             mstatus             = 'b0;
//             wdata_mstatus_o_exu = 'b0;
//             wdata_mepc_o_exu    = 'b0;
//             wdata_mcause_o_exu  = 'b0;
//         end
//     endcase
// end

endmodule //ysyx_22040895_privileged
