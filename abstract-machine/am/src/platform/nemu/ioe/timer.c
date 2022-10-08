/*
 * @Author: Groot
 * @Date: 2022-04-06 19:54:14
 * @LastEditTime: 2022-10-08 11:13:37
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/abstract-machine/am/src/platform/nemu/ioe/timer.c
 * 版权声明
 */
#include <am.h>
#include <nemu.h>

static uint32_t boot_sec;
// static uint32_t boot_usec;

void __am_timer_init()
{
//	 boot_usec = inl(RTC_ADDR);
	 boot_sec  = inl(RTC_ADDR + 0x4);
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime)
{
	uint32_t now_usec = inl(RTC_ADDR);
	uint32_t now_sec  = inl(RTC_ADDR + 0x4);
	uptime->us = (now_sec - boot_sec) * 1000000 + now_usec;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc)
{
	rtc->second = 0;
	rtc->minute = 0;
	rtc->hour = 0;
	rtc->day = 0;
	rtc->month = 0;
	rtc->year = 1900;
}
