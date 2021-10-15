/*
 * @Author: D_bxg
 * @Date: 2021-09-28 09:43:46
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-10-15 09:27:14
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\2 Tree\2.3 HuffmanTree\SequenceHuffmanTree\SeqHTree.c
 */
#define SEQHTREE_C
#include "SeqHTree.h"

void initSeqHuffmanTree(pSeqHTree pHead, int n){
    if(n <= 1)
        return;
    int m = 2 * n - 1;
    SeqHTree pNew[m + 1];
    pHead = pNew;
    for (int i = 1; i <= m; i++){
        pHead[i].parent = 0;
        pHead[i].rch = 0;
        pHead[i].lch = 0;
    }
    for (i = 1; i <= m; i++){
        scanf("%d", pHead[i].weight);
    }
    pSeqHTree pTemp = &pHead[1];
    int n = 1;
    for (i = n + 1; i <= m;i++){
        // while(n>i+1){
        //     if(pTemp->weight > pNew[n].weight && pNew[n].parent == 0){
        //         pTemp->weight = pNew[n].weight;
        //     }
        //     n++;
        // }
        
    }
    return;
}
