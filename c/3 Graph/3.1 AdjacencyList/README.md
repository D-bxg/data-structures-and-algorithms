<!--
 * @Author: D_bxg
 * @Date: 2021-10-20 08:02:17
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-10-28 16:34:31
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\3 Graph\AdjacencyList\README.md
-->
## 邻接矩阵（数组）
无向图：data[][]，顶点决定几乘几的矩阵

存储复杂度为：O( $n^2$ )

```c
//代表无穷
#define MaxInt 32767
#define MVNum 100
typedef char VertexType;
typedef int EdgeType;

typedef struct AMGraph{ // A指邻接，M指矩阵
    VertexType vertex[MVNum];
    EdgeType edge[MVNum][MVNum];// 邻接矩阵
    int verNum,edgeNum;
} AMGraph, * pAMGraph
```

有向图：行代表出度，列代表入度

有向网带权：无边链接处记为无穷，有边的记为权值，记录方式和有向图相同，记录数字为权值

## 邻接表（链表）

有n个顶点和e条边，则有n个头节点和2e个边结点

存储复杂度为；O( n+2e )

```c
typedef struct VNode{
    VertexType data;
    pArcNode pNext;
}VNode, VNodeList[100]; // VNodeList v == VNode v[100];

typedef struct ArcNode{
    int vertexSub;
    struct ArcNode * pNext;
    // int info; 用于记录权值
}ArcNode,*pArcNode;

typedef struct ALGraph{ // A指邻接，L指表
    VNodeList vertex;
    int verNum,edgeNum;
}ALGraph, * pALGraph;
//采用头插法把边结点存储进去
```

有向图：结点vertex不记录入度边

## 十字链表-邻接表对有向图不好算入度的改进
把邻接表和逆邻接表合在一起
```c
typedef struct VNode{
    VertexType data;
    pArcNode pIn;
    pArcNode pOut;
}VNode;

typedef struct ArcNode{
    int tailVertexSub;
    int headVertexSub;
    struct ArcNode * pHeadNext;
    struct ArcNode * pTailNext;
}ArcNode,* pArcNode;

typedef struct OrthogonalListGraph{
    VNode vertex[100];
    int verNum,arcNum;
}OrthogonalListGraph;
```

## 邻接多重表-邻接表对无向图要记录两次边结点的改进
```c
typedef struct VNode{
    VertexType data;
    pEdgeNode pNext;
}VNode;

typedef struct EdgeNode{
    int mark; // 用来标记是否被检索过;
    int iVertexSub;
    struct * EdgeNode pINext;
    int jVertexSub;
    struct * EdgeNode pJNext;
    int info;
}EdgeNode, *pEdgeNode;

typedef struct AdjMultilistGraph{
    VNode vertex[100];
    int verNum,edgNum;
}AdjMultilistGraph;
```