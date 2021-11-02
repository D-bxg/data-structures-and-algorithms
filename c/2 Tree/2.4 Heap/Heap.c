/*
 * @Author: D_bxg
 * @Date: 2021-11-01 20:37:33
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-11-01 21:51:17
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\2 Tree\2.4 Heap\Heap.c
 */
#define HEAP_C
#include "Heap.h"

void BuildMaxHeap(SeqList seqList){
    for (int i = seqList.listSize / 2; i > 0;i--){
        HeadAdjust(seqList,i,seqList.listSize);
    }
}
void HeadAdjust(SeqList seqList, int key,int n){
    seqList.elem[0] = seqList.elem[key];
    for (int i = 2 * key; i <= n;i = i*2){
        if(i< n && seqList.elem[i]<seqList.elem[i+1]){
            i++;
        }
        if(seqList.elem[0]>seqList.elem[i]){
            break;
        }else{
            seqList.elem[key] = seqList.elem[i];
            key = i;
        }
    }
    seqList.elem[key] = seqList.elem[0];
}