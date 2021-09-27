/*
 * @Author: D_bxg
 * @Date: 2021-09-27 09:04:08
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-27 09:23:24
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\1 Linear\1.3 Queue\1.3.2 LinkQueue\LinkQueue.h
 */
#define LINKQUEUE_H
#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;

typedef struct QNode{
    ElemType data;
    struct LQueue * pNext;
} QNode, *pQNode;

typedef struct LQueue{
    pQNode front;
    pQNode rear;
} LQueue;

bool initLQueue(LQueue* pLQueue);