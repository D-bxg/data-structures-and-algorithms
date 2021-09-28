/*
 * @Author: D_bxg
 * @Date: 2021-09-28 09:41:52
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-28 09:46:47
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\1 Linear\1.5 Array\1.5.1 SequenceArray\SeqArray.h
 */
#define SEQARRAY_H
#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;

typedef struct SeqArray{
    ElemType* elem;
    int length;
    int ArraySize;
} SeqArray;