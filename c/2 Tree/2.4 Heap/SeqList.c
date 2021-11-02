/*
 * @Author: D_bxg
 * @Date: 2021-09-05 10:57:23
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-08 10:06:09
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\Linear\List\SequenceList\SeqList.c
 */
#define SEQLIST_C

#include "SeqList.h"

void initSeqList(SeqList* pSeqList,int length){
    pSeqList->elem = (int*)malloc(sizeof(pSeqList->elem) * length);
    if(pSeqList->elem == NULL){
        exit(-1);
    }else{
        pSeqList->length = length;
        pSeqList->listSize = 0;
    }
};
void destorySeqList(SeqList* pSeqList);
void mergeSeqList();
bool isEmpty(SeqList* pSeqList){
    return pSeqList->listSize == 0 ? true : false;
};
bool isFull(SeqList* pSeqList){
    return pSeqList->listSize > pSeqList->length ? true : false;
};
int length(SeqList* pSeqList){
    return pSeqList->length;
};
int showSeqList(SeqList* pSeqList){
    if(isEmpty(pSeqList)){
        printf("showSeqList():顺序表是空的\n");
        return 0;
    }else{
        for(int i = 0; i < pSeqList->listSize; i++){
            printf("序号为%d的元素值：%d\n",i,pSeqList->elem[i]);
        }
        return 1;
    }
};

bool appendElem(SeqList* pSeqList,int elem){
    if(isFull(pSeqList)){
        printf("appendElem():顺序表已满\n");
        return false;
    }else{
        pSeqList->elem[pSeqList->listSize] = elem;
        pSeqList->listSize++;
        return true;    
    }
};
bool insertElem(SeqList* pSeqList,int pos,int elem){
    if(isFull(pSeqList)){
        printf("insertElem():顺序表已满，无法插入\n");
        return false;
    }else{
        if(pSeqList->listSize < pos || pos < 0){
            printf("insertElem():插入位置不合法\n");
            return false;
        }
        for(int i = 0; i < pSeqList->listSize - pos + 1; i++){
            pSeqList->elem[pSeqList->listSize-i+1] = pSeqList->elem[pSeqList->listSize-i];
        }
        pSeqList->elem[pos] = elem;
        pSeqList->listSize++;
        return true;
    }
};
bool deleteElem(SeqList* pSeqList,int pos,int* pVal){
    if(isEmpty(pSeqList)){
        printf("deleteElem():顺序表为空\n");
        return false;
    }
    if(pSeqList->listSize < pos+1 || pos < 0){
        printf("deleteElem():删除位置不合法\n");
        return false;
    }
    *pVal = pSeqList->elem[pos];
    for(int i = 0; i<pSeqList->listSize-pos-1;i++){
        pSeqList->elem[pos+i] = pSeqList->elem[pos+1+i];
    }
    pSeqList->listSize--;
    return true;
};
void inversionElem(SeqList* pSeqList){
    if(isEmpty(pSeqList)){
        printf("deleteElem():顺序表为空\n");
    }
    for(int i = 0; i < pSeqList->listSize/2; i++){
        int temp;
        temp = pSeqList->elem[i];
        pSeqList->elem[i] = pSeqList->elem[pSeqList->listSize-i-1];
        pSeqList->elem[pSeqList->listSize-i-1] = temp;
    }
    return;
};
void sortElem(SeqList* pSeqList){
    if(isEmpty(pSeqList)){
        printf("sortElem():顺序表为空\n");
    }
    for(int i = 0; i < pSeqList->listSize; i++){
        for(int j = i+1; j < pSeqList->listSize; j++){
            if(pSeqList->elem[i] > pSeqList->elem[j]){ // 降序
                int temp;
                temp = pSeqList->elem[i];
                pSeqList->elem[i] = pSeqList->elem[j];
                pSeqList->elem[j] = temp;
            }
        }
    }
}
bool findElem(SeqList* pSeqList,int pPos[],int val);
// {
//     if(isEmpty(pSeqList)){
//         printf("findMinElem():顺序表为空\n");
//         return false;
//     }
//     for(int i = 0; i < pSeqList->listSize; i++){
//         if(pSeqList->elem[i] == val){
//             int j = 0;
//             pPos[j] = i;
//             j++;
//         }else{
//             continue;
//         }
//     }
//     return true;
// }
bool findMinElem(SeqList* pSeqList,int* pPos,int* pVal){
    if(isEmpty(pSeqList)){
        printf("findMinElem():顺序表为空\n");
        return false;
    }
    int temp = pSeqList->elem[0],pos = 0;
    if(pSeqList->listSize == 1){
        *pPos = pos;
        *pVal = temp;
        return true;
    }
    for(int i = 1; i < pSeqList->listSize; i++){
        if(temp > pSeqList->elem[i]){
            temp = pSeqList->elem[i];
            pos = i;
        }
    }
    *pPos = pos;
    *pVal = temp;
    return true;
}
bool changeElem(SeqList* pSeqList,int pos,int val){
    if(isEmpty(pSeqList)){
        printf("changeElem():顺序表为空\n");
        return false;
    }
    pSeqList->elem[pos] = val;
    return true;
}
bool deleteMinElem(SeqList* pSeqList,int* pPos,int* pVal){
    if(isEmpty(pSeqList)){
        printf("deleteMinElem():顺序表为空\n");
        return false;
    }
    int temp,val,pos;
    findMinElem(pSeqList,&pos,&val);
    temp = pSeqList->elem[pSeqList->listSize-1];
    changeElem(pSeqList,pos,temp);
    deleteElem(pSeqList,pSeqList->listSize-1,&temp);
    *pPos = pos;
    *pVal = val;
    return true;
}
bool deleteOneofElem(SeqList* pSeqList,int val){
    if(isEmpty(pSeqList)){
        printf("deleteOneofElem():顺序表为空\n");
        return false;
    }
    int temp;
    for(int i = 0;i<pSeqList->listSize;i++){
        if(val == pSeqList->elem[i]){
            deleteElem(pSeqList,i,&temp);
            i--;
        }
    }
    return true;
    
}
bool deleteBetElem(SeqList* pSeqList,int s,int t){
    if(isEmpty(pSeqList)){
        printf("deleteBetElem():顺序表为空\n");
        return false;
    }
    if(s>t){
        printf("deleteBetElem():不合法\n");
        return false;
    }
    int temp;
    for(int i = 0; i<pSeqList->listSize;i++){
        if(pSeqList->elem[i]>s && pSeqList->elem[i] < t){
            deleteElem(pSeqList,i,&temp);
            i--;
        }
    }
    return true;
}
bool deleteSameElem(SeqList* pSeqList){
    if(isEmpty(pSeqList)){
        printf("deleteSameElem():顺序表为空\n");
        return false;
    }
    int temp;
    for(int i = 0;i<pSeqList->listSize-1;i++){
        for(int j = i+1;j<pSeqList->listSize;j++){
            if(pSeqList->elem[i] == pSeqList->elem[j]){
                deleteElem(pSeqList,j,&temp);
                j--;
            }
        }
    }
    return true;
}
bool mergeSeqList(SeqList* pSeqList1,SeqList* pSeqList2,SeqList* pSeqList3){
    if(pSeqList1->listSize + pSeqList2->listSize > pSeqList3->length){
        return false;
    }
    sortElem(pSeqList1);
    sortElem(pSeqList2);
    int i = 0, j = 0, k = 0;
    while(i<pSeqList1->listSize&&j<pSeqList2->listSize){
        if(pSeqList1->elem[i] < pSeqList2->elem[j]){
            pSeqList3->elem[k++] = pSeqList1->elem[i++];
        }else{
            pSeqList3->elem[k++] = pSeqList2->elem[j++];
        }
    }
    while(i < pSeqList1->listSize){
        pSeqList3->elem[k++] = pSeqList1->elem[i++];
    }
    while(j < pSeqList2->listSize){
        pSeqList3->elem[k++] = pSeqList1->elem[j++];
    }
    pSeqList3->listSize = k;
    return true;
}
// bool reverseTwoSeqList(SeqList* pSeqList1,SeqList* pSeqList2,SeqList* pSeqList3){
//     if(isEmpty(pSeqList)){
//         printf("reverseTwoSeqList():顺序表为空\n");
//         return false;
//     }
//     inversionElem(pSeqList1);
//     int  m = pSeqList2->listSize,n = pSeqList3->listSize;
//     for(int i = 0; i < m/2; i++){
//         int temp;
//         temp = pSeqList->elem[i];
//         pSeqList->elem[i] = pSeqList->elem[m-i-1];
//         pSeqList->elem[m-i-1] = temp;
//     }
//     for(int j = m+1; j < n/2; i++){
//         int temp;
//         temp = pSeqList->elem[i];
//         pSeqList->elem[i] = pSeqList->elem[m-i-1];
//         pSeqList->elem[m-i-1] = temp;
//     }
//     return true;
// }