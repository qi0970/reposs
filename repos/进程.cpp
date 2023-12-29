#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct {
	int value;
	HANDLE mutex;
	HANDLE semaphore;
} Semaphore;

void initSemaphore(Semaphore *sem, int initialValue) {
	sem->value = initialValue;
	sem->mutex = CreateMutex(NULL, FALSE, NULL);
	sem->semaphore = CreateSemaphore(NULL, 0, 30, NULL); // ���ó�ʼ�ź���Ϊ������λ��Ŀ
}

void P(Semaphore *sem) {
	WaitForSingleObject(sem->mutex, INFINITE);
	sem->value--;
	if (sem->value < 0) {
		ReleaseMutex(sem->mutex);
		WaitForSingleObject(sem->semaphore, INFINITE);
	} else {
		ReleaseMutex(sem->mutex);
	}
}

void V(Semaphore *sem) {
	WaitForSingleObject(sem->mutex, INFINITE);
	sem->value++;
	if (sem->value <= 30) { // ����λʱ���ѵȴ���ͬѧ
		ReleaseSemaphore(sem->semaphore, 1, NULL);
	}
	ReleaseMutex(sem->mutex);
}

void student(Semaphore *sem) {
	P(sem);
	printf("ѧ���������\n");
	Sleep(1000); // ģ��ѧ����ϰ
	printf("ѧ���뿪����\n");
	V(sem);
}

int main() {
	Semaphore sem;
	initSemaphore(&sem, 30);

	HANDLE studentThreads[5]; // ���ڴ洢ѧ���̵߳ľ��

	int i;
	for (i = 0; i < 5; i++) {
		studentThreads[i] = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)student, &sem, 0, NULL);
	}

	WaitForMultipleObjects(5, studentThreads, TRUE, INFINITE); // �ȴ�����ѧ���߳̽���

	return 0;
}