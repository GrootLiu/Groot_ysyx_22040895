/*
 * @Author: Groot
 * @Date: 2022-07-03 12:27:32
 * @LastEditTime: 2022-07-03 14:11:50
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /ysyx-workbench/nemu/src/monitor/sdb/stack.c
 * 版权声明
 */
// /*
//  * @Author: Groot
//  * @Date: 2022-07-03 12:27:32
//  * @LastEditTime: 2022-07-03 14:00:26
//  * @LastEditors: Groot
//  * @Description: 
//  * @FilePath: /ysyx-workbench/nemu/src/monitor/sdb/stack.c
//  * 版权声明
//  */
// /* the following codes are writen for implament the stack to complete the function: check-parentheses() */

// #include <stdio.h>
// #include <malloc.h>

// #define STACK_INT_SIZE 100
// #define STACKINCREMENT 10
// #define SElemType char

// bool InitStack(SqStack *S);
// bool GetTop(SqStack S);
// bool Push(SqStack *S, SElemType e);
// bool Pop(SqStack *S);
// bool IsEmpty(SqStack S);

// typedef struct
// {
//   /* stack base address */
//   SElemType *base; 
//   /* stack top address */
//   SElemType *top;  
//   int stacksize;
// } SqStack;

// /* Algorithmic description of basic operations */
// /* init a stack */
// bool InitStack(SqStack *S)
// {
//   S->base = (SElemType *)malloc(STACK_INT_SIZE * sizeof(SElemType)); //开辟新的空间
//   if (!S->base)
//   /* if stack creation failed, return 0*/
//     return 0; 
//   S->top = S->base;
//   S->stacksize = STACK_INT_SIZE;
//   return 1;
// }

// /* If the stack is not empty, return the top element of the stack and return true 
//  * otherwise return false 
// */
// bool GetTop(SqStack S)
// {
//   if (IsEmpty(S))
//     return 0;
//   return *(S.top - 1);
// }

// /* Insert the element as the new top element of the stack */
// bool Push(SqStack *S, SElemType e)
// {
//   if (S->top - S->base >= S->stacksize)
//   /* If the stack is full, need to add space */
//   {
//     S->base = (SElemType *)realloc(S->base, (S->stacksize + STACKINCREMENT) * sizeof(SElemType));
//     if (!S->base)
//       return 0;
//     S->top = S->base + S->stacksize;
//     S->stacksize += STACKINCREMENT;
//   }
//   *(S->top++) = e;
//   return 1;
// }

// /* If the stack is not empty, delete the top element of the stack, return its value with e and return true, 
//  * otherwise return false 
// */
// bool Pop(SqStack *S)
// {
//   if (IsEmpty(S))
//     return 0;
//   --S->top;
//   return 1;
// }

// bool IsEmpty(SqStack S)
// {
//     if (S.top == S.base)
//     {
//         return 1;
//     }
//     return 0;
// }