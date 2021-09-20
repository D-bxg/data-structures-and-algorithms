/*
 * @Author: D_bxg
 * @Date: 2021-09-20 10:41:20
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-20 10:54:18
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\1 Linear\1.2 Stack\1.2.2 LinkStack\LinkStack.c
 */
#define LINKSTACK_C
#include "LinkStack.h"

pLStack initLStack(){
    pLStack pHead,pNew;
    pHead = (pLStack)malloc(sizeof(LStack));
    pHead->pNext = NULL;
    int length,val;
    printf("要入几个栈");
    scanf("%d",&length);
    for(int i = 0;i<length;i++){
        pNew = (pLStack)malloc(sizeof(LStack));
        printf("要放入的元素值为:");
        scanf("%d",&val);
        pNew->data = val;
        pNew->pNext = pHead;
        pHead = pNew;
    }
    return pHead;
}