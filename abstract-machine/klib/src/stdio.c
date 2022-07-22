/*
 * @Author: Groot
 * @Date: 2022-04-06 19:54:14
 * @LastEditTime: 2022-07-20 23:04:43
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/abstract-machine/klib/src/stdio.c
 * 版权声明
 */
#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include "stdlib.c"
#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
char *Int2String(int num, char *str);
int printf(const char *fmt, ...)
{
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap)
{
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...)
{
  int i = 0;
  int cnt = 0;
  char buf[128];
  char *arg_s;
  va_list arg_ptr;
  va_start(arg_ptr, fmt);
  while (fmt[i] != '\0')
  {
    if (fmt[i] == '%')
    {
      cnt = i;
      switch (fmt[i + 1])
      {
      case 'd':
        memset(buf, 0, 128);
        itoa(va_arg(arg_ptr, int), buf);
        for (int j = 0; buf[j] != '\0'; j++)
        {
          out[cnt] = buf[j];
          cnt++;
        }
        i += 2;
        break;
      case 's':
        arg_s = va_arg(arg_ptr, char *);
        for (int j = 0; arg_s[j] != '\0'; j++)
        {
          out[cnt] = arg_s[j];
          cnt++;
        }
        i += 2;
        break;
      default:
        i++;
        break;
      }
    }
    else
    {
      out[cnt] = fmt[i];
      i++;
      cnt++;
    }
  }
  va_end(arg_ptr);
  return cnt;
}

int snprintf(char *out, size_t n, const char *fmt, ...)
{
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap)
{
  panic("Not implemented");
}

#endif
