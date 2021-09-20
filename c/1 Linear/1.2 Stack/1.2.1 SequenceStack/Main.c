/*
 * @Author: D_bxg
 * @Date: 2021-09-17 09:54:33
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-20 10:05:17
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\1 Linear\1.2 Stack\1.2.1 SequenceStack\Main.c
 */
#include "SeqStack.c"

void testSeqStack(){
    SeqStack seqStack;
    initSeqStack(&seqStack,10);
    pushElem(&seqStack,10);
    pushElem(&seqStack,10);
    printf("%d\n",seqStack.pTop[0]);
    int length1 = length(&seqStack);
    printf("%d\n",length1);
    popElem(&seqStack,&length1);
    printf("%d\n",length1);
    return;
}

int main(){
    testSeqStack();
    getchar();
    getchar();
    return 1;
}