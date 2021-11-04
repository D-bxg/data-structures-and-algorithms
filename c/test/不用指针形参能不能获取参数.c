/*
 * @Author: D_bxg
 * @Date: 2021-09-06 09:24:13
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-06 09:28:03
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\test\不用指针形参能不能获取参数.c
 */
#include<stdio.h>

typedef struct aaa{
    int num;
}aaa;

int fun(aaa* aaa){
    printf("%d\n",aaa->num);
}

int main(){
    aaa aaa;
    aaa.num = 1;
    fun(&aaa);
    return 1;
}