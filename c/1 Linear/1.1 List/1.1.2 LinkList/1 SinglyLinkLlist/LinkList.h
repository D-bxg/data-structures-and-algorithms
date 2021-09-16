/*
 * @Author: D_bxg
 * @Date: 2021-09-11 08:44:12
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-15 10:52:34
 * @Description: 单链表
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\1 Linear\1.1 List\1.1.2 LinkList\LinkList.h
 */
#define LINKLIST_H

#include <stdio.h>
#include <stdlib.h> // 提供malloc、realloc、free、exit原型

typedef int ElemType;

typedef struct LinkList
{
    ElemType data;
    struct LinkList* pNext;
} LinkList, *pLinkList;

pLinkList initLinkList(); // 尾插法
bool destroyLinkList(pLinkList pHead);
void showLinkList(pLinkList pHead);
bool isEmpty(pLinkList pHead);
int length(pLinkList pHead);

bool insertNode(pLinkList pHead,int pos,ElemType val);
bool deleteNode(pLinkList pHead,int pos,ElemType* pVal);
bool clearNode(pLinkList pHead);
bool getNode(pLinkList pHead,int pos,ElemType* pVal);
bool findNode(pLinkList pHead,int* pPos,ElemType val);