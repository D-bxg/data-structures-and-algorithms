/*
 * @Author: D_bxg
 * @Date: 2021-10-31 17:04:37
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-11-02 09:30:23
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\4 Algorithm\4.2 Sort\Sort.c
 */
#define SORT_C
#include "sort.h"

void InsertSort(SeqList seqList){
    int i, j, temp;
    for (i = 1; i < seqList.listSize;i++){
        if(seqList.elem[i]<seqList.elem[i-1]){
            temp = seqList.elem[i];
            for ( j = i-1;j>=0 && seqList.elem[j]>temp; j--)
            {
                seqList.elem[j + 1] = seqList.elem[j];
            }
            seqList.elem[j+1] = temp;
        }
    }
}
void InsertSort_Sentry(SeqList seqList){
    int i, j;
    for (i = 2; i < seqList.listSize+1;i++){
        if(seqList.elem[i]<seqList.elem[i-1]){
            seqList.elem[0] = seqList.elem[i];
            for (j = i - 1; seqList.elem[0] < seqList[j];j--){ //
                seqList.elem[j + 1] = seqList.elem[j];
            }
            seqList.elem[j + 1] = seqList[0];
        }
    }
}
void BinaryInsertSort(SeqList seqList){
    int i, j, low, high, mid;
    for (i = 2; i < seqList.listSize+1;i++){
        seqList.elem[0] = seqList.elem[i];
        low = 1;
        high = i - 1;
        while (low<=high){
            mid = (high + low) / 2;
            if(seqList.elem[0]<seqList.elem[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        for (j = i - 1; j >= high + 1;--j){
            seqList.elem[j + 1] = seqList.elem[j];
        }
        seqList.elem[j + 1] = seqList.elem[0];
    }
}
void ShellSort(SeqList seqList){
    int d, i, j;
    for (d = seqList.listSize / 2; d >= 1;d = d/2){
        for (i = d + 1; i <= seqList.listSize;i++){
            if(seqList.elem[i]<seqList.elem[i-d]){
                seqList.elem[0] = seqList.elem[i];
                for (j = i - d; j > 0 && seqList.elem[0] < seqList.elem[j];j-=d){
                    seqList.elem[j + d] = seqList.elem[j];
                }
                seqList.elem[j + d] = seqList.elem[0];
            }
        }
    }
}
void BubbleSort(SeqList seqList){
    for (int i = 0; i < seqList.listSize;i++){
        bool flag = false; //
        for (int j = seqList.listSize - 1; j > i; j--){
            if(seqList.elem[j-1]>seqList.elem[j]){
                int temp = seqList.elem[j];
                seqList.elem[j] = seqList.elem[j - 1];
                seqList.elem[j - 1] = temp;
                flag = true; //
            }
        }
        if(flag == false){ //
            return;
        }
    }
}
void QuickSort(SeqList seqList, int low, int high){
    if(low<high){
        int pivot = partition(seqList, low, high);
        QuickSort(seqList, low, pivot - 1);
        QuickSort(seqList, pivot + 1, high);
    }
}
int partition(SeqList seqList, int low, int high){
    int pivot = seqList.elem[low];
    while (low<high){
        while(low<high && seqList.elem[high]>pivot)
            high--;
        seqList.elem[low] = seqList.elem[high];
        while(low<high && seqList.elem[low]<pivot)
            low++;
        seqList.elem[high] = seqList.elem[low];
    }
    seqList.elem[low] = pivot;
    return low;
}
void SelectSort(SeqList seqList){
    for (int i = 0; i < seqList.listSize - 1; i++){
        int min = i;
        for (int j = i + 1; j < seqList.listSize;j++){
            if(seqList.elem[i]>seqList.elem[j]){
                min = j;
            }
        }
        if(min != i){
            int temp = seqList.elem[i];
            seqList.elem[i] = seqList.elem[min];
            seqList.elem[min] = temp;
        }
    }
}
void HeapSort(SeqList seqList){
    BuildMaxHeap(seqList); // 见 heap 数据结构
    for (int i = seqList.listSize; i > 1;i--){
        int temp = seqList.elem[1];
        seqList.elem[1] = seqList.elem[i];
        seqList.elem[i] = temp;
        HeadAdjust(seqList, 1, i - 1); // 见 heap 数据结构
    }
}
void MergeSort(SeqList seqList,int low,int high){
    if(low < high){
        int mid = (low + high) / 2;
        MergeSort(seqList, low, mid - 1);
        MergeSort(seqList, mid + 1,high);
        merge(&seqList, low, mid, high); // 见 SeqList 数据结构
    }
}
