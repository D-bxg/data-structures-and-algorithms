/*
 * @Author: D_bxg
 * @Date: 2021-09-28 09:43:46
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-10-03 11:17:37
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
void preOrderTraverse(pNode pHead){
    if(pHead != NULL){
        printf("%d",pHead->data);
        preOrderTraverse(pHead->pLChile);
        preOrderTraverse(pHead->pRChile);
    }else{
        return;
    }
}
void inOrderTraverse(pNode pHead)
{
    if (pHead != NULL)
    {
        preOrderTraverse(pHead->pLChile);
        printf("%d", pHead->data);
        preOrderTraverse(pHead->pRChile);
    }
    else
    {
        return;
    }
}
void postOrderTraverse(pNode pHead){
    if (pHead != NULL)
    {
        preOrderTraverse(pHead->pLChile);
        preOrderTraverse(pHead->pRChile);
        printf("%d", pHead->data);
    }
    else
    {
        return;
    }
}
// 借助栈
void inOrderTraverse(pNode pHead){
    pNode pTemp,pVal;
    pLStack pS;
    pS = initLStack();
    pTemp = pHead;
    while(pTemp || !isEmpty(pS)){
        if(pTemp){
            pushElem(pS, pTemp);
            pTemp = pTemp->pLChile;
        }else{
            popElem(pS, pVal);
            printf("%d",pVal->data);
            p = pVal->pRChile;
        }
    }
    return;
}