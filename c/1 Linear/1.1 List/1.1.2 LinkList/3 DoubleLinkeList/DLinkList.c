/*
 * @Author: D_bxg
 * @Date: 2021-09-17 09:20:45
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-17 09:31:31
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\1 Linear\1.1 List\1.1.2 LinkList\3 DoubleLinkeList\DLinkList.c
 */
#define DLINKLIST_C
#include "DLinkList.h"

pDLinkList initDLinkList(){
    int temp,val;
    pDLinkList pHead,pTail,pNew;
    pHead = (pDLinkList)malloc(sizeof(DLinkList));
    pTail = pHead;
    printf("几个：");
    scanf("%d",&temp);
    if(temp<=0){
        printf("不合法");
        exit(-1);
    }
    for(int i = 0; i<temp; i++){
        pNew = (pDLinkList)malloc(sizeof(DLinkList));
        printf("值：");
        scanf("%d",&val);
        pNew->data = val;
        pNew->pPrior = pTail;
        pTail->pNext = pNew;
        pNew->pNext = NULL;
        pTail = pNew;
    }
    return pHead;
}