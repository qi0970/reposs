//堆是从下标为1开始存放

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define ElementType int

#define MaxSize 100

typedef struct HeapStruct *MaxHeap;

struct HeapStruct {
	ElementType *Elements;//存储堆元素的数组
	int Size;//堆当前元素个数
	int Capacity;//堆的最大容量
};
typedef Heap MaxHeap;
typedef Heap MinHeap;

//创建容量为MaxSize的空的最大堆
MaxHeap Create(int MaxSize) {
	MaxHeap H = (MaxHeap)malloc(sizeof(struct HeapStruct));
	H->Elements = (int *)malloc((MaxSize + 1) * sizeof(ElementType));
	H->Size = 0;
	H->Capacity = MaxSize;
	H->Elements = MaxData; //定义“哨兵”为大于堆中所以可能的元素，方便后续操作
	return H;
}

//判断是否为空
bool IsFull(MaxHeap H) {
	return (H->Size == H->Capacity)
}

//插入
//时间复杂度:O(logN)
void Insert(MaxHeap H, ElementType item) {
	int i;
	if (IsFull(H)) {
		print("最大堆已满");
		return ;
	}
	i = ++H->Size; //i指向插入后堆中的最后一个元素的位置
	for (; H->Elements[i / 2] < item; i /= 2) { //因为有哨兵可以不用判断i>树根结点
		H->Elements[i] = H->Elements[i / 2]; //向下过滤结点
		H->Elements[i] = item; //将item插入
	}
}

//删除
ElementType Delete(MaxHeap H) {
	int Parent, Child;
	ElementType MaxItem, temp;
	if (IsEmpty(H)) {
		printf("最大堆为空");
		return 0;
	}
	MaxItem = H->Elements[1]; //取根节点最大值
	temp = H->Elements[H->Size]; //存最后一个值
	Size--;//长度-1
	for (Parent = 1; Parent * 2 > H->Size; Parent = Child) {//从根节点往下判断
		Child = 2 * Parent;
		if (Child != H->Size && H->Elements[Child] < H->Elements[Child + 1]) {
			Child++;//为了让Child始终指向左右儿子中大的那一个
		}
		if (temp >= H->Elements[Child]) { //说明最后就是最大值，就不需要修改
			break;
		} else { //把左右儿子大的一个写到父节点上
			H->Elements[Parent] = H->Elements[Child];
		}
	}
	H->Elements[Parent] = temp;
	return MaxItem;
}

//建造最大堆
void PercDown(MaxHeap H, int p) {

	/*下滤：将H中以H->Data[p]为根的子堆调整为最大堆*/
	int  Parent,  Child;
	ElementType  X;

	X  =  H->Elements[p];
	/*取出根结点存放的值*/
	for (  Parent = p;  Parent * 2 <= H->Size;  Parent = Child  ) {
		Child  =  Parent  *  2;
		if ( (Child != H->Size)  &&  (H->Data[Child] < H->Data[Child + 1])  )
			Child++;
		/*Child指向左右子结点的较大者*/
		if (  X  >=  H->Data[Child]  )
			break;
		/*找到了合适位置*/
		else  /*下滤X*/
			H->Data[Parent]  =  H->Data[Child];

	}
	H->Data[Parent]  =  X;

}


int main() {


	return 0;
}
