/*
 * @Author: D_bxg
 * @Date: 2021-09-28 09:41:52
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-10-20 08:00:38
 * @Description: 邻接矩阵表示法（数组）
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\3 Graph\AdjacencyList\AdjList.h
 */
#define ADJLIST_H
#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;

typedef struct AdjList{
    ElemType *data; //data[][]，有几个顶点，就为几乘几的矩阵（矩阵是对称的，对角线为0）
} AdjList;

// typedef struct ElemType{
//     // int elem;
//     pNode pTemp;
// } ElemType, *pElemType;

// int main(){
//     Temp temp;
//     temp.data.pTemp = pTemp;
//     printf("%d",temp.data.elem);
//     return 1;
// }