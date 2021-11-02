/*
 * @Author: D_bxg
 * @Date: 2021-10-31 17:04:27
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-11-02 16:11:07
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\4 Algorithm\4.2 Sort\Sort.h
 */
#define SORT_H

#include "Heap.c"

/**
 * @description:
 *      时间:
 *          平均:O(n^2)
 *          最好:O(n)
 *          最坏:O(n^2)
 *      空间:O(1)
 *      稳定
 * @param {SeqList} seqList
 * @return {*}
 */
void InsertSort(SeqList seqList);
void InsertSort_Sentry(SeqList seqList);
void BinaryInsertSort(SeqList seqList); // 不能用于链表
/**
 * @description:
 *      时间:
 *          无法统计
 *          最坏:O(n^2)
 *      空间:O(1)
 *      不稳定
 * @param {SeqList} seqList
 * @return {*}
 */
void ShellSort(SeqList seqList); // 不能用于链表
/**
 * 交换排序
 */
/**
 * @description:
 *      时间:
 *          平均:O(n^2)
 *          最好:O(n)
 *          最坏:O(n^2)
 *      空间:O(1)
 *      稳定
 * @param {SeqList} seqList
 * @return {*}
 */
void BubbleSort(SeqList seqList);
/**
 * @description: 把表化成二叉树
 *      时间:
 *          平均:O(n log2 n) // n * 递归层数（二叉树高度）
 *          最好:O(n log2 n) // n * log2n(向下取整) + 1
 *          最坏:O(n^2) // n * n
 *      空间:
 *          最好:O(log2 n) // 递归层数：log2n(向下取整) + 1
 *          最坏:O(n)
 *      不稳定
 * @param {SeqList} seqList
 * @param {int} low
 * @param {int} high
 * @return {*}
 */
void QuickSort(SeqList seqList, int low, int high);
int partition(SeqList seqList, int low, int high);
/**
 * 选择排序 
 */
/**
 * @description:
 *      时间:
 *          平均:O(n^2)
 *          最好:O(n^2)
 *          最坏:O(n^2)
 *      空间:O(1)
 *      不稳定
 * @param {SeqList} seqList
 * @return {*}
 */
void SelectSort(SeqList seqList);
/**
 * @description:
 *      时间:
 *          平均:O(n log2 n)
 *      空间:O(1)
 *      不稳定
 * @param {SeqList} seqList
 * @return {*}
 */
void HeapSort(SeqList seqList);

/**
 * @description:
 *      时间:
 *          平均:O(n log2 n)
 *      空间:O(n) // 辅助数组B
 *      稳定
 * @param {SeqList} seqList
 * @param {int} low
 * @param {int} high
 * @return {*}
 */
void MergeSort(SeqList seqList,int low,int high);

/**
 * @description: 
 * @param {SeqList} seqList
 * @return {*}
 */
void RadixSort(SeqList seqList); // 见readme

/**
 * 外部排序 
 */
