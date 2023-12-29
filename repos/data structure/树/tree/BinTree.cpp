//�ݹ������
#include <bits/stdc++.h>

using namespace std;
#define MaxSize 20

//typedef struct TreeNode *BinTree;
//typedef BinTree Position;
//
//struct TreeNode {
//	char Data;
//	BinTree Left;
//	BinTree Right;
//};
class BinTree {
	public:
		char Data;
		BinTree *Left;
		BinTree *Right;
};

typedef struct SNode *Stack;

struct SNode {
	BinTree *Data;
	struct SNode *Next;
};

//����ͷ���
Stack CreateStack() {/*����һ��ͷ��㣬����ָ��*/
	Stack s;
	s = (Stack)malloc(sizeof(struct SNode));
	s->Next = NULL;
	return s;
}

//�ж��Ƿ�Ϊ�գ������1
int IsEmpty(Stack s) {
	return (s->Next == NULL);
}

//��ջ��ѹջ
void Push(BinTree *item, Stack s) {/*��Ԫ��ѹ���ջ*/
	struct SNode *TmpCell;
	TmpCell = (Stack)malloc(sizeof(struct SNode));
	TmpCell->Data = item;
	TmpCell->Next = s->Next;
	s->Next = TmpCell;
}

//��ջ
BinTree *Pop(Stack s) {/*ɾ�������ض�ջs��ջ��Ԫ��*/
	struct SNode *FirstCell;
	BinTree *TopElem;
	if (IsEmpty(s)) {
		printf("��ջ��");
		return NULL;
	} else {
		FirstCell = s->Next;
		s->Next = FirstCell->Next;
		TopElem = FirstCell->Data;
		free(FirstCell);
		return TopElem;
	}
}



//�������
void PerOrderTravesal(BinTree *T) {
	if (T == NULL) {
		return ;
	}
	cout << T->Data << " ";
	PerOrderTravesal(T->Left);
	PerOrderTravesal(T->Right);

}

//�������
void InOrderTravesal(BinTree *T) {
	if (T == NULL) {
		return ;
	}
	InOrderTravesal(T->Left);
	cout << T->Data << " ";
	InOrderTravesal(T->Right);

}

void InOrderTravesal2(BinTree *T) {
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
}



//�������
void PostOrderTravesal(BinTree *T) {

	if (T == NULL) {
		return ;
	}
	PostOrderTravesal(T->Left);
	PostOrderTravesal(T->Right);
	cout << T->Data << " ";

}

//void LevelOrderTraversal(BinTree *T) {
//	queue<BinTree *>q;
//	BinTree *BT;
//	if (!BT)
//		return;
//	q.push(BT);
//	while (!q.empty()) {
//		BT = q.back();
//		q.pop();
//		cout << q.empty() << " ";
//		cout << BT->Data;
//		if (BT->Left != NULL)
//			q.push(BT->Left);
//		if (BT->Right != NULL)
//			q.push(BT->Right);
//	}
//}

void zi(BinTree *T) {
	if (T == NULL) {
		return ;
	}
	if (T) {
		if (!T->Left && !T->Right)
			cout << T->Data << " ";
		zi(T->Left);
		zi(T->Right);
	}
}

int hight(BinTree *T) {
	int lh, rh, h;
	if (T == NULL) {
		return 0 ;
	} else {

		lh = hight(T->Left);
		rh = hight(T->Right);
		h = (lh > rh) ? lh : rh;
		return (h + 1) ;
	}
}

void createTree() {
	//�����ڵ�

	BinTree T = {'A', NULL, NULL};
	BinTree node2 = {'B', NULL, NULL};
	BinTree node3 = {'C', NULL, NULL};
	BinTree node4 = {'D', NULL, NULL};
	BinTree node5 = {'E', NULL, NULL};
	BinTree node6 = {'F', NULL, NULL};
	BinTree node7 = {'G', NULL, NULL};
	BinTree node8 = {'H', NULL, NULL};
	//�����ڵ��ϵ
	T.Left = &node2;
	T.Right = &node6;
	node2.Right = &node3;
	node3.Left = &node4;
	node3.Right = &node5;
	node6.Right = &node7;
	node7.Left = &node8;
	cout << "�������" << endl;
	PerOrderTravesal(&T);
	cout << endl;
	cout << "�������" << endl;
	InOrderTravesal2(&T);
	cout << endl;
	cout << "�������" << endl;
	PostOrderTravesal(&T);
	cout << endl;
//	cout << "��α���" << endl;
//	LevelOrderTraversal(&T);
//	cout << endl;
	cout << "�ӽڵ����" << endl;
	zi(&T) ;
	cout << endl;
	cout << "����" << endl;
	cout << hight(&T) << endl;

}

int main() {
	createTree();
	return 0;
}