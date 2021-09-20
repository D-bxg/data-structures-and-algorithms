/*
 * @Author: D_bxg
 * @Date: 2021-09-17 09:18:47
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-17 09:25:06
 * @Description: 双向链表
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\1 Linear\1.1 List\1.1.2 LinkList\3 DoubleLinkeList\DLinkList.h
 */
#define DLINKLIST_H

#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;

typedef struct DLinkList{
    ElemType data;
    struct DLinkList* pNext;
    struct DLinkList* pPrior;
} DLinkList, *pDLinkList;

pDLinkList initDLinkList();