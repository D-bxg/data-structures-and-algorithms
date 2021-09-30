<!--
 * @Author: D_bxg
 * @Date: 2021-09-30 09:15:03
 * @LastEditors: D_bxg
 * @LastEditTime: 2021-09-30 09:42:40
 * @Description: file content
 * @FilePath: \Ce:\Code\Data-Structures-and-Algorithms\data-structures-and-algorithms\c\2 Tree\2.1 BTree\README.md
-->
二叉树
>#
度为0，1，2的结点个数分别为$n_0$、$n_1$、$n_2$,则$n_0 = n_2+1$。（叶子结点比二分结点多一个）

设树的总结点个数为n，则：
$n=n_0+n_1+n_2$
$n=n_1+2n_2+1$（结点数=总度数+1）
>#
m叉树第i层至多有$m^{i-1}$个结点
二叉树第i层至多有$2^{i-1}$个结点
>#
高度为h的m叉树至多有$\frac{m^h-1}{m-1}$个结点
高度为h的二叉树至多有$2^h-1$个结点（因为是最多，所以是满二叉树）
>#
有n个（n>0）结点的完全二叉树高度h为$\log_2(n+1)$（向上取整）或$\log_2n$+1（$\log_2n$向下取整）
高度为h的满二叉树最多有$2^h-1$个结点
高度为h-1的满二叉树最少有$2^{h-1}-1$个结点
>#
完全二叉树
用结点总数n（n>0）推算度为0、1、2的结点个数$n_0$、$n_1$、$n_2$
由
$n_1=0\quad or \quad 1$
$n_0 = n_2+1$
得
若有k个（k为偶数）结点，则：
$n_1=1$、$n_0=k$、$n_2=k-1$ 
若有k个（k为奇数）结点，则：
$n_1=0$、$n_0=k$、$n_2=k-1$ 
