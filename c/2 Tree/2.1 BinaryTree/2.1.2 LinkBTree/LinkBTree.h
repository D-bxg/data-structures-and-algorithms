/*
 * @Author: D_bxg
 * @Date: 2021-09-28 09:41:52
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-10-06 11:07:10
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\2 Tree\2.1 BTree\2.1.2 LinkBTree\LinkBTree.h
 */
#define LINKBTREE_C
#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;
// typedef struct ElemType{
//     Node data;
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
/**
 * typedef struct StackNode{
 *      ElemType data; // 这里的ElemType就是此处的Node结构体。也就是说我们可以使用StackNode.data.data来调用到二叉树的结点值。
 *      struct StackNode * pNext;
 * } StackNode, *pStackNode;
*/
void inOrderTraverse(pNode pHead);
// 层次遍历，逐层遍历，借助队列Queue
/**
 * typedef struct QueueNode{
 *      ElemType data; // QueueNode.data.data.data。每层结构体分别为：QueueNode，ElemType，Node
 *      struct QueueNode * front,rear;
 * } QueueNode, *pQueueNode
*/
void levelOrder(pNode pHead);
void preCreateBTree(pNode pHead);
void preCopyBTree(pNode pHead, pNode pNew);
int depth(pNode pHead);
int nodeCount(pNode pHead);
int leafCount(pNode pHead);