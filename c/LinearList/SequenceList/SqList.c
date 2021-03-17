/*
 * @Author: D_bxg
 * @Date: 2021-03-15 21:30:15
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-03-17 20:49:29
 * @Description: 用顺序结构实现的线性表
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\线性表\顺序结构\SqList.c
 */
#include <stdio.h>
#include <stdlib.h>
#include "Status.h"


#define INIT_SIZE 10 // 初始大小


typedef struct {
    int *data; // 这里的int应该是elemtype
    int maxSize;
    int length;
} SqList;

/**
 * @description: 初始化一个顺序表，作用是以传入的参数的地址为起始，动态分配了一些内存。
 * 传入的是一个顺序表结构体的变量地址
 * @param {SqList} *pL
 * @return {*}
 */
void initList(SqList *pL){
    /**
     * @description: malloc函数的功能是动态分配一片内存，前面的（int *）是（elemtype *）
     * @param {*} // 传入参数是内存大小
     * @return {*} // 返回参数是内存空间的起始地址
     */
    pL->data = (int *)malloc(sizeof(int) * INIT_SIZE);
    pL->length = 0;
    pL->maxSize = INIT_SIZE;
    printf("成功初始化");
}