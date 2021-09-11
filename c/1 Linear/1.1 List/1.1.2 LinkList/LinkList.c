/*
 * @Author: D_bxg
 * @Date: 2021-09-11 09:03:27
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-11 13:29:41
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\1 Linear\1.1 List\1.1.2 LinkList\LinkList.c
 */
#define LINKLIST_C
#include "LinkList.h"

pLinkList initLinkList(){
    pLinkList pHead,pNew,pTail;
    int length;
    ElemType val;
    pHead = (pLinkList)malloc(sizeof(LinkList));
    if(pHead == NULL){
        exit(-1);
    }
    pTail = pHead;
    pTail->pNext = NULL;
    printf("要创建几个节点：");
    scanf("%d",&length);
    for(int i = 0; i<length; i++){
        printf("请输入下标为%d的节点值：",i);
        scanf("%d",&val);

        pNew = (pLinkList)malloc(sizeof(LinkList));
        if(pHead == NULL){
        exit(-1);
        }

        pNew->data = val;
        pTail->pNext = pNew;
        pNew->pNext = NULL;
        pTail = pNew;
    }
    return pHead;
}
void showLinkList(pLinkList pHead){
    pLinkList p = pHead->pNext;
    while(p != NULL){
        printf("%d\t",p->data);
        p = p->pNext;
    }
    printf("\n");
    return;
}
bool insertNode(pLinkList pHead,int pos,ElemType val){
    pLinkList pTemp = pHead;
    for(int i = 0; i<pos; )
}