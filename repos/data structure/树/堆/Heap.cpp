//���Ǵ��±�Ϊ1��ʼ���

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define ElementType int

#define MaxSize 100

typedef struct HeapStruct *MaxHeap;

struct HeapStruct {
	ElementType *Elements;//�洢��Ԫ�ص�����
	int Size;//�ѵ�ǰԪ�ظ���
	int Capacity;//�ѵ��������
};
typedef Heap MaxHeap;
typedef Heap MinHeap;

//��������ΪMaxSize�Ŀյ�����
MaxHeap Create(int MaxSize) {
	MaxHeap H = (MaxHeap)malloc(sizeof(struct HeapStruct));
	H->Elements = (int *)malloc((MaxSize + 1) * sizeof(ElementType));
	H->Size = 0;
	H->Capacity = MaxSize;
	H->Elements = MaxData; //���塰�ڱ���Ϊ���ڶ������Կ��ܵ�Ԫ�أ������������
	return H;
}

//�ж��Ƿ�Ϊ��
bool IsFull(MaxHeap H) {
	return (H->Size == H->Capacity)
}

//����
//ʱ�临�Ӷ�:O(logN)
void Insert(MaxHeap H, ElementType item) {
	int i;
	if (IsFull(H)) {
		print("��������");
		return ;
	}
	i = ++H->Size; //iָ��������е����һ��Ԫ�ص�λ��
	for (; H->Elements[i / 2] < item; i /= 2) { //��Ϊ���ڱ����Բ����ж�i>�������
		H->Elements[i] = H->Elements[i / 2]; //���¹��˽��
		H->Elements[i] = item; //��item����
	}
}

//ɾ��
ElementType Delete(MaxHeap H) {
	int Parent, Child;
	ElementType MaxItem, temp;
	if (IsEmpty(H)) {
		printf("����Ϊ��");
		return 0;
	}
	MaxItem = H->Elements[1]; //ȡ���ڵ����ֵ
	temp = H->Elements[H->Size]; //�����һ��ֵ
	Size--;//����-1
	for (Parent = 1; Parent * 2 > H->Size; Parent = Child) {//�Ӹ��ڵ������ж�
		Child = 2 * Parent;
		if (Child != H->Size && H->Elements[Child] < H->Elements[Child + 1]) {
			Child++;//Ϊ����Childʼ��ָ�����Ҷ����д����һ��
		}
		if (temp >= H->Elements[Child]) { //˵�����������ֵ���Ͳ���Ҫ�޸�
			break;
		} else { //�����Ҷ��Ӵ��һ��д�����ڵ���
			H->Elements[Parent] = H->Elements[Child];
		}
	}
	H->Elements[Parent] = temp;
	return MaxItem;
}

//��������
void PercDown(MaxHeap H, int p) {

	/*���ˣ���H����H->Data[p]Ϊ�����Ӷѵ���Ϊ����*/
	int  Parent,  Child;
	ElementType  X;

	X  =  H->Elements[p];
	/*ȡ��������ŵ�ֵ*/
	for (  Parent = p;  Parent * 2 <= H->Size;  Parent = Child  ) {
		Child  =  Parent  *  2;
		if ( (Child != H->Size)  &&  (H->Data[Child] < H->Data[Child + 1])  )
			Child++;
		/*Childָ�������ӽ��Ľϴ���*/
		if (  X  >=  H->Data[Child]  )
			break;
		/*�ҵ��˺���λ��*/
		else  /*����X*/
			H->Data[Parent]  =  H->Data[Child];

	}
	H->Data[Parent]  =  X;

}


int main() {


	return 0;
}
