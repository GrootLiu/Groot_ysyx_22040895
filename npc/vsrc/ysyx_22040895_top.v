`ifndef _DEFINE_H
`define _DEFINE_H
`include "../include/define.v"
`endif

`ifndef _IDU_H
`define _IDU_H
`include "ysyx_22040895_idu.v"
`endif

`ifndef _IFU_H
`define _IFU_H
`include "ysyx_22040895_ifu.v"
`endif

`ifndef _SEXT_V
`define _SEXT_V
`include "ysyx_22040895_sext.v"
`endif

`ifndef _REGFILE_V
`define _REGFILE_V
`include "ysyx_22040895_regfile.v"
`endif

`ifndef _OPNUMSEL_V
`define _OPNUMSEL_V
`include "ysyx_22040895_opnumsel.v"
`endif

`ifndef _CU_V
`define _CU_V
`include "ysyx_22040895_cu.v"
`endif

`ifndef _EXU_V
`define _EXU_V
`include "ysyx_22040895_exu.v"
`endif

`ifndef _MMU_V
`define _MMU_V
`include "ysyx_22040895_mmu.v"
`endif

`ifndef _CSR_V
`define _CSR_V
`include "ysyx_22040895_csr.v"
`endif

`ifndef _PRIVILEGED_V
`define _PRIVILEGED_V
`include "ysyx_22040895_privileged.v"
`endif



module top(input wire clk,
           input wire rst,
           input wire[`ysyx_22040895_InstBus] inst_i,
           output wire[`ysyx_22040895_InstAddrBus] instaddr_o);
    export "DPI-C" function get_inst;
    // 用于连接if模块和inst_rom的线
    wire ce_ifu_instrom;
    // 用于连接cu和if中pc的线
    wire pcsel_cu_ifu;
    
    // 用于连接if模块与id模块的线
    wire[`ysyx_22040895_InstBus] inst_ifu_idu;
    wire[`ysyx_22040895_InstAddrBus] pc_ifu_idu;
    
    // 用于连接id模块和cu模块的线
    wire[`ysyx_22040895_OpCodeLength] opcode_id_cu;
    wire[`ysyx_22040895_func3Length] func3_id_cu;
    wire[`ysyx_22040895_func7Length] func7_id_cu;
    
    // 用于连接id模块和sext模块的线
    wire[`ysyx_22040895_imm1Length] imm1_id_sext;
    wire[`ysyx_22040895_imm2Length] imm2_id_sext;
    
    // 用于连接cu模块和sext模块的线
    wire immsel_cu_sext;
    
    // 用于连接sext模块和opnum_mux模块和exu的线
    wire[`ysyx_22040895_RegBus] simm_sext_opnummux_exu;
    
    // 用于连接id模块和regfile模块的线
    wire[`ysyx_22040895_RegAddrBus] rs1addr_id_reg;
    wire[`ysyx_22040895_RegAddrBus] rs2addr_id_reg;
    wire[`ysyx_22040895_RegAddrBus] rdaddr_id_reg;
    
    // 用于连接cu模块和regfile模块的线
    wire re1_cu_reg;
    wire re2_cu_reg;
    wire we_cu_reg;
    
    // 用于连接cu模块和opnumsel模块得线
    wire opsrc_cu_opnumsel;
    
    
    // 用于连接cu模块和exu模块的线
    wire[`ysyx_22040895_aluopLength] aluop_cu_exu;
    wire[`ysyx_22040895_bcuopLength] bcuop_cu_exu;
    wire[`ysyx_22040895_mduopLength] mduop_cu_exu;
    wire jump_branch_exu_cu;
    wire wordop_cu_exu;
    wire shift_cu_exu;
    // wire[2:0] privileged_op_cu_exu;
    
    // 用于连接ex模块和ifu模块的线
    wire[`ysyx_22040895_InstAddrBus] dnpc_exu_ifu;
    
    // 用于连接regfile和opnumsel模块的线
    wire[`ysyx_22040895_RegBus] rdata1_reg_mux;
    wire[`ysyx_22040895_RegBus] rdata2_reg_mux;
    
    // 用于连接mmu模块和regfile模块的线
    wire[`ysyx_22040895_RegBus] wdata_mmu_reg;
    
    // 用于连接id模块和ex模块和csr模块的线
    wire[`ysyx_22040895_InstAddrBus] pc_id_exu_csr;
    
    // 用于连接opnumsel模块和ex模块和csr模块的线
    wire[`ysyx_22040895_RegBus] opnum1_opnumsel_ex_csr;
    wire[`ysyx_22040895_RegBus] opnum2_opnumsel_ex;
    
    // 用于连接cu和mmu的线
    wire[1:0] sl_cu_mmu_exu;
    wire mew_cu_mmu;
    wire[1:0] munit_cu_mmu;
    
    // 用于连接exu和mmu的线
    wire[`ysyx_22040895_RegBus] result_exu_mmu;
    wire[`ysyx_22040895_RegBus] wmdata_exu_mmu;
    
    // 用于连接idu和csr的线
    wire[`ysyx_22040895_CSRRegAddrBus] csrraddr_idu_csr;
    wire[`ysyx_22040895_CSRRegAddrBus] csrwaddr_idu_csr;
    
    // 用于连接cu和csr的线
    wire re_cu_csr;
    wire we_cu_csr;
    wire set_mepc_cu_csr;
    wire get_mepc_cu_csr;
    wire set_mcause_cu_csr;
    wire get_mcause_cu_csr;
    wire set_mtvec_cu_csr;
    wire get_mtvec_cu_csr;
    wire set_mstatus_cu_csr;
    wire get_mstatus_cu_csr;

	// 用于连接cu和privileged的线
	wire [`ysyx_22040895_CSRRegAddrBus] privileged_op_cu_privileged;
    
    // 用于连接csr和privileged的线
    wire[`ysyx_22040895_RegBus] csrrdata_csr_privileged;
    wire[`ysyx_22040895_RegBus] csrwdata_privileged_csr;
    wire[`ysyx_22040895_RegBus] csrrdata_mepc_csr_privileged;
    wire[`ysyx_22040895_RegBus] csrwdata_mepc_privileged_csr;
    wire[`ysyx_22040895_RegBus] csrrdata_mcause_csr_privileged;
    wire[`ysyx_22040895_RegBus] csrwdata_mcause_privileged_csr;
    wire[`ysyx_22040895_RegBus] csrrdata_mtvec_csr_privileged;
    wire[`ysyx_22040895_RegBus] csrwdata_mtvec_privileged_csr;
    wire[`ysyx_22040895_RegBus] csrwdata_mstatus_privileged_csr;
    wire[`ysyx_22040895_RegBus] csrrdata_mstatus_privileged_csr;
    
    // 用于连接privileged和exu的线
    wire[`ysyx_22040895_RegBus] result_privileged_exu;
    wire[`ysyx_22040895_InstAddrBus] privileged_pc_privileged_exu;
	wire[`ysyx_22040895_CSRRegAddrBus] privileged_op_privileged_exu;
    
	
    ysyx_22040895_ifu my_ifu(
    .clk                (clk			),
    .rst                (rst			),
    .inst_i_ifu         (inst_i			),
    .pcsel_i_ifu        (pcsel_cu_ifu	),
    .dnpc_i_ifu         (dnpc_exu_ifu	),
    .inst_o_ifu         (inst_ifu_idu	),
    .instaddr_o_ifu     (instaddr_o		),
    .pc_o_ifu           (pc_ifu_idu		),
    .ce_o_ifu           (ce_ifu_instrom	)
    );
    
    function void get_inst();
        output int inst;
        inst = inst_i;
    endfunction
    
    ysyx_22040895_sext my_sext(
    .rst           		(rst					),
    .immsel_i_sext 		(immsel_cu_sext			),
    .imm1_i_sext   		(imm1_id_sext			),
    .imm2_i_sext   		(imm2_id_sext			),
    .simm_o_sext   		(simm_sext_opnummux_exu	)
    );
    
    ysyx_22040895_idu my_idu(
    .rst           		(rst				),
    .inst_i_idu    		(inst_ifu_idu		),
    .pc_i_idu      		(pc_ifu_idu			),
    .opcode_o_idu  		(opcode_id_cu		),
    .func3_o_idu   		(func3_id_cu		),
    .func7_o_idu   		(func7_id_cu		),
    .imm1_o_idu    		(imm1_id_sext		),
    .imm2_o_idu    		(imm2_id_sext		),
    .rs1addr_o_idu 		(rs1addr_id_reg		),
    .rs2addr_o_idu 		(rs2addr_id_reg		),
    .rdaddr_o_idu  		(rdaddr_id_reg		),
    .pc_o_idu      		(pc_id_exu_csr		),
    .csrraddr_o_idu		(csrraddr_idu_csr	),
    .csrwaddr_o_idu		(csrwaddr_idu_csr	)
    );
    
    ysyx_22040895_regfile my_regfile(
    .clk          		(clk			),
    .rst          		(rst			),
    .re1_i_reg    		(re1_cu_reg		),
    .re2_i_reg    		(re2_cu_reg		),
    .we_i_reg     		(we_cu_reg		),
    .raddr1_i_reg 		(rs1addr_id_reg	),
    .raddr2_i_reg 		(rs2addr_id_reg	),
    .waddr_i_reg  		(rdaddr_id_reg	),
    .rdata1_o_reg 		(rdata1_reg_mux	),
    .rdata2_o_reg 		(rdata2_reg_mux	),
    .wdata_i_reg  		(wdata_mmu_reg	)
    );
    
    ysyx_22040895_opnumsel my_opnumsel(
    .opsrc_i_opnumsel  		(opsrc_cu_opnumsel			),
    .simm_i_opnumsel   		(simm_sext_opnummux_exu		),
    .rdata1_opnumsel   		(rdata1_reg_mux				),
    .rdata2_opnumsel   		(rdata2_reg_mux				),
    .opnum1_o_opnumsel 		(opnum1_opnumsel_ex_csr		),
    .opnum2_o_opnumsel 		(opnum2_opnumsel_ex			)
    );
    
    ysyx_22040895_cu my_cu(
    .rst         		(rst						),
    .opcode_i_cu 		(opcode_id_cu				),
    .func3_i_cu  		(func3_id_cu				),
    .func7_i_cu  		(func7_id_cu				),
    .jump_branch_i_cu  	(jump_branch_exu_cu			),
    .aluop_o_cu  		(aluop_cu_exu				),
    .opsel_o_cu  		(opsrc_cu_opnumsel			),
    .bcuop_o_cu         (bcuop_cu_exu				),
    .immsel_o_cu 		(immsel_cu_sext				),
    .re1_o_cu    		(re1_cu_reg					),
    .re2_o_cu    		(re2_cu_reg					),
    .we_o_cu     		(we_cu_reg					),
    .pcsel_o_cu  		(pcsel_cu_ifu				),
    .mduop_o_cu			(mduop_cu_exu				),
    .sl_o_cu			(sl_cu_mmu_exu				),
    .mwe_o_cu			(mew_cu_mmu					),
    .munit_o_cu			(munit_cu_mmu				),
    .wordop_o_cu		(wordop_cu_exu				),
    .shift_o_cu			(shift_cu_exu				),
    .csrre_o_cu			(re_cu_csr					),
    .csrwe_o_cu			(we_cu_csr					),
    .set_mepc_o_cu		(set_mepc_cu_csr			),
    .get_mepc_o_cu		(get_mepc_cu_csr			),
    .set_mcause_o_cu	(set_mcause_cu_csr			),
    .get_mcause_o_cu	(get_mcause_cu_csr			),
    .set_mtvec_o_cu		(set_mtvec_cu_csr			),
    .get_mtvec_o_cu		(get_mtvec_cu_csr			),
    .set_mstatus_o_cu	(set_mstatus_cu_csr			),
    .get_mstatus_o_cu	(get_mstatus_cu_csr			),
    .privileged_op_o_cu	(privileged_op_cu_privileged)
    );
    
    ysyx_22040895_exu my_exu(
    // .rst          		(rst							),
    .aluop_i_exu  		(aluop_cu_exu					),
    .bcuop_i_exu        (bcuop_cu_exu					),
    .jump_branch_o_exu	(jump_branch_exu_cu				),
    .dnpc_o_exu   		(dnpc_exu_ifu					),
    .op1_i_exu    		(opnum1_opnumsel_ex_csr			),
    .op2_i_exu    		(opnum2_opnumsel_ex				),
    .result_o_exu 		(result_exu_mmu					),
    .pc_i_exu     		(pc_id_exu_csr					),
    .offset_i_exu       (simm_sext_opnummux_exu			),
    .mduop_i_exu		(mduop_cu_exu					),
    .sl_i_exu			(sl_cu_mmu_exu					),
    .mdata_o_exu		(wmdata_exu_mmu					),
    .wordop_i_exu		(wordop_cu_exu					),
    .shift_i_exu		(shift_cu_exu					),
    .privileged_op_i_exu(privileged_op_privileged_exu	),
    .csrpc_i_exu		(privileged_pc_privileged_exu	),
    .csrresult_i_exu	(result_privileged_exu			)
    );
    
    
    ysyx_22040895_mmu my_mmu(
    //ports
    .clk				(clk				),
    .rst          		(rst          		),
    .sl_i_mmu     		(sl_cu_mmu_exu		),
    .mwe_i_mmu    		(mew_cu_mmu    		),
    .munit_i_mmu  		(munit_cu_mmu  		),
    .result_i_mmu 		(result_exu_mmu		),
    .wmdata_i_mmu 		(wmdata_exu_mmu		),
    .wdata_o_mmu  		(wdata_mmu_reg 		)
    );
    
    
    ysyx_22040895_csr my_csr(
    //ports
    .clk                		(clk                			),
    .rst                		(rst                			),
    .re_i_csr           		(re_cu_csr  	 				),
    .we_i_csr           		(we_cu_csr	   					),
    .raddr_i_csr        		(csrraddr_idu_csr   			),
    .waddr_i_csr        		(csrwaddr_idu_csr   			),
    .rdata_o_csr        		(csrrdata_csr_privileged   		),
    .wdata_i_csr        		(csrwdata_privileged_csr   		),
    .set_mepc_i_csr     		(set_mepc_cu_csr	   			),
    .get_mepc_i_csr     		(get_mepc_cu_csr	   			),
    .wdata_mepc_i_csr   		(csrwdata_mepc_privileged_csr 	),
    .rdata_mepc_o_csr   		(csrrdata_mepc_csr_privileged 	),
    .set_mcause_i_csr   		(set_mcause_cu_csr   			),
    .get_mcause_i_csr   		(get_mcause_cu_csr   			),
    .wdata_mcause_i_csr 		(csrwdata_mcause_privileged_csr	),
    .rdata_mcause_o_csr 		(csrrdata_mcause_csr_privileged	),
    .set_mtvec_i_csr    		(set_mtvec_cu_csr   			),
    .get_mtvec_i_csr    		(get_mtvec_cu_csr   			),
    .set_mstatus_i_csr			(set_mstatus_cu_csr				),
    .get_mstatus_i_csr			(get_mstatus_cu_csr				),
    .wdata_mstatus_i_csr		(csrwdata_mstatus_privileged_csr),
    .rdata_mstatus_o_csr		(csrrdata_mstatus_privileged_csr),
    .wdata_mtvec_i_csr  		(csrwdata_mtvec_privileged_csr	),
    .rdata_mtvec_o_csr  		(csrrdata_mtvec_csr_privileged	)
    );
    
    
    ysyx_22040895_privileged my_privileged(
    //ports
	.privileged_op_i_privileged	(privileged_op_cu_privileged		),
    .pc_i_privileged     		(pc_id_exu_csr						),
    .csrrdata_i_privileged      (csrrdata_csr_privileged			),
    .csrwdata_o_privileged      (csrwdata_privileged_csr			),
    .rdata_mepc_i_privileged    (csrrdata_mepc_csr_privileged		),
    .wdata_mepc_o_privileged    (csrwdata_mepc_privileged_csr		),
    .rdata_mcause_i_privileged  (csrrdata_mcause_csr_privileged		),
    .wdata_mcause_o_privileged  (csrwdata_mcause_privileged_csr		),
    .rdata_mtvec_i_privileged   (csrrdata_mtvec_csr_privileged		),
    .wdata_mtvec_o_privileged   (csrwdata_mtvec_privileged_csr		),
    .rdata_mstatus_i_privileged (csrrdata_mstatus_privileged_csr	),
    .wdata_mstatus_o_privileged (csrwdata_mstatus_privileged_csr	),
    .rs1_i_privileged    		(opnum1_opnumsel_ex_csr				),
    .pc_o_privileged     		(privileged_pc_privileged_exu		),
    .result_o_peivileged 		(result_privileged_exu				),
	.privileged_op_o_privileged	(privileged_op_privileged_exu		)
    );
    
    
endmodule
