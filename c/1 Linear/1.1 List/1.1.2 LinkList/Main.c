/*
 * @Author: D_bxg
 * @Date: 2021-09-11 09:03:19
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-13 12:43:26
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\1 Linear\1.1 List\1.1.2 LinkList\Main.c
 */
#include "LinkList.c"

void testLinkList(){
    pLinkList pHead;
    pHead = initLinkList();
    showLinkList(pHead);
    if(isEmpty(pHead)){
       printf("��\n"); 
    }else{
        printf("����\n");
    }
    int length1 = 1;
    length1 = length(pHead);
    printf("������Ϊ��%d\n",length1);
    insertNode(pHead,-1,10);
    showLinkList(pHead);
    insertNode(pHead,2,10);
    showLinkList(pHead);
    insertNode(pHead,0,10);
    showLinkList(pHead);
    int a;
    deleteNode(pHead,3,&a);
    printf("ɾ����ֵΪ%d\n",a);
    showLinkList(pHead);
    return;
}

int main(){
    testLinkList();
    getchar();
    getchar();
    return 1;
}
