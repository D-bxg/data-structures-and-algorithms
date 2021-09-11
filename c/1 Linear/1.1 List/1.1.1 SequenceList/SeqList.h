/*
 * @Author: D_bxg
 * @Date: 2021-09-05 10:57:17
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-11 10:57:35
 * @Description: 顺序表
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\1 Linear\1.1 List\1.1.1 SequenceList\SeqList.h
 */
#define SEQLIST_H

#include <stdio.h>
#include <stdlib.h> // 提供malloc、realloc、free、exit原型

typedef int ElemType;

typedef struct SeqList
{
    ElemType* elem; // 顺序表存储空间的基址（指向顺序表所占内存的起始位置）
    int length;     // 当前顺序表长度（包含多少元素）
    int listSize;   // 当前分配的存储容量（可以存储多少元素）
} SeqList;

// 表操作
void initSeqList(SeqList* pSeqList);
void destorySeqList(SeqList* pSeqList);
bool isEmpty(SeqList* pSeqList);
bool isFull(SeqList* pSeqList);
int length(SeqList* pSeqList);
int showSeqList(SeqList* pSeqList);

// 数据操作
bool appendElem(SeqList* pSeqList,ElemType elem);
bool insertElem(SeqList* pSeqList,int pos,ElemType elem);// pos从0开始
bool deleteElem(SeqList* pSeqList,int pos,ElemType* pVal);
void inversionElem(SeqList* pSeqList);
void sortElem(SeqList* pSeqList);
bool findElem(SeqList* pSeqList,int* pPos,ElemType val);
bool findMinElem(SeqList* pSeqList,int pPos[],ElemType* pVal);
bool deleteOneofElem(SeqList* pSeqList,ElemType val);
bool changeElem(SeqList* pSeqList,int pos,ElemType val);

// 王道题目
bool deleteMinElem(SeqList* pSeqList,int pos,ElemType* pVal);
bool deleteBetElem(SeqList* pSeqList,int s,int t);
bool deleteSameElem(SeqList* pSeqList);
bool mergeSeqList(SeqList* pSeqList1,SeqList* pSeqList2,SeqList* pSeqList3);
bool reverseTwoSeqList(SeqList* pSeqList1,SeqList* pSeqList2,SeqList* pSeqList3);