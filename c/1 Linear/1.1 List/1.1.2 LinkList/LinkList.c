/*
 * @Author: D_bxg
 * @Date: 2021-09-11 09:03:27
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-13 12:43:08
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
        if(pNew == NULL){
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
    if(pos < 0){
        printf("insertNode()：插入位置不合法\n");
        return false;
    }
    pLinkList pTemp = pHead,pNew;
    for(int i = 0; i<pos; i++){
        if(i<pos && pTemp->pNext == NULL){
            printf("insertNode()：插入位置不合法\n");
            return false;
        }else{
            pTemp = pTemp->pNext;
        }
    }
    pNew = (pLinkList)malloc(sizeof(LinkList));
    if(pNew == NULL){
        exit(-1);
    }
    pNew->data = val;
    pNew->pNext = pTemp->pNext;
    pTemp->pNext = pNew;
    return true;
}
bool isEmpty(pLinkList pHead){
    if(pHead->pNext == NULL){
        return true;
    }else{
        return false;
    }
}
int length(pLinkList pHead){
    int i = 0;
    for(pLinkList pTemp = pHead; pTemp->pNext!=NULL; pTemp = pTemp->pNext){
        i++;
    }
    return i;
}
bool deleteNode(pLinkList pHead,int pos,ElemType* pVal){
    if(pos<0 || pHead->pNext == NULL){
        printf("deleteNode()：删除位置不合法\n");
        return false;
    }
    pLinkList pTemp = pHead,p;
    for(int i = 0; i<pos; i++){
        if(pTemp->pNext->pNext == NULL){
            printf("deleteNode()：删除位置不合法\n");
            *pVal = NULL;
            return false;
        }else{
            pTemp = pTemp->pNext;
        }
    }
    *pVal = pTemp->pNext->data;
    p = pTemp->pNext->pNext;
    free(pTemp->pNext);
    pTemp->pNext = p;
    return true;    
}