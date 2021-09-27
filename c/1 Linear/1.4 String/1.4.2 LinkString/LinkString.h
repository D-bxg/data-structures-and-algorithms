/*
 * @Author: D_bxg
 * @Date: 2021-09-27 09:52:59
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-27 09:58:56
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\1 Linear\1.4 String\1.4.2 LinkString\LinkString.h
 */
#define LINKSTRING_H

#include<stdio.h>
#include<stdlib.h>

typedef char ElemType;

typedef struct Chunk{
    ElemType data[80];
    struct Chunk * pNext;
} Chunk, *pChunk;
typedef struct LString{
    pChunk pHead;
    pChunk pTail;
    int stringSize;
}LString;