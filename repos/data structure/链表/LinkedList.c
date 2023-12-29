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

//��������
List createList() {
	int len;
	int val;
	List p = (List)malloc(sizeof(struct LNode));
	if (p == NULL) {
		printf("�����ڴ�ʧ��\n");
		exit(-1);//��ֹ����
	}
	List pr = p; //prָ��ͷ���
	pr->Next = NULL;
	printf("������ڵ����:");
	scanf("%d", &len);
	for (int i = 0; i < len; i++) {
		List pn = (List)malloc(sizeof(struct LNode));
		printf("��%d���ڵ����ǣ�", i + 1);
		scanf("%d", &val);
		if (pn == NULL) {
			printf("�����ڴ�ʧ��\n");
			exit(-1);
		}
		pn->Data = val;
		pr->Next = pn;
		pn->Next = NULL;
		pr = pn;
	}
	return p;
}

//����
void traversrList(List PtrL) {
	List p = PtrL->Next;
	while (p != NULL) {
		printf("%d", p->Data);
		p = p->Next;
	}
	printf("\n");
	return;
}

//��
int Length(List PtrL) {
	List p = PtrL;
	int j = -1;
	while (p) {
		p = p->Next;
		j++;
	}
	return j;
}

//����Ų�ѯ
List FindKth(int K, List PtrL) {
	List p = PtrL;//pΪ��ʱ��������Ϊ��ͷ
	int i = 0;
	while (p != NULL && i < K) {
		p = p->Next;
		i++;
	}
	if (i == K)
		return p;//�ҵ���K��������ָ��
	else
		return NULL;//���򷵻ؿ�
}

//��ֵ���Ұ���
List Find(int x, List PtrL) {
	List p = PtrL;
	while (p != NULL && p->Data != x)
		p = p->Next;
	return p;
}

//����
List Insert(int x, int i, List PtrL) {
	List s, p;//������������
	if (i == 1) {/*�½ڵ���ڱ�ͷ��*/
		s = (List)malloc(sizeof(struct LNode));
		s->Data = x;
		s->Next = PtrL;
		return s;//����ͷָ��
	}
	p = FindKth(i - 1, PtrL);//���ҵ�i-1�����
	if (p = NULL) {
		printf("λ������");
		return NULL;
	} else {
		s = (List)malloc(sizeof(struct LNode));
		s->Data = x;
		s->Next = p->Next;//�½����ڵ�i-1��������
		p->Next = s;
		return PtrL;
	}
}

//ɾ��
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
		printf("��%d��㲻����", i - 1);
		return NULL;
	} else if (p->Next == NULL) {
		printf("��%d��㲻����", i - 1);
	} else {
		s = p->Next;
		p->Next = s->Next;//sָ���i�����
		free(s);
		return PtrL;
	}
}

int main() {
	List p = NULL;
	p = createList();
	traversrList(p);
	int len = Length(p);
	printf("������:%d\n", len);
//	int pos = 0;
//	printf("��������Ҫɾ����λ��:\n");
//	scanf("%d", pos);
//	List i = Delete(pos, PtrL);
//	traversrList(i);
	return 0;
}
