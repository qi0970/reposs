struct Node {
	int Data;
	struct Node *Next;
};

struct QNode {
	struct Node *rear;
	struct Node *front;
};
typedef struct QNode *Queue;
Queue PtrQ;//头指针

//入队
void AddQ(Queue PtrQ, int item) {
	struct Node *s;
	s = (Node *)malloc(sizeof(struct Node));
	s->Data = item;
	s->Next = NULL;
	PtrQ->rear = PtrQ->(rear + 1);
	PtrQ->Data[PtrQ->rear] = item;
}


//出队
int DeleteQ(Queue PtrQ) {
	struct Node *FrontCell;
	int FrontElem;
	if (PtrQ->front == NULL) {
		printf("队列为空");
		return ERROR;
	}
	FrontCell = PtrQ->front;
	if (PtrQ->front == PtrQ->rear) {
		PtrQ->front = PtrQ->rear = NULL;
	} else {
		PtrQ->front = PtrQ->front->Next;
	}
	FromElem = FrontCell->Data;
	free(FrontCell);
	return FromElem;
}