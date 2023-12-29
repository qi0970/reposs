//栈的链式存储结构实际上就是一个单链表，叫做链栈
//插入和删除操作只能在链栈的栈顶进行

//1.堆栈初始化（建立空栈）
//2.判断堆栈s是否为空
#include<stdio.h>
typedef struct SNode* Stack;
struct SNode {
	int Data;
	struct SNode* Next;
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
	return(s->Next == NULL);
}

//入栈、压栈
void Push(int item, Stack s) {/*将元素压入堆栈*/
	struct SNode* TmpCell;
	TmpCell = (Stack)malloc(sizeof(struct SNode));
	TmpCell->Data = item;
	TmpCell->Next = s->Next;
	s->Next = TmpCell;
}

//出栈
int Pop(Stack s) {/*删除并返回堆栈s的栈顶元素*/
	struct SNode* FirstCell;
	int TopElem;
	if (IsEmpty(s)) {
		printf("堆栈空");
		return NULL;
	}
	else {
		FirstCell = s->Next;
		s->Next = FirstCell->Next;
		TopElem = FirstCell->Data;
		free(FirstCell);
		return TopElem;
	}
}