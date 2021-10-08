/*
 * @Author: D_bxg
 * @Date: 2021-09-28 09:41:52
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-10-07 10:04:39
 * @Description: 线索二叉树
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\2 Tree\2.2 ThreadBinaryTree\LinkTBTree\TBTree.h
 */
#define TBTREE_H
#include<stdio.h>
#include<stdlib.h>

typedef struct ElemType{
    char data;
} ElemType, *pElemType;

typedef struct Node{
    ElemType data;
    int lTag,rTag;
    struct Node *lChild;
    struct Node *rChild;
} Node, *pNode;