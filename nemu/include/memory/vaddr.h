/*** 
 * @Author: Groot
 * @Date: 2022-04-06 19:26:19
 * @LastEditTime: 2022-07-02 17:31:28
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /ysyx-workbench/nemu/include/memory/vaddr.h
 * @版权声明
 */
#ifndef __MEMORY_VADDR_H__
#define __MEMORY_VADDR_H__

#include <common.h>

word_t vaddr_ifetch(vaddr_t addr, int len);
word_t vaddr_read(vaddr_t addr, int len);
void vaddr_write(vaddr_t addr, int len, word_t data);

#define PAGE_SHIFT        12
#define PAGE_SIZE         (1ul << PAGE_SHIFT)
#define PAGE_MASK         (PAGE_SIZE - 1)

#endif
