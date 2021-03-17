<!--
 * @Author: D_bxg
 * @Date: 2021-03-17 21:01:46
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-03-17 22:16:57
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\README.md
-->
# 0 目录

[TOC]

# 1 介绍

一个实现数据结构与算法的仓库。

# 2 文件结构

1. 最外层是指用的何种语言，当然目前只有C语言，可能会有一些C++，以后会不会有JavaScript、Java、python也不好讲。
2. 每个语言下面都是以数据结构分类，数据结构文件夹里是用的不同的存储结构实现。例如：

```java
|---c
|   |---LinearList
|   |   |---SequenceList
|   |   |---LinkList
|   |   |---...
|   |
|   |---...
|
|---README.md
|---...
```

# 3 定义一个数据结构时要考虑的事

# 4 实现一个方法时要考虑的事

## 4.1 初始化和销毁

### 4.1.1 初始化

1. 分配内存
2. 初始化时内存分配失败
    - 执行exit(OVERFLOW)
3. 分配的内存有多大容量（size）
4. 占用了多少内存容量（length）

### 4.1.2 销毁

1. 销毁时这个数据结构本身就不存在或者没分配内存
    - 直接return ERROR
2. 释放内存
3. 置空指针
4. 内存总容量归零（size）
5. 占用的内存容量归零（length）

## 4.2 增删查

## 4.3 改，和其他操作

### 4.3.1 置空

1. 这个数据结构本身就不存在或者没分配内存
    - 直接return ERROR
2. 占用的内存容量归零（length）
    - 这样虽然没有清空内存里的内容，但在逻辑上我们的这个数据结构是已经为空了的。

### 4.3.2 判断（is系列）

#### 4.4.1 判空

### 4.3.3 计数
