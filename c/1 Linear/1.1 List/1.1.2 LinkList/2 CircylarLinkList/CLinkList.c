/*
 * @Author: D_bxg
 * @Date: 2021-09-16 12:31:00
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-16 12:33:48
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\1 Linear\1.1 List\1.1.2 LinkList\b\CLinkList.c
 */
#define CLINKLIST_C
#include "CLinkList.h"

pCLinkList initCLinkList(){
    int temp,val;
    pCLinkList pHead,pNew,pTail;
    pHead = (pCLinkList)malloc(sizeof(CLinkList));
    pTail = pHead;
    printf("������");
    scanf("%d",&temp);
    if(temp<=0){
        printf("initLinkList()�����Ϸ�����");
        exit(-1);
    }
    for(int i = 0; i<temp; i++){
        pNew = (pCLinkList)malloc(sizeof(CLinkList));
        printf("ʲôֵ");
        scanf("%d",&val);
        pNew->data = val;
        pTail->pNext = pNew;
        pTail = pNew;
        pTail->pNext = pHead;
    }
    return pTail;
}