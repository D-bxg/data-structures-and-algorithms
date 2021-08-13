/*
 * @Author: D_bxg
 * @Date: 2021-03-15 21:30:15
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-03-20 21:51:09
 * @Description: 用顺序结构实现的线性表
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\LinearList\SequenceList\SqList.c
 */
#include "SqList.h"
#include "Util.c"

Status initList(SqList *pL)
{
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

    pL->length = 0;                // 初始化顺序表长度为0
    pL->listSize = LIST_INIT_SIZE; // 顺序表初始内存分配量
    return OK;                     // 初始化成功
}

Status destroyList(SqList *L)
{
    if (__isListExist(L) == ERROR) // 确保顺序表结构存在
    {
        return ERROR;
    }

    free((*L).elem); // 释放顺序表内存

    (*L).elem = NULL; // 释放内存后置空指针

    (*L).length = 0; // 顺序表长度跟容量都归零
    (*L).listSize = 0;

    return OK;
};

Status clearList(SqList *L)
{
    if (__isListExist(L) == ERROR) // 确保顺序表结构存在
    {
        return ERROR;
    }

    (*L).length = 0; // 顺序表长度跟容量都归零

    return OK;
};

Status isListEmpty(SqList L)
{
    return L.length == 0 ? TRUE : FALSE;
};

int listLength(SqList L)
{
    return L.length;
};

Status getElem(SqList L, int i, ElemType *e)
{
    if (i < 1 || i > L.length) // 因为i的含义是位置，所以其合法范围是：[1, length]
    {
        return ERROR; //i值不合法
    }

    *e = L.elem[i - 1];

    return OK;
};

int locateElem(SqList L, ElemType e, Status(Compare)(ElemType, ElemType))
{
    int i;
    ElemType *p;

    // 确保顺序表结构存在
    if (L.elem == NULL)
    {
        return ERROR;
    }

    /*
     * i的初值为第1个元素的位序
     *
     * 其实，更自然的写法是将i初始化为第1个元素的索引
     * 但由于教材中是按位序计数的，所以这里仍写作位序
     */
    i = 1;

    // p的初值为第1个元素的存储位置
    p = L.elem;

    // 遍历顺序表
    while (i <= L.length && !Compare(*p++, e))
    {
        ++i;
    }

    if (i <= L.length)
    {
        return i;
    }
    else
    {
        return 0;
    }
};

Status priorElem(SqList L, ElemType cur_e, ElemType *pre_e);

Status nextElem(SqList L, ElemType cur_e, ElemType *next_e);

Status listInsert(SqList *L, int i, ElemType e)
{
    ElemType *newbase;
    ElemType *p, *q;

    // 确保顺序表结构存在
    if (__isListExist(L) == ERROR) // 确保顺序表结构存在
    {
        return ERROR;
    }

    // i值越界
    if (i < 1 || i > (*L).length + 1)
    {
        return ERROR;
    }

    // 若存储空间已满，则增加新空间
    if ((*L).length >= (*L).listSize)
    {
        // 基于现有空间扩容
        newbase = (ElemType *)realloc((*L).elem, ((*L).listSize + LIST_INCREMENT) * sizeof(ElemType));
        if (newbase == NULL)
        {
            // 存储内存失败
            exit(OVERFLOW);
        }

        // 新基址
        (*L).elem = newbase;
        // 存的存储空间
        (*L).listSize += LIST_INCREMENT;
    }

    // q为插入位置
    q = &(*L).elem[i - 1];

    // 1.右移元素，腾出位置
    for (p = &(*L).elem[(*L).length - 1]; p >= q; --p)
    {
        *(p + 1) = *p;
    }

    // 2.插入e
    *q = e;

    // 3.表长增1
    (*L).length++;

    return OK;
};

Status listDelete(SqList *L, int i, ElemType *e)
{
    ElemType *p, *q;

    if (__isListExist(L) == ERROR) // 确保顺序表结构存在
    {
        return ERROR;
    }

    // i值越界
    if (i < 1 || i > (*L).length)
    {
        return ERROR;
    }

    // p为被删除元素的位置
    p = &(*L).elem[i - 1];

    // 1.获取被删除元素
    *e = *p;

    // 表尾元素位置
    q = (*L).elem + (*L).length - 1;

    // 2.左移元素，被删除元素的位置上会有新元素进来
    for (++p; p <= q; ++p)
    {
        *(p - 1) = *p;
    }

    // 3.表长减1
    (*L).length--;

    return OK;
};

void listTraverse(SqList L, void(Visit)(ElemType))
{
    int i;

    for (i = 0; i < L.length; i++)
    {
        Visit(L.elem[i]);
    }

    printf("\n");
};