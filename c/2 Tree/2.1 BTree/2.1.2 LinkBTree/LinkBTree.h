/*
 * @Author: D_bxg
 * @Date: 2021-09-28 09:41:52
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-10-02 10:55:10
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\2 Tree\2.1 BTree\2.1.2 LinkBTree\LinkBTree.h
 */
#define LINKBTREE_C
#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;
// typedef struct ElemType{
//     int elem;
// };

typedef struct Node{
    ElemType data;
    // ElemType data.elem;
    struct Node* pLChile;
    struct Node* pRChile;
    // struct Node* pParent; //如果用到父则加该条，变成三叉链表
} Node, *pNode;

pNode initBTree();