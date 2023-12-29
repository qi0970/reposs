#include <stdio.h>
#include <stdlib.h>
#define MaxSize 20

struct QNode {
	int Data[MaxSize];
	int rear;//β
	int front;//ͷ
} ;
typedef struct QNode *Queue;

//��ʼ��
void InitQ(Queue PtrQ) {
	PtrQ->front = PtrQ->rear = 0;

}

//�����
void AddQ(Queue PtrQ, int item) {
	if ((PtrQ->rear + 1) % MaxSize == PtrQ->front) {
		printf("������");
		return;
	}
	PtrQ->rear = (PtrQ->rear + 1) % MaxSize;
	PtrQ->Data[PtrQ->rear] = item;
	printf("�ɹ�����\n");
}

//������
int DeleteQ(Queue PtrQ) {
	if (PtrQ->rear == PtrQ->front) {
		printf("���п�\n");
		return 0;
	} else {
		PtrQ->front = (PtrQ->front + 1) % MaxSize;
		return PtrQ->Data[PtrQ->front];
	}
}

int main() {
	Queue s = (Queue)malloc(sizeof(Queue));
	InitQ(s);
	AddQ(s, 1);
	AddQ(s, 9);
	AddQ(s, 100);
	int p = 0;
	p = DeleteQ(s);
	printf("%d\n", p);
	p = DeleteQ(s);
	printf("%d\n", p);
	p = DeleteQ(s);
	printf("%d\n", p);

	return 0;
}
