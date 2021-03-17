/*
 * @Author: D_bxg
 * @Date: 2021-03-15 21:30:15
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-03-17 21:57:04
 * @Description: 用顺序结构实现的线性表
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\LinearList\SequenceList\SqList.c
 */
#include "SqList.h"

Status initList(SqList *pL){
    /**
     * @description: malloc函数的功能是动态分配一片内存，前面的（int *）是（elemtype *）
     * @param {*} // 传入参数是内存大小
     * @return {*} // 返回参数是内存空间的起始地址
     */
    pL->elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if ((*pL).elem == NULL)
    {
        exit(OVERFLOW); // 存储内存失败
    }

    pL->length = 0; // 初始化顺序表长度为0
    pL->listSize = LIST_INIT_SIZE; // 顺序表初始内存分配量
    return OK; // 初始化成功
}

/**
 * @description: 销毁一个顺序表，释放所占内存
 * @param {SqList} *L
 * @return {int} OK 返回1，表达通过
 * @return {int} ERROR 返回0，表达错误
 */
Status destroyList(SqList *L){
    if (L == NULL || (*L).elem == NULL) // 确保顺序表结构存在
    {
        return ERROR;
    }

    free((*L).elem); // 释放顺序表内存

    (*L).elem = NULL; // 释放内存后置空指针

    (*L).length = 0; // 顺序表长度跟容量都归零
    (*L).listSize = 0;

    return OK;
};


Status clearList(SqList *L);


Status listEmpty(SqList L);


int listLength(SqList L);


Status getElem(SqList L, int i, ElemType *e);


int locateElem(SqList L, ElemType e, Status(Compare)(ElemType, ElemType));


Status priorElem(SqList L, ElemType cur_e, ElemType *pre_e);


Status nextElem(SqList L, ElemType cur_e, ElemType *next_e);


Status listInsert(SqList *L, int i, ElemType e);


Status listDelete(SqList *L, int i, ElemType *e);


void listTraverse(SqList L, void(Visit)(ElemType));