/*
 * @Author: D_bxg
 * @Date: 2021-09-28 09:41:52
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-30 10:37:57
 * @Description: 顺序二叉树，一般只用于满二叉树或者完全二叉树
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\2 Tree\2.1 BTree\2.1.1 SeqBTree\SeqBTree.h
 */
#define SEQBTREE_H
#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;

typedef struct Node{
    ElemType* elem;
    bool isEmpty;
} Node;