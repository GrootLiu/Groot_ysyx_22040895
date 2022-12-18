/*
 * @Author: Groot
 * @Date: 2022-04-06 19:26:19
 * @LastEditTime: 2022-10-18 11:31:09
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/nemu/src/device/vga.c
 * 版权声明
 */
#include <common.h>
#include <device/map.h>

#ifdef CONFIG_VGA_CTL_MMIO
#define CONFIG_VGA_SYNC_ADDR CONFIG_VGA_CTL_MMIO + 4
#endif

#define SCREEN_W (MUXDEF(CONFIG_VGA_SIZE_800x600, 800, 400))
#define SCREEN_H (MUXDEF(CONFIG_VGA_SIZE_800x600, 600, 300))

static uint32_t screen_width()
{
	return MUXDEF(CONFIG_TARGET_AM, io_read(AM_GPU_CONFIG).width, SCREEN_W);
}

static uint32_t screen_height()
{
	return MUXDEF(CONFIG_TARGET_AM, io_read(AM_GPU_CONFIG).height, SCREEN_H);
}

static uint32_t screen_size()
{
	return screen_width() * screen_height() * sizeof(uint32_t);
}

static void *vmem = NULL;
static uint32_t *vgactl_port_base = NULL;
static uint32_t *vgasync_port_base = NULL;

#ifdef CONFIG_VGA_SHOW_SCREEN
#ifndef CONFIG_TARGET_AM
#include <SDL2/SDL.h>

static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;

static void init_screen()
{
	SDL_Window *window = NULL;
	char title[128];
	sprintf(title, "%s-NEMU", str(__GUEST_ISA__));
	SDL_Init(SDL_INIT_VIDEO);
	SDL_CreateWindowAndRenderer(
		SCREEN_W * (MUXDEF(CONFIG_VGA_SIZE_400x300, 2, 1)),
		SCREEN_H * (MUXDEF(CONFIG_VGA_SIZE_400x300, 2, 1)),
		0, &window, &renderer);
	SDL_SetWindowTitle(window, title);
	texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
								SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);
}

static inline void update_screen()
{
	SDL_UpdateTexture(texture, NULL, vmem, SCREEN_W * sizeof(uint32_t));
	SDL_RenderClear(renderer);
	SDL_RenderCopy(renderer, texture, NULL, NULL);
	SDL_RenderPresent(renderer);
}
#else
static void init_screen()
{
}

static inline void update_screen()
{
	io_write(AM_GPU_FBDRAW, 0, 0, vmem, screen_width(), screen_height(), true);
}
#endif
#endif

void vga_update_screen()
{
	// TODO: call `update_screen()` when the sync register is non-zero,
	// then zero out the sync register
	if (CONFIG_VGA_SYNC_ADDR != 0)
	{
		update_screen();
	}

	memset(vgasync_port_base, 0, 8);
}

void init_vga()
{
	vgactl_port_base = (uint32_t *)new_space(8);
	vgasync_port_base = (uint32_t *)new_space(8);
	// 这里应该是获取屏幕大小，并把数据放在vgactl_port_base[0]中
	vgactl_port_base[0] = (screen_width() << 16) | screen_height();
#ifdef CONFIG_HAS_PORT_IO
	add_pio_map("vgactl", CONFIG_VGA_CTL_PORT, vgactl_port_base, 8, NULL);
	// add_pio_map("vgasync", CONFIG_VGA_SYNC_ADDR, vgasync_port_base, 8, vga_update_screen);
#else
	add_mmio_map("vgactl", CONFIG_VGA_CTL_MMIO, vgactl_port_base, 8, NULL);
	// add_mmio_map("vgasync", CONFIG_VGA_SYNC_ADDR, vgasync_port_base, 8, vga_update_screen);
#endif

	vmem = new_space(screen_size());
	add_mmio_map("vmem", CONFIG_FB_ADDR, vmem, screen_size(), NULL);
	IFDEF(CONFIG_VGA_SHOW_SCREEN, init_screen());
	IFDEF(CONFIG_VGA_SHOW_SCREEN, memset(vmem, 0, screen_size()));
}
