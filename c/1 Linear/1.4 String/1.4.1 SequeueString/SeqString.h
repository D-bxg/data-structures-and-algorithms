/*
 * @Author: D_bxg
 * @Date: 2021-09-27 09:50:04
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-27 13:46:52
 * @Description: 串，重点为BF算法和KMP算法，求next数组
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\1 Linear\1.4 String\1.4.1 SequeueString\SeqString.h
 */
#define SEQSTRING_H

#include<stdio.h>
#include<stdlib.h>

typedef char ElemType;
typedef MAXLENGTH 255;
typedef struct SeqString{
    ElemType data[MAXLENGTH + 1];
    int stringSize;
}SeqString;

void indexBF();
void indexKMP();