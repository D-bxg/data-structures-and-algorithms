/*
 * @Author: D_bxg
 * @Date: 2021-09-23 09:33:34
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-23 10:54:01
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\1 Linear\1.3 Queue\1.3.1 SequenceQueue\SeqQueue.h
 */
#define SEQQUEUE_H

#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;

typedef struct SeqQueue{
    ElemType * elem;
    int front;  // 头元素下标
    int rear;   // 尾元素下标
} SeqQueue;

void initSeqQueue(SeqQueue* pSeqQueue);