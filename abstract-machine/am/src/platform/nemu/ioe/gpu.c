/*
 * @Author: Groot
 * @Date: 2022-04-06 19:54:14
 * @LastEditTime: 2022-10-19 23:24:27
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/abstract-machine/am/src/platform/nemu/ioe/gpu.c
 * 版权声明
 */
#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)
#define RMASK 0x00ff0000
#define GMASK 0x0000ff00
#define BMASK 0x000000ff
#define AMASK 0x00000000
// SYNC_ADDR = 0xa0000000 + 0x0000100 + 0x00000004 = 0xa0000104

#define N 32

static uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;

static uint32_t vga_config_h;
static uint32_t vga_config_w;

void __am_gpu_init()
{
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg)
{
	vga_config_h = inw(VGACTL_ADDR);
	vga_config_w = inw(VGACTL_ADDR + 2);
	uint32_t vga_mem_size = vga_config_h * vga_config_w * sizeof(uint32_t);
	*cfg = (AM_GPU_CONFIG_T){
		.present = true, .has_accel = false, .width = vga_config_w, .height = vga_config_h, .vmemsz = vga_mem_size};
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl)
{
	uint32_t *temp = (uint32_t *)ctl->pixels;
	uint32_t count = 0;
	uint32_t pos = ctl->x + ctl->y * vga_config_w;
	// 这里应该往FBADDR里面写如ctl中的一个内容，也就是要显示的东西
	for (uint32_t j = 0; j < ctl->h; j++)
	{
		uint32_t pos_t = pos + j * vga_config_w;
		for (uint32_t i = 0; i < ctl->w; i++)
		{
			fb[pos_t++] = temp[count++];
		}
	}

	if (ctl->sync)
	{
		outl(SYNC_ADDR, 1);
	}
}

void __am_gpu_status(AM_GPU_STATUS_T *status)
{
	status->ready = true;
}
