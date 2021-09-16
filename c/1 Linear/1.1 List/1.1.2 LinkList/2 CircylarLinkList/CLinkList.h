/*
 * @Author: D_bxg
 * @Date: 2021-09-16 12:29:00
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-16 12:33:37
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\1 Linear\1.1 List\1.1.2 LinkList\b\CLinkList.h
 */
#define CLINKLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct CLinkList{
    ElemType data;
    struct CLinkList* pNext;
} CLinkList, *pCLinkList;

pCLinkList initCLinkList(); // 尾插法