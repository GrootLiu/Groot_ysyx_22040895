/*
 * @Author: Groot
 * @Date: 2022-04-06 19:54:14
 * @LastEditTime: 2022-10-17 16:15:43
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/abstract-machine/klib/src/stdlib.c
 * 版权声明
 */
#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;

int rand(void)
{
	// RAND_MAX assumed to be 32767
	next = next * 1103515245 + 12345;
	return (unsigned int)(next / 65536) % 32768;
}

void srand(unsigned int seed)
{
	next = seed;
}

int abs(int x)
{
	return (x < 0 ? -x : x);
}

int atoi(const char *nptr)
{
	int x = 0;
	while (*nptr == ' ')
	{
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		x = x * 10 + *nptr - '0';
		nptr++;
	}
	return x;
}

char *itoa(int num, char *str) // 10进制
{
	int i = 0;	 //指示填充str
	if (num < 0) //如果num为负数，将num变正
	{
		num = -num;
		str[i++] = '-';
	}
	//转换
	do
	{
		str[i++] = num % 10 + 48; //取num最低位 字符0~9的ASCII码是48~57；简单来说数字0+48=48，ASCII码对应字符'0'
		num /= 10;				  //去掉最低位
	} while (num);				  // num不为0继续循环

	str[i] = '\0';

	//确定开始调整的位置
	int j = 0;
	if (str[0] == '-') //如果有负号，负号不用调整
	{
		j = 1; //从第二位开始调整
		++i;   //由于有负号，所以交换的对称轴也要后移1位
	}
	//对称交换
	for (; j < i / 2; j++)
	{
		//对称交换两端的值 其实就是省下中间变量交换a+b的值：a=a+b;b=a-b;a=a-b;
		str[j] = str[j] + str[i - 1 - j];
		str[i - 1 - j] = str[j] - str[i - 1 - j];
		str[j] = str[j] - str[i - 1 - j];
	}
	str[i] = '\0';
	return str; //返回转换后的值
}

/*********************malloc 函数****************************/
// hbrk = hardware breakpoint
static char *hbrk;
// 指示是否已经进行了malloc
static bool malloc_flag = false;
static void malloc_reset()
{
	hbrk = (void *)ROUNDUP(heap.start, 8);
	malloc_flag = true;
}
void *malloc(size_t size)
{
	// On native, malloc() will be called during initializaion of C runtime.
	// Therefore do not call panic() here, else it will yield a dead recursion:
	//   panic() -> putchar() -> (glibc) -> malloc() -> panic()
#if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
	//   panic("Not implemented");
	if (malloc_flag == false)
	{
		malloc_reset();
	}
	size = (size_t)ROUNDUP(size, 8);
	char *old = hbrk;
	hbrk += size;
	assert((uintptr_t)heap.start <= (uintptr_t)hbrk && (uintptr_t)hbrk < (uintptr_t)heap.end);
	for (uint64_t *p = (uint64_t *)old; p != (uint64_t *)hbrk; p++)
	{
		*p = 0;
	}
	return old;
#endif
	return NULL;
}

void free(void *ptr)
{
}

#endif