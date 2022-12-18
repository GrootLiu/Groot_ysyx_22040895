/*
 * @Author: Groot
 * @Date: 2022-04-06 19:54:14
 * @LastEditTime: 2022-07-20 15:20:15
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/abstract-machine/klib/src/string.c
 * 版权声明
 */
#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>
// #include <string.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
/**
 * @description: Returns the length of the given null-terminated byte string, that is, the number of characters in a character array whose first element is pointed to by str up to and not including the first null character.
                 The behavior is undefined if str is not a pointer to a null-terminated byte string.
 * @author: Groot
 * @param {char*} s
 * @return {size_t } The length of the null-terminated byte string str.
 * @use:
 */
size_t strlen(const char *s)
{
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    return len;
    // panic("Not implemented");
}

/**
 * @description: Copies the null-terminated byte string pointed to by src, including the null terminator, to the character array whose first element is pointed to by dest.
                 The behavior is undefined if the dest array is not large enough. The behavior is undefined if the strings overlap. The behavior is undefined if either dest is not a pointer to a character array or src is not a pointer to a null-terminated byte string.
 * @author: Groot
 * @param {char*} dst
 * @param {char*} src
 * @return {char *}returns a copy of dest
 * @use:
 */
char *strcpy(char *dst, const char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return dst;
    // panic("Not implemented");
}

/**
 * @description:  Copies at most count characters of the character array pointed to by src (including the terminating null character, but not any of the characters that follow the null character) to character array pointed to by dest.
                  If count is reached before the entire array src was copied, the resulting character array is not null-terminated.
                  If, after copying the terminating null character from src, count is not reached, additional null characters are written to dest until the total of count characters have been written.
 The behavior is undefined if the character arrays overlap, if either dest or src is not a pointer to a character array (including if dest or src is a null pointer), if the size of the array pointed to by dest is less than count, or if the size of the array pointed to by src is less than count and it does not contain a null character.
 * @author: Groot
 * @param {char *} dst
 * @param {char *} src
 * @param {int} n
 * @return {char *} returns a copy of dest
 * @use:
 */
char *strncpy(char *dst, const char *src, size_t n)
{
    int i = 0;
    while (src[i] != '\0' && i < n)
    {
        dst[i] = src[i];
        i++;
    }
    if (i < n)
    {
        for (int j = i; j < n; j++)
        {
            dst[i] = '\0';
        }
    }
    return dst;
    // panic("Not implemented");
}

/**
 * @description: Appends characters from the character array pointed to by src, stopping if the null character is found, to the end of the null-terminated byte string pointed to by dest. The character src[0] replaces the null terminator at the end of dest. The terminating null character is always appended in the end (so the maximum number of bytes the function may write is count+1)
 * @author: Groot
 * @param {char} *dst
 * @param {char} *src
 * @return {char *} dst
 * @use:
 */
char *strcat(char *dst, const char *src)
{
    int i = 0;
    int dst_len = strlen(dst);
    while (src[i] != '\0')
    {
        dst[dst_len] = src[i];
        dst_len++;
        i++;
    }
    dst[dst_len] = '\0';
    return dst;
    // panic("Not implemented");
}

/**
 * @description: Compares two null-terminated byte strings lexicographically.
                 The sign of the result is the sign of the difference between the values of the first pair of characters (both interpreted as unsigned char) that differ in the strings being compared.
                 The behavior is undefined if lhs or rhs are not pointers to null-terminated byte strings.
 * @author: Groot
 * @param {char *} s1
 * @param {char *} s2
 * @return {int} Negative value if lhs appears before rhs in lexicographical order.
                 Zero if lhs and rhs compare equal.
                 Positive value if lhs appears after rhs in lexicographical order.
 * @use:
 */
int strcmp(const char *s1, const char *s2)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0')
        i++;

    if (s1[i] == s2[i])
        return 0;

    else if (s1[i] < s2[i])
        return -1;

    else
        return 1;

    // panic("Not implemented");
}

/**
 * @description: Compares at most count characters of two possibly null-terminated arrays. The comparison is done lexicographically. Characters following the null character are not compared.
                 The sign of the result is the sign of the difference between the values of the first pair of characters (both interpreted as unsigned char) that differ in the arrays being compared.
                 The behavior is undefined when access occurs past the end of either array lhs or rhs. The behavior is undefined when either lhs or rhs is the null pointer.
 * @author: Groot
 * @param {char* } s1
 * @param {char* } s2
 * @param {int} n
 * @return {int}  Compares at most count characters of two possibly null-terminated arrays. The comparison is done lexicographically. Characters following the null character are not compared.
                  The sign of the result is the sign of the difference between the values of the first pair of characters (both interpreted as unsigned char) that differ in the arrays being compared.
                  The behavior is undefined when access occurs past the end of either array lhs or rhs. The behavior is undefined when either lhs or rhs is the null pointer.
 * @use:
 */
int strncmp(const char *s1, const char *s2, size_t n)
{
    int i = 0;
    while (s1[i] == s2[i] && i < n)
        i++;

    if (s1[i] == s2[i])
        return 0;

    else if (s1[i] < s2[i])
        return -1;

    else
        return 1;

    // panic("Not implemented");
}

/**
 * @description:  Copies the value (unsigned char)ch into each of the first count characters of the object pointed to by dest.
                  The behavior is undefined if access occurs beyond the end of the dest array. The behavior is undefined if dest is a null pointer.
 * @author: Groot
 * @param {void *} dst
 * @param {void *} src
 * @param {int} n
 * @return {char *}A copy of dest
 * @use:
 */
void *memset(void *s, int c, size_t n)
{
    char *src = (char *)s;
    int i = 0;
    while (i < n)
    {
        src[i] = (char)c;
        i++;
    }
    return src;
    // panic("Not implemented");
}

/**
 * @description: 分为三种情况：
 *                  情况一：未出现重叠区域
 *                  情况二：出现重叠，src在dst后
 *                  情况三：出现重叠，dst在src后
 *               情况一和情况二当作strcpy考虑
 *               情况三从后向前copy
 * @author: Groot
 * @param {void} *dst
 * @param {void} *src
 * @param {int} n
 * @return {*}
 * @use:
 */
void *memmove(void *dst, const void *src, size_t n)
{
    const char *ssrc = (const char *)src;
    char *ddst = (char *)dst;
    if (ddst <= ssrc || ssrc + n <= ddst)
    {
        int i = 0;
        while (i < n)
        {
            ddst[i] = ssrc[i];
            i++;
        }
    }
    else
    {
        int i = n - 1;
        while (i > 0)
        {
            ddst[i] = ssrc[i];
            i--;
        }
    }
    return ddst;
    // panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n)
{
    char *oout = (char *)out;
    char *iin = (char *)in;
    int i = 0;
    while (i < n)
    {
        oout[i] = iin[i];
        i++;
    }
    return oout;
    // panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n)
{
    char *src1 = (char *)s1;
    char *src2 = (char *)s2;
    int i = 0;

    while (src1[i] == src2[i] && src1[i] != '\0' && i < n)
    {
        i++;
    }
    if (i == n)
        return 0;

    else if (src1[i] < src2[i])
        return -1;

    else
        return 1;
    // panic("Not implemented");
}
#endif
