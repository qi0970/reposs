#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef struct LNode *List;

struct LNode {
	int Data;
	List Next;
} ;
struct LNode L;
List PtrL;

//创建链表
List createList() {
	int len;
	int val;
	List p = (List)malloc(sizeof(struct LNode));
	if (p == NULL) {
		printf("分配内存失败\n");
		exit(-1);//终止程序
	}
	List pr = p; //pr指向头结点
	pr->Next = NULL;
	printf("请输入节点个数:");
	scanf("%d", &len);
	for (int i = 0; i < len; i++) {
		List pn = (List)malloc(sizeof(struct LNode));
		printf("第%d个节点数是：", i + 1);
		scanf("%d", &val);
		if (pn == NULL) {
			printf("分配内存失败\n");
			exit(-1);
		}
		pn->Data = val;
		pr->Next = pn;
		pn->Next = NULL;
		pr = pn;
	}
	return p;
}

//遍历
void traversrList(List PtrL) {
	List p = PtrL->Next;
	while (p != NULL) {
		printf("%d", p->Data);
		p = p->Next;
	}
	printf("\n");
	return;
}

//表长
int Length(List PtrL) {
	List p = PtrL;
	int j = -1;
	while (p) {
		p = p->Next;
		j++;
	}
	return j;
}

//按序号查询
List FindKth(int K, List PtrL) {
	List p = PtrL;//p为临时变量，设为表头
	int i = 0;
	while (p != NULL && i < K) {
		p = p->Next;
		i++;
	}
	if (i == K)
		return p;//找到第K个，返回指针
	else
		return NULL;//否则返回空
}

//按值查找安排
List Find(int x, List PtrL) {
	List p = PtrL;
	while (p != NULL && p->Data != x)
		p = p->Next;
	return p;
}

//插入
List Insert(int x, int i, List PtrL) {
	List s, p;//创建两个链表
	if (i == 1) {/*新节点插在表头上*/
		s = (List)malloc(sizeof(struct LNode));
		s->Data = x;
		s->Next = PtrL;
		return s;//返回头指针
	}
	p = FindKth(i - 1, PtrL);//查找第i-1个结点
	if (p = NULL) {
		printf("位置有误");
		return NULL;
	} else {
		s = (List)malloc(sizeof(struct LNode));
		s->Data = x;
		s->Next = p->Next;//新结点插在第i-1个结点后面
		p->Next = s;
		return PtrL;
	}
}

//删除
List Delete(int i, List PtrL) {
	List p, s;
	if (i == 1) {
		s = PtrL;
		if (PtrL != NULL) {
			PtrL = PtrL->Next;
		} else
			return NULL;
		free(s);
		return PtrL;
	}
	p = FindKth(i - 1, PtrL);
	if (p == NULL) {
		printf("第%d结点不存在", i - 1);
		return NULL;
	} else if (p->Next == NULL) {
		printf("第%d结点不存在", i - 1);
	} else {
		s = p->Next;
		p->Next = s->Next;//s指向第i个结点
		free(s);
		return PtrL;
	}
}

int main() {
	List p = NULL;
	p = createList();
	traversrList(p);
	int len = Length(p);
	printf("链表长度:%d\n", len);
//	int pos = 0;
//	printf("请输入想要删除的位置:\n");
//	scanf("%d", pos);
//	List i = Delete(pos, PtrL);
//	traversrList(i);
	return 0;
}
