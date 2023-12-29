//1.广义表是线性表的推广
//2.线性表里元素都是基本的单元素
//3.广义表中，这些元素不仅可以是单元素也可以是另一个广义表

#include<stdio.h>
#include<stdlib.h>
typedef struct GNode* GList;
struct GNode {
	int tap;//标志域：0表示结点是单元素，1表示结点是广义表
	union {/*子表指针域SubList与单元素数据域Data复用，即共用存储空间*/ 
		int Data;
		GList SubList;
	}URegion;
	GList Next;//指向后继结点
};