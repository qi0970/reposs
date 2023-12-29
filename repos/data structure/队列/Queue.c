#include <stdio.h>
#include <stdlib.h>
#define MaxSize 20

struct QNode {
	int Data[MaxSize];
	int rear;//尾
	int front;//头
} ;
typedef struct QNode *Queue;

//初始化
void InitQ(Queue PtrQ) {
	PtrQ->front = PtrQ->rear = 0;

}

//入队列
void AddQ(Queue PtrQ, int item) {
	if ((PtrQ->rear + 1) % MaxSize == PtrQ->front) {
		printf("队列满");
		return;
	}
	PtrQ->rear = (PtrQ->rear + 1) % MaxSize;
	PtrQ->Data[PtrQ->rear] = item;
	printf("成功输入\n");
}

//出队列
int DeleteQ(Queue PtrQ) {
	if (PtrQ->rear == PtrQ->front) {
		printf("队列空\n");
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
