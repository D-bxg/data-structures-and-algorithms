/*
 * @Author: D_bxg
 * @Date: 2021-10-06 10:40:06
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-10-06 10:44:05
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\test\testScanfString.c
 */
#include <stdio.h>
int main()
{
    char string[100];
    scanf("%s", string);
    printf("%s\n", string);
    printf("%c\n", string[0]);
    getchar();
    getchar();
    return 1;
}