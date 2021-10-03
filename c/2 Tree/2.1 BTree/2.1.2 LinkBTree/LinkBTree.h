/*
 * @Author: D_bxg
 * @Date: 2021-09-28 09:41:52
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-10-03 11:21:15
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
// 递归方式
void preOrderTraverse(pNode pHead);
void inOrderTraverse(pNode pHead);
void postOrderTraverse(pNode pHead);
// 非递归，借助栈实现
void inOrderTraverse(pNode pHead);
// 层次遍历，逐层遍历，借助队列Queue
void levelOrder();