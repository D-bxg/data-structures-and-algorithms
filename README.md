<!--
 * @Author: D_bxg
 * @Date: 2021-03-17 21:01:46
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-08 10:13:30
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
|   |---1 Linear
|   |   |---1.1 List
|   |       |---1.1.1 SequenceList
|   |       |---1.1.2 LinkList
|   |       |---...
|   |
|   |---...
|
|---README.md
```

3. 每个实现数据结构的文件夹下，通常有这么几个文件，以SequenceList举例：
    - SqList.h 这个是数据结构的前两要素：逻辑结构和数据运算的定义。可以理解为Java里，service包里的接口类
    - SqList.c 这个数据结构的C文件，是数据运算方法的具体实现。可以理解为serviceImpl包里的实现类。
    - Main.c 这个是测试方法是否可用的最终的运行处。

# 3 一些说明

## 3.1 命名方式

命名方式和java相似。
变量和方法使用小驼峰。
结构体使用大驼峰。
形参用到指针的都在前方加了p。