/*
 * @Author: Groot
 * @Date: 2022-12-23 15:43:01
 * @LastEditTime: 2022-12-23 15:46:28
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: \npc\timer.c
 * 版权声明
 */
#include <am.h>
#define RTC_ADDR 0xa0000048

static uint32_t boot_sec;
// static uint32_t boot_usec;
static inline uint32_t inl(uintptr_t addr) { return *(volatile uint32_t *)addr; }

void __am_timer_init()
{
	boot_sec = inl(RTC_ADDR);
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime)
{
	uptime->us = inl(RTC_ADDR) - boot_sec;
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
