#include<stdio.h>

List MakeEmpty()
{
	List PtrL;//PtrL是指针名
	PtrL=(List)malloc(sizeof(struct LNode));//通过malloc来申请结构
	PtrL->Last=-1;
	return PtrL;
}
int Find(ElementType X,List PtrL)
{
	int i=0;
	while(i<=PtrL->Last&&PtrL->Data[i]=X)
		i++;
	if(i>PtrL->Last)
		return -1;
	else return i;
}

//插入数据
void Insert(ElementType X,int i,List PtrL)//i是位置
{
	if(PtrL->Last==MAXSIZE-1)//空间已满，不能插入
	{
		printf("线性表满了");
		return;
	}
	if(i<1||i>PtrL->Last+2)
	{
		printf("位置不正确");
		return;
	}
	int j=0;
	for(j=PtrL->Last;j>=i-1;j--)
	{
		PtrL->Data[j+1]=PtrL->Data[j];//将线性表最后一个数据往后移一个，从最后一直到目标i
	}
	PtrL->Data[i-1]=X;//插入元素
	PtrL->Last++;
	return;
}

//删除数据
void Delete(int i,List PtrL)//i是位置
{
	int j=0;
	if(i<1||i>PtrL->Last+1)
	{
		printf("不存在第%d个元素",i);
		return;
	}
	for(j=i;j<=PtrL->Last;j++)//从左往右移动
		PtrL->Data[j-1]=PtrL->Data[j];
	PtrL->Last--;
	return;
}