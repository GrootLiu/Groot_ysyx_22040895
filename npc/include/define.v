//*************************     全局的宏定义     **************************
`define ysyx_22040895_RstEnable       1'b1                    //复位信号有效
`define ysyx_22040895_RstDisable      1'b0                    //复位信号无效
`define ysyx_22040895_ZeroWord        64'h0000000000000000    //32位数值0
`define ysyx_22040895_WriteEnable     1'b1                    //使能写
`define ysyx_22040895_WriteDisable    1'b0                    //禁止写
`define ysyx_22040895_ReadEnable      1'b1                    //使能读
`define ysyx_22040895_ReadDisable     1'b0                    //禁止读
// `define AluOpBus        7:0                     //译码阶段的输出aluop_o的宽度
// `define AluSelBus       2:0                     //译码阶段的输出alusel_o的宽度
`define ysyx_22040895_InstValid       1'b0                    //指令有效
`define ysyx_22040895_InstInvalid     1'b1                    //指令无效
`define ysyx_22040895_True_v          1'b1                    //逻辑真
`define ysyx_22040895_False_v         1'b0                    //逻辑假
`define ysyx_22040895_ChipEnable      1'b1                    //芯片使能
`define ysyx_22040895_ChipDisable     1'b0                    //芯片禁止
`define ysyx_22040895_NegNum          1'b1
`define ysyx_22040895_PosNum          1'b0
`define ysyx_22040895_OverFlow        1'b1
`define ysyx_22040895_Stop            1'b1                    //流水线暂停
`define ysyx_22040895_NoStop          1'b0                    //流水线不暂停
`define ysyx_22040895_Branch          1'b1                    //转移
`define ysyx_22040895_NotBranch       1'b0                    //不转移

// decode
`define ysyx_22040895_OpCodeLength    6:0             // opcode长度 = 7
`define ysyx_22040895_func3Length      2:0             // fun3长度 = 3
`define ysyx_22040895_func7Length      6:0             // fun7长度 = 7
`define ysyx_22040895_aluopLength           3:0
`define ysyx_22040895_bcuopLength           2:0
`define ysyx_22040895_mduopLength			3:0
`define ysyx_22040895_imm1Length            11:0
`define ysyx_22040895_imm2Length            19:0

//*************************     与指令存储器ROM有关的宏定义     **************************
`define ysyx_22040895_InstAddrBus     63:0            //ROM的地址总线宽度
`define ysyx_22040895_InstBus         31:0            //ROM的数据总线宽度
`define ysyx_22040895_InstMemNum      131071          //ROM的实际大小为128KB
`define ysyx_22040895_InstMemNumLog2  17              //ROM实际使用的地址线宽度

//*************************     与通用寄存器Reg file有关的宏定义     **************************
`define ysyx_22040895_RegAddrBus       4:0            //Regfile模块的地址线宽度
`define ysyx_22040895_RegBus          63:0            //Regfile模块的数据线宽度
`define ysyx_22040895_RegWidth        64              //通用寄存器的宽度
`define Doubleysyx_22040895_RegWidth  128             //两倍的通用寄存器的数据线宽度
`define Doubleysyx_22040895_RegBus    127:0           //两倍的通用寄存器的数据线宽度
`define ysyx_22040895_RegNum          32              //通用寄存器的数量
`define ysyx_22040895_RegNumLog2      5               //寻址通用寄存器使用的地址位数
