/*
 * @Author: Groot
 * @Date: 2022-04-06 19:54:14
 * @LastEditTime: 2022-08-03 15:19:00
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/abstract-machine/klib/src/stdio.c
 * 版权声明
 */
#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
int printf(const char *fmt, ...)
{
  int i = 0;
  int cnt = 0;
  char out[2048];
  va_list arg_ptr;
  va_start(arg_ptr, fmt);
   while (fmt[i] != '\0')
  {
    if (fmt[i] == '%')
    {
      int args_i;
      char args_i_s[2048];
      char *args_s;
      switch (fmt[i + 1])
      {
      case 's':
        args_s = va_arg(arg_ptr, char *);
        for (int j = 0; args_s[j] != '\0'; j++)
        {
          out[cnt] = args_s[j];
          cnt++;
        }
        i += 2;
        break;
      case 'd':
        args_i = va_arg(arg_ptr, int);
        itoa(args_i, args_i_s);
        for (int j = 0; args_i_s[j] != '\0'; j++)
        {
          out[cnt] = args_i_s[j];
          cnt++;
        }
        i += 2;
        break;
      default:
        out[cnt] = fmt[i];
        i++;
        cnt++;
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
  out[cnt] = '\0';
  va_end(arg_ptr);
  for (int j = 0; j < cnt; j++)
  {
    putch(out[j]);
  }
  return cnt;
}

int vsprintf(char *out, const char *fmt, va_list ap)
{
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...)
{
  int i = 0;
  int cnt = 0;
  va_list arg_ptr;
  va_start(arg_ptr, fmt);
  while (fmt[i] != '\0')
  {
    if (fmt[i] == '%')
    {
      int args_i;
      char args_i_s[1024];
      char *args_s;
      switch (fmt[i + 1])
      {
      case 's':
        args_s = va_arg(arg_ptr, char *);
        for (int j = 0; args_s[j] != '\0'; j++)
        {
          out[cnt] = args_s[j];
          cnt++;
        }
        i += 2;
        break;
      case 'd':
        args_i = va_arg(arg_ptr, int);
        itoa(args_i, args_i_s);
        for (int j = 0; args_i_s[j] != '\0'; j++)
        {
          out[cnt] = args_i_s[j];
          cnt++;
        }
        i += 2;
        break;
      default:
        out[cnt] = fmt[i];
        i++;
        cnt++;
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
  out[cnt+1] = '\0';
  va_end(arg_ptr);
  return cnt;
}

int snprintf(char *out, size_t n, const char *fmt, ...)
{
    int i = 0;
  int cnt = 0;
  va_list arg_ptr;
  va_start(arg_ptr, fmt);
  while (fmt[i] != '\0' && cnt <= n)
  {
    if (fmt[i] == '%')
    {
      int args_i;
      char args_i_s[1024];
      char *args_s;
      switch (fmt[i + 1])
      {
      case 's':
        args_s = va_arg(arg_ptr, char *);
        for (int j = 0; args_s[j] != '\0'; j++)
        {
          out[cnt] = args_s[j];
          cnt++;
        }
        i += 2;
        break;
      case 'd':
        args_i = va_arg(arg_ptr, int);
        itoa(args_i, args_i_s);
        for (int j = 0; args_i_s[j] != '\0'; j++)
        {
          out[cnt] = args_i_s[j];
          cnt++;
        }
        i += 2;
        break;
      default:
        out[cnt] = fmt[i];
        i++;
        cnt++;
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
  out[cnt+1] = '\0';
  va_end(arg_ptr);
  return cnt;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap)
{
  panic("Not implemented");
}

#endif
