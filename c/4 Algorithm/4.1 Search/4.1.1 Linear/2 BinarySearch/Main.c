/*
 * @Author: D_bxg
 * @Date: 2021-10-29 17:11:09
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-10-29 21:15:54
 * @Description:
 *      只用于有序线性表
 *      时间复杂度：O(log2n)
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\4 Algorithm\4.1 Search\4.1.1 Linear\2 BinarySearch\Main.c
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
} BSTable, *pBSTable;

int BSearch(pBSTable ST, KeyType key)
{
    int low = 0, high = ST->length - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (ST->elem[mid].key == key)
        {
            return mid;
        }
        else
        {
            if (ST->elem[mid].key > key)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return -1;
}

void main()
{

    while (1)
        ;
    return;
}