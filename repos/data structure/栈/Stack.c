//顺序存储

#define MaxSize 20

typedef struct SNode *Stack;

struct SNode {
	int Data[MaxSize];
	int Top;//top表示栈顶的位置、他的数组下标。top=-1,表示栈空
};

//1.入栈
void Push(Stack PtrS, int item) { /*PtrS是结构指针*/
	if (PtrS->Top == MaxSize - 1) {
		printf("栈满");
		return;
	} else {
		PtrS->Data[++(PtrS->Top)] = item;
		return;
	}
}

//2.出栈
void Pop(Stack PtrS) {
	if (PtrS->Top == -1) {
		printf("栈空");
		return;
	}
	return (PtrS->Data[(PtrS->Top)--]);
}
BinTree *BT = T;
Stack s = CreateStack();

while (BT || !IsEmpty(s)) {
	while (BT) {

		Push(BT, s);
		BT = BT->Left;
	}
	if (!IsEmpty(s)) {
		BT = Pop(s);
		cout << BT->Data << " ";
		BT = BT->Right;

	}
}