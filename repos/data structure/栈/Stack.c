//˳��洢

#define MaxSize 20

typedef struct SNode *Stack;

struct SNode {
	int Data[MaxSize];
	int Top;//top��ʾջ����λ�á����������±ꡣtop=-1,��ʾջ��
};

//1.��ջ
void Push(Stack PtrS, int item) { /*PtrS�ǽṹָ��*/
	if (PtrS->Top == MaxSize - 1) {
		printf("ջ��");
		return;
	} else {
		PtrS->Data[++(PtrS->Top)] = item;
		return;
	}
}

//2.��ջ
void Pop(Stack PtrS) {
	if (PtrS->Top == -1) {
		printf("ջ��");
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