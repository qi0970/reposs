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
	sem->semaphore = CreateSemaphore(NULL, 0, 30, NULL); // 设置初始信号量为教室座位数目
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
	if (sem->value <= 30) { // 有座位时唤醒等待的同学
		ReleaseSemaphore(sem->semaphore, 1, NULL);
	}
	ReleaseMutex(sem->mutex);
}

void student(Semaphore *sem) {
	P(sem);
	printf("学生进入教室\n");
	Sleep(1000); // 模拟学生自习
	printf("学生离开教室\n");
	V(sem);
}

int main() {
	Semaphore sem;
	initSemaphore(&sem, 30);

	HANDLE studentThreads[5]; // 用于存储学生线程的句柄

	int i;
	for (i = 0; i < 5; i++) {
		studentThreads[i] = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)student, &sem, 0, NULL);
	}

	WaitForMultipleObjects(5, studentThreads, TRUE, INFINITE); // 等待所有学生线程结束

	return 0;
}