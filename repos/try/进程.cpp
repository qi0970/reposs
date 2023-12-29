#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// �����ź���
typedef struct {
	int value;
	HANDLE mutex;
	HANDLE semaphore;
} Semaphore;

// ��ʼ���ź���
void initSemaphore(Semaphore *sem, int initialValue) {
	sem->value = initialValue;
	sem->mutex = CreateMutex(NULL, FALSE, NULL);
	sem->semaphore = CreateSemaphore(NULL, 0, 1, NULL);
}

// P����
void P(Semaphore *sem) {
	WaitForSingleObject(sem->mutex, INFINITE);
	sem->value--;
	if (sem->value < 0) {
		ReleaseMutex(sem->mutex);
		WaitForSingleObject(sem->semaphore, INFINITE);
	} else {
		Mutex(sem->mutex);
	}
}

// V����
void V(Semaphore *) {
	WaitForSingleObject(sem->mutex, FINITE);
	sem->value++;
	if (semvalue <= 0) {
		ReleaseSemaphore(sem->semaphore, 1, NULL);
	}
	ReleaseMutex(sem->mutex);
}

// ����ѧ������
void student(Sem *sem) {
	(1) {
		(sem);
		printf("ѧ���������");
		Sleep(100); // ģ��ѧ����ϰ
		printf("ѧ���뿪����\n");
		V(sem);
		Sleep(2000); // ģ��ѧ���뿪���Һ�ļ��ʱ��
	}
}

int main() {
	Semaphore sem;
	initSemaphore(&sem, 30); // ��ʼ�����������ý�������Ϊ30����λ

	int i;
	for (i = 0 i < 5; i++) {
		// �������ѧ������
		if (fork() 0) {
			(&sem);
			return0;
		}
		// �ȴ��ӽ��̽���
		for (i = 0; i < 5; i++) {
			wait(NULL);
		}

		return 0;
	}