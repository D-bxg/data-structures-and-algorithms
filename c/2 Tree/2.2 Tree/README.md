<!--
 * @Author: D_bxg
 * @Date: 2021-10-07 10:57:41
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-10-08 10:18:22
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\2 Tree\2.2 Tree\README.md
-->
># 1 双亲表示法
>```c
>typedef struct ElemType{
>   char data;
>} ElemType, *pElemType;
>
>typedef struct Node{ // 结点数据类型
>   ElemType data;
>   int sub; // 存放父节点的下标，也就是双亲域
>} Node, *pNode;
>
>typedef struct Tree{
>   Node elem[100];
>   int treeSize;
>   int length;
>} Node, *pNode;
>```
>特点：找双亲容易，找孩子难

># 2 孩子链表
>```c
>typedef struct Node{
>   int sub; // 用于记录孩子下标
>   struct Node * pNext; // 用于记录兄弟结点
>} Node, *pNode;
>
>typedef struct List{
>   ElemType data;
>   pNode pHead; // 用于记录每个结点的子节点
>   // 解决方案
>   int pSub; // 用于记录双亲下标
>} List, *pList;
>
>typedef struct Tree{
>   List list[100]; // 存放List
>   int treeSize;
>   int length;
>} Tree, *pTree;
>```
>特点：找孩子容易，找双亲难
>解决方案：增加双亲结点的下标

># 3 孩子兄弟表示法
>## （又称二叉树表示法、二叉链表表示法）
>```c
>typedef struct Node{
>   ElemType data;
>   struct Node * pChild;    
>   struct Node * pBrother;    
>   // 解决方案
>   int pSub; // 用于记录双亲下标
>}
>```
>特点：找孩子容易，找双亲难
>解决方案：增加双亲结点的下标