# 1 "amdev.h"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "amdev.h"
# 10 "amdev.h"
enum { AM_UART_CONFIG = (1) }; typedef struct { bool present; } AM_UART_CONFIG_T;;
enum { AM_UART_TX = (2) }; typedef struct { char data; } AM_UART_TX_T;;
enum { AM_UART_RX = (3) }; typedef struct { char data; } AM_UART_RX_T;;
enum { AM_TIMER_CONFIG = (4) }; typedef struct { bool present, has_rtc; } AM_TIMER_CONFIG_T;;
enum { AM_TIMER_RTC = (5) }; typedef struct { int year, month, day, hour, minute, second; } AM_TIMER_RTC_T;;
enum { AM_TIMER_UPTIME = (6) }; typedef struct { uint64_t us; } AM_TIMER_UPTIME_T;;
enum { AM_INPUT_CONFIG = (7) }; typedef struct { bool present; } AM_INPUT_CONFIG_T;;
enum { AM_INPUT_KEYBRD = (8) }; typedef struct { bool keydown; int keycode; } AM_INPUT_KEYBRD_T;;
enum { AM_GPU_CONFIG = (9) }; typedef struct { bool present, has_accel; int width, height, vmemsz; } AM_GPU_CONFIG_T;;
enum { AM_GPU_STATUS = (10) }; typedef struct { bool ready; } AM_GPU_STATUS_T;;
enum { AM_GPU_FBDRAW = (11) }; typedef struct { int x, y; void *pixels; int w, h; bool sync; } AM_GPU_FBDRAW_T;;
enum { AM_GPU_MEMCPY = (12) }; typedef struct { uint32_t dest; void *src; int size; } AM_GPU_MEMCPY_T;;
enum { AM_GPU_RENDER = (13) }; typedef struct { uint32_t root; } AM_GPU_RENDER_T;;
enum { AM_AUDIO_CONFIG = (14) }; typedef struct { bool present; int bufsize; } AM_AUDIO_CONFIG_T;;
enum { AM_AUDIO_CTRL = (15) }; typedef struct { int freq, channels, samples; } AM_AUDIO_CTRL_T;;
enum { AM_AUDIO_STATUS = (16) }; typedef struct { int count; } AM_AUDIO_STATUS_T;;
enum { AM_AUDIO_PLAY = (17) }; typedef struct { Area buf; } AM_AUDIO_PLAY_T;;
enum { AM_DISK_CONFIG = (18) }; typedef struct { bool present; int blksz, blkcnt; } AM_DISK_CONFIG_T;;
enum { AM_DISK_STATUS = (19) }; typedef struct { bool ready; } AM_DISK_STATUS_T;;
enum { AM_DISK_BLKIO = (20) }; typedef struct { bool write; void *buf; int blkno, blkcnt; } AM_DISK_BLKIO_T;;
enum { AM_NET_CONFIG = (21) }; typedef struct { bool present; } AM_NET_CONFIG_T;;
enum { AM_NET_STATUS = (22) }; typedef struct { int rx_len, tx_len; } AM_NET_STATUS_T;;
enum { AM_NET_TX = (23) }; typedef struct { Area buf; } AM_NET_TX_T;;
enum { AM_NET_RX = (24) }; typedef struct { Area buf; } AM_NET_RX_T;;
# 47 "amdev.h"
enum {
  AM_KEY_NONE = 0,
  AM_KEY_ESCAPE, AM_KEY_F1, AM_KEY_F2, AM_KEY_F3, AM_KEY_F4, AM_KEY_F5, AM_KEY_F6, AM_KEY_F7, AM_KEY_F8, AM_KEY_F9, AM_KEY_F10, AM_KEY_F11, AM_KEY_F12, AM_KEY_GRAVE, AM_KEY_1, AM_KEY_2, AM_KEY_3, AM_KEY_4, AM_KEY_5, AM_KEY_6, AM_KEY_7, AM_KEY_8, AM_KEY_9, AM_KEY_0, AM_KEY_MINUS, AM_KEY_EQUALS, AM_KEY_BACKSPACE, AM_KEY_TAB, AM_KEY_Q, AM_KEY_W, AM_KEY_E, AM_KEY_R, AM_KEY_T, AM_KEY_Y, AM_KEY_U, AM_KEY_I, AM_KEY_O, AM_KEY_P, AM_KEY_LEFTBRACKET, AM_KEY_RIGHTBRACKET, AM_KEY_BACKSLASH, AM_KEY_CAPSLOCK, AM_KEY_A, AM_KEY_S, AM_KEY_D, AM_KEY_F, AM_KEY_G, AM_KEY_H, AM_KEY_J, AM_KEY_K, AM_KEY_L, AM_KEY_SEMICOLON, AM_KEY_APOSTROPHE, AM_KEY_RETURN, AM_KEY_LSHIFT, AM_KEY_Z, AM_KEY_X, AM_KEY_C, AM_KEY_V, AM_KEY_B, AM_KEY_N, AM_KEY_M, AM_KEY_COMMA, AM_KEY_PERIOD, AM_KEY_SLASH, AM_KEY_RSHIFT, AM_KEY_LCTRL, AM_KEY_APPLICATION, AM_KEY_LALT, AM_KEY_SPACE, AM_KEY_RALT, AM_KEY_RCTRL, AM_KEY_UP, AM_KEY_DOWN, AM_KEY_LEFT, AM_KEY_RIGHT, AM_KEY_INSERT, AM_KEY_DELETE, AM_KEY_HOME, AM_KEY_END, AM_KEY_PAGEUP, AM_KEY_PAGEDOWN,
};







typedef uint32_t gpuptr_t;

struct gpu_texturedesc {
  uint16_t w, h;
  gpuptr_t pixels;
} __attribute__((packed));

struct gpu_canvas {
  uint16_t type, w, h, x1, y1, w1, h1;
  gpuptr_t sibling;
  union {
    gpuptr_t child;
    struct gpu_texturedesc texture;
  };
} __attribute__((packed));
