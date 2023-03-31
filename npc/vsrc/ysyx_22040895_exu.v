`ifndef _DEFINE_H
`define _DEFINE_H
	`include "../include/define.v"
`endif

`ifndef _ALU_V
`define _ALU_V
`include "ysyx_22040895_alu.v"
`endif

`ifndef _BCU_V
`define _BCU_V
`include "ysyx_22040895_bcu.v"
`endif

`ifndef _MDU_V
`define _MDU_V
`include "ysyx_22040895_mdu.v"
`endif


module ysyx_22040895_exu (input wire rst,
                          input wire[`ysyx_22040895_aluopLength] aluop_i_exu,
                          input wire[`ysyx_22040895_bcuopLength] bcuop_i_exu,
                          input wire[`ysyx_22040895_RegBus] op1_i_exu,
                          input wire[`ysyx_22040895_RegBus] op2_i_exu,
                          input wire[`ysyx_22040895_InstAddrBus] pc_i_exu,
                          input wire[`ysyx_22040895_RegBus] offset_i_exu,
                          input wire[3:0] mduop_i_exu,
                          input wire[1:0] sl_i_exu,
                          input wire wordop_i_exu,
                          input wire shift_i_exu,
                          output wire jump_branch_o_exu,
                          output reg[`ysyx_22040895_RegBus] result_o_exu,
                          output wire[`ysyx_22040895_InstAddrBus] dnpc_o_exu,
                          output wire[`ysyx_22040895_RegBus] mdata_o_exu,
                          input wire[2:0] privileged_op_i_exu,
                          input wire[`ysyx_22040895_RegBus] csrrdata_i_exu,
                          output reg[`ysyx_22040895_RegBus] csrwdata_o_exu,
                          input wire[`ysyx_22040895_RegBus] rdata_mepc_i_exu,
                          output reg[`ysyx_22040895_RegBus] wdata_mepc_o_exu,
                          input wire[`ysyx_22040895_RegBus] rdata_mcause_i_exu,
                          output reg[`ysyx_22040895_RegBus] wdata_mcause_o_exu,
                          input wire[`ysyx_22040895_RegBus] rdata_mtvec_i_exu,
                          output wire[`ysyx_22040895_RegBus] wdata_mtvec_o_exu,
                          input wire[`ysyx_22040895_RegBus] rdata_mstatus_i_exu,
                          output wire[`ysyx_22040895_RegBus] wdata_mstatus_o_exu);
    
    wire lt_alu_bcu;
    wire ltu_alu_bcu;
    wire zero_alu_bcu;
    
    wire[`ysyx_22040895_RegBus] op2_i_alu = (sl_i_exu == 2'b01) ? (offset_i_exu) : (op2_i_exu);
    wire[`ysyx_22040895_RegBus] op1_i_alu = op1_i_exu;
    wire[`ysyx_22040895_RegBus] alu_result;
    wire[`ysyx_22040895_RegBus] math_result;
    
    ysyx_22040895_alu my_alu(
    //ports
    .aluop_i_alu  		(aluop_i_exu),
    .op1_i_alu    		(op1_i_alu),
    .op2_i_alu    		(op2_i_alu),
    .shift_i_alu		(shift_i_exu),
    .result_o_alu 		(alu_result),
    .lt_o_alu           (lt_alu_bcu),
    .ltu_o_alu          (ltu_alu_bcu),
    .zero_o_alu         (zero_alu_bcu),
    .wordop_i_alu		(wordop_i_exu)
    );
    
    // branch
    wire[`ysyx_22040895_RegBus] dnpc_o_bcu;
    ysyx_22040895_bcu my_bcu(
    //ports
    .lt_i_bcu          		(lt_alu_bcu),
    .ltu_i_bcu         		(ltu_alu_bcu),
    .zero_i_bcu        		(zero_alu_bcu),
    .bcuop_i_bcu       		(bcuop_i_exu),
    .pc_i_bcu          		(pc_i_exu),
    .offset_i_bcu      		(offset_i_exu),
    .jump_branch_o_bcu 		(jump_branch_o_exu),
    .dnpc_o_bcu        		(dnpc_o_bcu)
    );
    
    // 乘除法部件
    wire[`ysyx_22040895_RegBus] mdu_result;
    ysyx_22040895_mdu my_mdu(
    //ports
    .mduop_i_mdu			(mduop_i_exu),
    .op1_i_mdu				(op1_i_exu),
    .op2_i_mdu				(op2_i_exu),
    .result_o_mdu			(mdu_result)
    );
    
    assign math_result = ((|mduop_i_exu) == 1'b1) ? mdu_result : alu_result;
    
    // 进行下一个PC的选择
    // 备选有
    // 1. j类型指令的跳转
    // 2. b类型指令的跳转
    // 3. 特权指令的跳转
    // 选出来后再到取值阶段去与当前pc+4做选择
    assign dnpc_o_exu = (jalr_op == 1) ? ((op1_i_exu + offset_i_exu) & ~1) : (privileged_op_i_exu == 3'b001) ? privileged_pc : dnpc_o_bcu;
    // 0 alu   |   1 adder_op2
    wire auipc_op                         = (aluop_i_exu == 4'b1010);
    wire lui_op                           = (aluop_i_exu == 4'b1011);
    wire jal_op                           = (bcuop_i_exu == 3'b111);
    wire jalr_op                          = (aluop_i_exu == 4'b1100);
    wire[`ysyx_22040895_RegBus] adder_op1 = (lui_op == 1'b1) ? (64'b0) : pc_i_exu;
    
    wire[`ysyx_22040895_RegBus] adder_op2 = (auipc_op == 1'b1 | lui_op == 1'b1) ? (op2_i_exu<<12) :
    (jal_op == 1'b1 | jalr_op == 1'b1) ? (64'h4) : 64'h0;
    
    wire[`ysyx_22040895_RegBus] adder_result = adder_op1 + adder_op2;
    
    assign result_o_exu = (|privileged_op_i_exu) ? csrsetrd : (auipc_op | lui_op | jal_op | jalr_op) ? adder_result :
    (wordop_i_exu == 1'b1) ? ({{32{math_result[31]}}, math_result[31:0]}) : math_result;
    
    
    assign mdata_o_exu = op2_i_exu;

	
    
    reg[`ysyx_22040895_InstAddrBus] privileged_pc;
    // 暂存异常处理要写入通用寄存器的结果
    reg[`ysyx_22040895_RegBus] csrsetrd;
    // 用来暂存从CSR中取出mstatus的寄存器
    reg[`ysyx_22040895_RegBus] mstatus;
    // 暂存中间数据
    reg[`ysyx_22040895_RegBus] temp;
    always_comb  begin
        case (privileged_op_i_exu)
            // ecall指令
            3'b001 : begin
				wdata_mcause_o_exu  = 'd11;
                wdata_mepc_o_exu    = pc_i_exu;
                privileged_pc       = rdata_mtvec_i_exu;
                csrwdata_o_exu      = 'b0;
                temp                = 'b0;
                csrsetrd            = 'b0;
                mstatus             = 'b0;
                wdata_mstatus_o_exu = 'b0;
            end
            // mret指令
            3'b010 : begin
                privileged_pc = rdata_mepc_i_exu;
                mstatus       = rdata_mstatus_i_exu;
                if (mstatus[7] == 1'b1) begin
                    mstatus = {mstatus[63:13], 1'b0, 1'b0, mstatus[10:8], 1'b1, mstatus[6:4], 1'b1, mstatus[2:0]};
                end
                else begin
                    mstatus = {mstatus[63:13], 1'b0, 1'b0, mstatus[10:8], 1'b1, mstatus[6:4], 1'b0, mstatus[2:0]};
                end
                wdata_mstatus_o_exu = mstatus;
                csrwdata_o_exu      = 'b0;
                temp                = 'b0;
                csrsetrd            = 'b0;
                wdata_mepc_o_exu    = 'b0;
                wdata_mcause_o_exu  = 'b0;
            end
            // csrrs指令
            3'b011 : begin
                temp                = csrrdata_i_exu;
                csrwdata_o_exu      = temp | op1_i_exu;
                csrsetrd            = temp;
                privileged_pc       = 'b0;
                mstatus             = 'b0;
                wdata_mstatus_o_exu = 'b0;
                wdata_mepc_o_exu    = 'b0;
                wdata_mcause_o_exu  = 'b0;
            end
            // csrrw指令
            3'b100 : begin
                temp                = csrrdata_i_exu;
                csrwdata_o_exu      = op1_i_exu;
                csrsetrd            = temp;
                privileged_pc       = 'b0;
                mstatus             = 'b0;
                wdata_mstatus_o_exu = 'b0;
                wdata_mepc_o_exu    = 'b0;
                wdata_mcause_o_exu  = 'b0;
            end
            default : begin
                temp                = 'b0;
                csrwdata_o_exu      = 'b0;
                csrsetrd            = 'b0;
                privileged_pc       = 'b0;
                mstatus             = 'b0;
                wdata_mstatus_o_exu = 'b0;
                wdata_mepc_o_exu    = 'b0;
                wdata_mcause_o_exu  = 'b0;
            end
        endcase
    end
    
endmodule //ex
