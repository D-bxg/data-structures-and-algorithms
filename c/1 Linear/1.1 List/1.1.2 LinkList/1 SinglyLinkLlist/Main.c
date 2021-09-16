/*
 * @Author: D_bxg
 * @Date: 2021-09-11 09:03:19
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-15 10:58:40
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\1 Linear\1.1 List\1.1.2 LinkList\1 SinglyLinkedLlist\Main.c
 */
#include "LinkList.c"

void testLinkList(){
    pLinkList pHead;
    pHead = initLinkList();
    showLinkList(pHead);
    if(isEmpty(pHead)){
       printf("空\n"); 
    }else{
        printf("不空\n");
    }
    int length1 = 1;
    length1 = length(pHead);
    printf("链表长度为：%d\n",length1);
    insertNode(pHead,-1,10);
    showLinkList(pHead);
    insertNode(pHead,2,10);
    showLinkList(pHead);
    insertNode(pHead,0,10);
    showLinkList(pHead);
    int a;
    deleteNode(pHead,3,&a);
    printf("删除的值为%d\n",a);
    showLinkList(pHead);
    getNode(pHead,3,&a);
    getNode(pHead,1,&a);
    printf("获取的值为%d\n",a);
    findNode(pHead,&a,1);
    printf("值为1的下标为:%d\n",a);

    clearNode(pHead);
    showLinkList(pHead);
    if(destroyLinkList(pHead)){
        printf("destroyLinkList():ok\n");
    }

    return;
}

int main(){
    testLinkList();
    getchar();
    getchar();
    return 1;
}
