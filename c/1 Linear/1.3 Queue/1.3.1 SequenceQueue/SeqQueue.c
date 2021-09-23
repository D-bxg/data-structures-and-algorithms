/*
 * @Author: D_bxg
 * @Date: 2021-09-23 09:43:57
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-23 10:51:56
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\1 Linear\1.3 Queue\1.3.1 SequenceQueue\SeqQueue.c
 */
#define SEQQUEUE_C
#include "SeqQueue.h"

void initSeqQueue(SeqQueue* pSeqQueue,int length){
    pSeqQueue->elem = (ElemType*)malloc(sizeof(pSeqQueue->elem)*length);
    if(pSeqQueue->elem == NULL){
        exit(-1);
    }else{
        pSeqQueue->front = 0;
        pSeqQueue->rear = 0;
    }
    return;
}