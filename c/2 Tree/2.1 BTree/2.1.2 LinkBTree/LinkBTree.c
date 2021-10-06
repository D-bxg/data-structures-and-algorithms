/*
 * @Author: D_bxg
 * @Date: 2021-09-28 09:43:46
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-10-06 11:09:08
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
void levelOrder(pNode pHead){
    pNode pTemp;
    pLQueue pQ;
    pQ = initLQueue();
    enLQueue(pQ,pHead); // 把二叉树根结点入队
    while(!isEmpty(pQ)){
        deLQueue(pQ, pTemp); // 出队
        printf("%d", pTemp->data);
        if(pTemp->pLChile != NULL){
            enLQueue(pQ, pTemp->pLChile);
        }
        if (pTemp->pRChile != NULL){
            enLQueue(pQ, pTemp->pRChile);
        }
    }
    return;
}
/**
 * @description: 按照用户输入的字符串先序生成一颗树,ABC##DE#G##F##
 * @param {pNode} pHead
 * @return {*}
 */
void preCreateBTree(pNode pHead){
    char temp;
    scanf("%c", &temp);
    if(temp == '#'){
        pHead = NULL;
    }else{
        if(!(pHead = (pNode)malloc(sizeof(Node)))){
            exit(-1);
        }else{
            pHead->data = temp; // 此处由于我定义的Node的data是int类型，并不能正常运行，把data改成char就好了。
            preCreateBTree(pHead->pLChile);
            preCreateBTree(pHead->pRChile);
        }
    }
    return;
}
void preCopyBTree(pNode pHead, pNode pNew){
    if(pHead == NULL){
        pNew == NULL;
        return;
    }else{
        pNew = (pNode)malloc(sizeof(Node));
        if(pNew == NULL){
            exit(-1)
        }else{
            pNew->data = pHead->data;
            preCopyBTree(pHead->pLChile, pNew->pLChile);
            preCopyBTree(pHead->pRChile, pNew->pRChile);
        }
    }
    return;
}
int depth(pNode pHead){
    if(pHead == NULL){
        retrun 0;
    }else{
        int m , n;
        m = depth(pHead->pLChile);
        n = depth(pHead->pRChile);
        if(m > n){
            return m + 1;
        }else{
            return n + 1;
        }
    }
}
int nodeCount(pNode pHead){
    if(pHead == NULL){
        return 0;
    }else{
        return nodeCount(pHead->pLChile) + nodeCount(pHead->pRChile) + 1;
    }
}
int leafCount(pNode pHead){
    if(pHead == NULL){
        return 0;
    }else{
        if(pHead->pLChile == NULL && pHead->pRChile == NULL){
            return 1;
        }else{
            return leafCount(pHead->pLChile) + leafCount(pHead->pRChile);
        }
    }
}