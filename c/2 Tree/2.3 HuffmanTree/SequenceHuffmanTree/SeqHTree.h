/*
 * @Author: D_bxg
 * @Date: 2021-09-28 09:41:52
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-10-15 09:27:10
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\2 Tree\2.3 HuffmanTree\SequenceHuffmanTree\SeqHTree.h
 */
#define SEQHTREE_H
#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;

typedef struct SeqHTree{
    int weight;
    int parent;
    int lch;
    int rch;
} SeqHTree, *pSeqHTree;

void initSeqHuffmanTree(pSeqHTree pHead, int n);
void createHuffmanCode(pSeqHTree pHead, cahr *pChar, int n);