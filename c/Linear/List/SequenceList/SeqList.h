/*
 * @Author: D_bxg
 * @Date: 2021-09-05 10:57:17
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-08 09:45:23
 * @Description: ˳���
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\Linear\List\SequenceList\SeqList.h
 */
#define SEQLIST_H

#include <stdio.h>
#include <stdlib.h> // �ṩmalloc��realloc��free��exitԭ��

typedef struct SeqList
{
    int* elem; // ˳���洢�ռ�Ļ�ַ��ָ��˳�����ռ�ڴ����ʼλ�ã�
    int length;     // ��ǰ˳����ȣ���������Ԫ�أ�
    int listSize;   // ��ǰ����Ĵ洢���������Դ洢����Ԫ�أ�
} SeqList;

// �����
void initSeqList(SeqList* pSeqList);
void destorySeqList(SeqList* pSeqList);
bool isEmpty(SeqList* pSeqList);
bool isFull(SeqList* pSeqList);
int length(SeqList* pSeqList);
int showSeqList(SeqList* pSeqList);

// ���ݲ���
bool appendElem(SeqList* pSeqList,int elem);
bool insertElem(SeqList* pSeqList,int pos,int elem);// pos��0��ʼ
bool deleteElem(SeqList* pSeqList,int pos,int* pVal);
void inversionElem(SeqList* pSeqList);
void sortElem(SeqList* pSeqList);
bool findElem(SeqList* pSeqList,int* pPos,int val);
bool findMinElem(SeqList* pSeqList,int pPos[],int* pVal);
bool deleteOneofElem(SeqList* pSeqList,int val);
bool changeElem(SeqList* pSeqList,int pos,int val);

// ������Ŀ
bool deleteMinElem(SeqList* pSeqList,int pos,int* pVal);
bool deleteBetElem(SeqList* pSeqList,int s,int t);
bool deleteSameElem(SeqList* pSeqList);
bool mergeSeqList(SeqList* pSeqList1,SeqList* pSeqList2,SeqList* pSeqList3);
bool reverseTwoSeqList(SeqList* pSeqList1,SeqList* pSeqList2,SeqList* pSeqList3);