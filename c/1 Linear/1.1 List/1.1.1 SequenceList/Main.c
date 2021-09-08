/*
 * @Author: D_bxg
 * @Date: 2021-09-05 10:56:13
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-08 10:05:59
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\Linear\List\SequenceList\Main.c
 */
#include "SeqList.c"

void testSeqList(){
    SeqList seqList;
    initSeqList(&seqList,9);
    printf("初始化完成,顺序表最大下标值为：%d\n",seqList.length);

    int listLength = length(&seqList);
    printf("获取最大下标值：%d\n",listLength);
    
    showSeqList(&seqList);

    for(int i = 0; i<4; i++){
        if(!appendElem(&seqList,i)){
            break;
        }
    }
    printf("添加4个元素\n");
    showSeqList(&seqList);
    printf("\n");
    insertElem(&seqList,5,10);
    showSeqList(&seqList);
    printf("\n");
    insertElem(&seqList,2,10);
    showSeqList(&seqList);
    printf("\n");
    int m,pos;
    deleteElem(&seqList,5,&m);
    showSeqList(&seqList);
    printf("\n");
    deleteElem(&seqList,1,&m);
    printf("删除的数值为：%d\n",m);
    showSeqList(&seqList);
    printf("\n");
    inversionElem(&seqList);
    showSeqList(&seqList);
    printf("\n");
    sortElem(&seqList);
    showSeqList(&seqList);
    printf("\n");
    findMinElem(&seqList,&pos,&m);
    printf("最小数值为：%d，下标为：%d\n",m,pos);
    showSeqList(&seqList);
    printf("\n");
    insertElem(&seqList,2,-10);
    findMinElem(&seqList,&pos,&m);
    printf("最小数值为：%d，下标为：%d\n",m,pos);
    showSeqList(&seqList);
    printf("\n");
    deleteMinElem(&seqList,&pos,&m);
    printf("最小数值为：%d，下标为：%d\n",m,pos);
    showSeqList(&seqList);
    printf("\n");
    insertElem(&seqList,2,-10);
    insertElem(&seqList,0,-10);
    showSeqList(&seqList);
    printf("\n");
    deleteOneofElem(&seqList,-10);
    showSeqList(&seqList);
    printf("\n");
    deleteBetElem(&seqList,1,4);
    showSeqList(&seqList);
    printf("\n");
    insertElem(&seqList,2,-10);
    insertElem(&seqList,0,-10);
    insertElem(&seqList,3,10);
    insertElem(&seqList,1,10);
    insertElem(&seqList,1,2);
    insertElem(&seqList,3,2);
    showSeqList(&seqList);
    printf("\n");
    deleteSameElem(&seqList);
    showSeqList(&seqList);
    printf("\n");
    SeqList A,B,C;
    initSeqList(&A,9);
    initSeqList(&B,9);
    initSeqList(&C,9);
    insertElem(&A,0,-10);
    insertElem(&A,0,20);
    insertElem(&A,0,3);
    insertElem(&B,0,5);
    insertElem(&B,0,4);
    insertElem(&B,0,2);
    mergeSeqList(&A,&B,&C);
    showSeqList(&C);
    printf("\n");
    return;
};

int main(){
    testSeqList();
    getchar();
    return 1;
};