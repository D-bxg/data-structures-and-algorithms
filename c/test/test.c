/*
 * @Author: D_bxg
 * @Date: 2021-10-29 16:45:34
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-10-29 16:45:34
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\test\test.c
 */
#include <stdio.h>
typedef struct Node
{
    int data;
} Node;
int fun(Node node)
{
    node.data = 2;
    printf("%d\n", node.data);
    return 0;
}

int main()
{
    Node node;
    node.data = 1;
    fun(node);
    printf("%d\n", node.data);

    while (1);
    return 1;
}