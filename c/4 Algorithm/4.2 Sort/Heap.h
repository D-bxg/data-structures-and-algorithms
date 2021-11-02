/*
 * @Author: D_bxg
 * @Date: 2021-11-01 20:37:27
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-11-01 21:51:19
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\4 Algorithm\4.2 Sort\Heap.h
 */
#define HEAP_H
#include "SeqList.c"

void BuildMaxHeap(SeqList seqList);
void HeadAdjust(SeqList seqList, int key,int n);