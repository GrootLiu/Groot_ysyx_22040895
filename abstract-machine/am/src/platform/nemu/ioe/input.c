/*
 * @Author: Groot
 * @Date: 2022-04-06 19:54:14
 * @LastEditTime: 2022-10-17 12:25:55
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/abstract-machine/am/src/platform/nemu/ioe/input.c
 * 版权声明
 */
#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd)
{
	uint32_t code = inl(KBD_ADDR);
	// code = 0;
	kbd->keydown = (code & KEYDOWN_MASK ? true : false);
	kbd->keycode = code & ~KEYDOWN_MASK;
}
