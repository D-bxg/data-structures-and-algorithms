/*
 * @Author: D_bxg
 * @Date: 2021-10-29 15:32:45
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-10-29 17:16:27
 * @Description: 
 *      时间复杂度：O((n+1)/2)
 *      空间复杂度：O(1) // 一个哨兵
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\4 Algorithm\4.1 Search\4.1.1 Linear\1 SequentialSearch\Main.c
 */
#include <stdio.h>
#include <stdlib.h>

typedef int KeyType;
typedef struct ElemType
{
    KeyType key;
    int data;
} ElemType;
typedef struct
{
    ElemType *elem;
    int listSize, length;
} SSTable, *pSSTable; // sequential search table 顺序查找表

int seqSearch(pSSTable pSSTable, KeyType key)
{
    int i = 0;
    for (i; i < pSSTable->length && pSSTable->elem[i].key != key; i++);
    return i == pSSTable->length ? -1 : i;
}

int seqSearch(pSSTable pSSTable, KeyType key)
{
    pSSTable->elem[0].key = key;
    int i = pSSTable->length;
    for (i;  pSSTable->elem[i].key != key; i--);
    return i;
}

/**
 * 带权值可以先排一下序
 */

int main()
{

    return 1;
}