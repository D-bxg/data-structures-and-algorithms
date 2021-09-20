/*
 * @Author: D_bxg
 * @Date: 2021-09-17 09:49:10
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-20 10:37:43
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\1 Linear\1.2 Stack\1.2.1 SequenceStack\SeqStack.c
 */
#define SEQSTACK_C

#include "SeqStack.h"

void initSeqStack(pSeqStack pSeqStack,int length){
    pSeqStack->pBase = (ElemType *)malloc(sizeof(pSeqStack->pBase)*length);
    if(pSeqStack->pBase == NULL){
        printf("分配失败");
        exit(-1);
    }else{
        pSeqStack->length = length;
        pSeqStack->pTop = pSeqStack->pBase;
    }
}
bool isEmpty(pSeqStack pSeqStack){
    if(pSeqStack->pBase == pSeqStack->pTop){
        return true;
    }else{
        return false;
    }
}
int length(pSeqStack pSeqStack){
    return pSeqStack->pTop-pSeqStack->pBase;
}
bool isFull(pSeqStack pSeqStack){
    if(pSeqStack->pTop-pSeqStack->pBase == pSeqStack->length){
        return true;
    }else{
        return false;
    }
}
bool pushElem(pSeqStack pSeqStack,ElemType val){
    if(isFull(pSeqStack)){
        printf("满了");
        return false;
    }
    pSeqStack->pTop[0] = val;
    pSeqStack->pTop++;
    return true;
}

bool popElem(pSeqStack pSeqStack,ElemType* pVal){
    if(isEmpty(pSeqStack)){
        printf("空的\n");
        return false;
    }else{
        *pVal = pSeqStack->pTop[0];
        pSeqStack->pTop--;
        return true;
    }
}
