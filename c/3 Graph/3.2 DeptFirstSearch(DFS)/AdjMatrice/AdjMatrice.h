/*
 * @Author: D_bxg
 * @Date: 2021-09-28 09:41:52
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-10-28 16:41:11
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\3 Graph\DeptFirstSearch(DFS)\AdjMatrice\AdjMatrice.h
 */
#define ADJMATRICE_H
#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;

typedef struct AdjList{
    int vertex[100];
    int edge[100][100];
    int verNum, edgeNum;
} AdjList;
