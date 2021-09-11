/*
 * @Author: D_bxg
 * @Date: 2021-09-11 09:03:19
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-11 10:48:55
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\1 Linear\1.1 List\1.1.2 LinkList\Main.c
 */
#include "LinkList.c"

void testLinkList(){
    pLinkList pHead;
    pHead = initLinkList();
    showLinkList(pHead);
    return;
}

int main(){
    testLinkList();
    getchar();
    getchar();
    return 1;
}
