//递归遍历树
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

//创建头结点
Stack CreateStack() {/*构建一个头结点，返回指针*/
	Stack s;
	s = (Stack)malloc(sizeof(struct SNode));
	s->Next = NULL;
	return s;
}

//判断是否为空，空输出1
int IsEmpty(Stack s) {
	return (s->Next == NULL);
}

//入栈、压栈
void Push(BinTree *item, Stack s) {/*将元素压入堆栈*/
	struct SNode *TmpCell;
	TmpCell = (Stack)malloc(sizeof(struct SNode));
	TmpCell->Data = item;
	TmpCell->Next = s->Next;
	s->Next = TmpCell;
}

//出栈
BinTree *Pop(Stack s) {/*删除并返回堆栈s的栈顶元素*/
	struct SNode *FirstCell;
	BinTree *TopElem;
	if (IsEmpty(s)) {
		printf("堆栈空");
		return NULL;
	} else {
		FirstCell = s->Next;
		s->Next = FirstCell->Next;
		TopElem = FirstCell->Data;
		free(FirstCell);
		return TopElem;
	}
}



//先序遍历
void PerOrderTravesal(BinTree *T) {
	if (T == NULL) {
		return ;
	}
	cout << T->Data << " ";
	PerOrderTravesal(T->Left);
	PerOrderTravesal(T->Right);

}

//中序遍历
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



//后序遍历
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
	//创建节点

	BinTree T = {'A', NULL, NULL};
	BinTree node2 = {'B', NULL, NULL};
	BinTree node3 = {'C', NULL, NULL};
	BinTree node4 = {'D', NULL, NULL};
	BinTree node5 = {'E', NULL, NULL};
	BinTree node6 = {'F', NULL, NULL};
	BinTree node7 = {'G', NULL, NULL};
	BinTree node8 = {'H', NULL, NULL};
	//建立节点关系
	T.Left = &node2;
	T.Right = &node6;
	node2.Right = &node3;
	node3.Left = &node4;
	node3.Right = &node5;
	node6.Right = &node7;
	node7.Left = &node8;
	cout << "先序遍历" << endl;
	PerOrderTravesal(&T);
	cout << endl;
	cout << "中序遍历" << endl;
	InOrderTravesal2(&T);
	cout << endl;
	cout << "后序遍历" << endl;
	PostOrderTravesal(&T);
	cout << endl;
//	cout << "层次遍历" << endl;
//	LevelOrderTraversal(&T);
//	cout << endl;
	cout << "子节点个数" << endl;
	zi(&T) ;
	cout << endl;
	cout << "树高" << endl;
	cout << hight(&T) << endl;

}

int main() {
	createTree();
	return 0;
}