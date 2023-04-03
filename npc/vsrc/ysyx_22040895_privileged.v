`ifndef _DEFINE_H
`define _DEFINE_H
`include "../include/define.v"
`endif

module ysyx_22040895_privileged (input wire[`ysyx_22040895_InstAddrBus] pc_i_privileged,
                                 input wire[`ysyx_22040895_RegBus] rs1_i_privileged,
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
                                 output wire[`ysyx_22040895_RegBus] pc_o_privileged,
                                 output wire[`ysyx_22040895_RegBus] result_o_peivileged,
                                 output wire[`ysyx_22040895_CSRRegAddrBus] privileged_op_o_privileged);
    
    // ecall和mret
    assign privileged_op_o_privileged = privileged_op_i_privileged;
    assign wdata_mcause_o_privileged  = (privileged_op_i_privileged == 3'b001) ? 'd11 : 'b0;
    assign wdata_mepc_o_privileged    = (privileged_op_i_privileged == 3'b001) ? pc_i_privileged : 'b0;
    assign pc_o_privileged = (privileged_op_i_privileged == 3'b001) ? rdata_mtvec_i_privileged :
    (privileged_op_i_privileged == 3'b010) ? rdata_mepc_i_privileged : 'b0;
    
    
    // 对于mstatus的操作主要是mret指令，其他指令暂不对该寄存器进行操作
    // 因为mstatus的处理过程比较复杂，这里用always块，方便一些
    // 用来暂存从CSR中取出mstatus的寄存器
    reg[`ysyx_22040895_RegBus] mstatus;
    always_comb
    begin
    case (privileged_op_i_privileged)
        // mret指令
        3'b010 :
        begin
            mstatus = rdata_mstatus_i_privileged;
            if (mstatus[7] == 1'b1)
            begin
                mstatus = {mstatus[63:13], 1'b0, 1'b0, mstatus[10:8], 1'b1, mstatus[6:4], 1'b1, mstatus[2:0]};
            end
            else
            begin
                mstatus = {mstatus[63:13], 1'b0, 1'b0, mstatus[10:8], 1'b1, mstatus[6:4], 1'b0, mstatus[2:0]};
            end
            wdata_mstatus_o_privileged = mstatus;
        end
        default :
        begin
            mstatus = 'b0;
        end
    endcase
    end
    
    // 暂存中间数据
    reg[`ysyx_22040895_RegBus] temp;
    // 同样用always块处理csrrs和csrrw
    always_comb
    begin
    case (privileged_op_i_privileged)
        // csrrs指令
        3'b011 :
        begin
            temp                  = csrrdata_i_privileged;
            csrwdata_o_privileged = temp | rs1_i_privileged;
            result_o_peivileged   = temp;
        end
        // csrrw指令
        3'b100 :
        begin
            temp                  = csrrdata_i_privileged;
            csrwdata_o_privileged = rs1_i_privileged;
            result_o_peivileged   = temp;
        end
        default :
        begin
            temp                  = 'b0;
            csrwdata_o_privileged = 'b0;
            result_o_peivileged   = 'b0;
        end
    endcase
    end
    
endmodule //ysyx_22040895_privileged
