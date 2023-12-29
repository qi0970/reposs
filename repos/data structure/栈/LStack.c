//ջ����ʽ�洢�ṹʵ���Ͼ���һ��������������ջ
//�����ɾ������ֻ������ջ��ջ������

//1.��ջ��ʼ����������ջ��
//2.�ж϶�ջs�Ƿ�Ϊ��
#include<stdio.h>
typedef struct SNode* Stack;
struct SNode {
	int Data;
	struct SNode* Next;
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
	return(s->Next == NULL);
}

//��ջ��ѹջ
void Push(int item, Stack s) {/*��Ԫ��ѹ���ջ*/
	struct SNode* TmpCell;
	TmpCell = (Stack)malloc(sizeof(struct SNode));
	TmpCell->Data = item;
	TmpCell->Next = s->Next;
	s->Next = TmpCell;
}

//��ջ
int Pop(Stack s) {/*ɾ�������ض�ջs��ջ��Ԫ��*/
	struct SNode* FirstCell;
	int TopElem;
	if (IsEmpty(s)) {
		printf("��ջ��");
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