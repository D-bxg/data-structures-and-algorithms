/*
 * @Author: D_bxg
 * @Date: 2021-09-27 09:11:39
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-27 09:22:58
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\1 Linear\1.3 Queue\1.3.2 LinkQueue\LinkQueue.c
 */
#define LINKQUEUE_C
#include "LinkQueue.h"

bool initLQueue(LQueue* pLQueue){
    pLQueue->front = (pQNode)malloc(sizeof(QNode));
    pLQueue->rear = (pQNode)malloc(sizeof(QNode));
    if(pLQueue == NULL || pLQueue->rear == NULL){
        exit(-1);
        return false;
    }
    printf("OK\n");
    pLQueue->front->pNext = NULL;
    return true;
}