/*
 * @Author: D_bxg
 * @Date: 2021-09-20 10:38:29
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-20 10:40:55
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\1 Linear\1.2 Stack\1.2.1 LinkStack\LinkStack.h
 */
#define LINKSTACK_H

#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;

typedef struct LStack{
    ElemType data;
    struct LStack* pNext;
} LStack, *pLStack;

pLStack initLStack(pLStack pLStack);