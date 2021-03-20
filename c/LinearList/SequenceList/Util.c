/*
 * @Author: D_bxg
 * @Date: 2021-03-20 21:34:01
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-03-20 21:50:01
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\LinearList\SequenceList\Util.c
 */
#include "SqList.h"
#include "Status.h"

/**
 * @description: 确保顺序表结构存在
 * @param {SqList} *L
 * @return {*}
 */
Status __isListExist(SqList *L)
{
    if (L == NULL || (*L).elem == NULL) // 确保顺序表结构存在
    {
        return ERROR;
    }

    return OK;
}