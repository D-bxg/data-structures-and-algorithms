/*
 * @Author: D_bxg
 * @Date: 2021-09-17 09:41:01
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-20 09:52:24
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\1 Linear\1.2 Stack\1.2.1 SequenceStack\SeqStack.h
 */
#define SEQSTACK_H

#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;

typedef struct SeqStack{
    ElemType* pBase;
    ElemType* pTop;
    int length;
} SeqStack, *pSeqStack;

void initSeqStack(pSeqStack pSeqStack,int length);
bool isEmpty(pSeqStack pSeqStack);
bool isFull(pSeqStack pSeqStack);
int length(pSeqStack pSeqStack);

bool pushElem(pSeqStack pSeqStack,ElemType val);
bool popElem(pSeqStack pSeqStack,ElemType* pVal);