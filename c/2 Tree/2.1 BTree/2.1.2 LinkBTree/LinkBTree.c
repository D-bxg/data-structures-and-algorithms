/*
 * @Author: D_bxg
 * @Date: 2021-09-28 09:43:46
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-10-02 10:52:33
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\2 Tree\2.1 BTree\2.1.2 LinkBTree\LinkBTree.c
 */
#define LINKBTREE_C
#include "LinkBTree.h"

pNode initBTree(){
    pNode pHead;
    pHead = (pNode)malloc(sizeof(Node));
    if(pHead == NULL){
        exit(-1);
    }
    pHead->data = 0;
    pHead->pLChile = NULL;
    pHead->pRChile = NULL;
    return pHead;
}