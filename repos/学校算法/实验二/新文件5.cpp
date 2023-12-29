#include <iostream>
using namespace std;

void swap(int &x, int &y) {
	int tmp = x;
	x = y;
	y = tmp;
}

void print(int a[], int n) {
	cout << "�����";
	for (int i = 0; i < n; i++) {//ѭ�����
		cout << a[i] << " ";
	}
	cout << endl;
}

void BubbleSort(int a[], int n, int i) {//ð������
	int j;
	bool exchange;//�ж��Ƿ�Ҫ����
	if (i == n - 1)
		return;
	else {
		exchange = false;
		for (j = n - 1; j > i; j--) {
			if (a[j] < a[j - 1]) {//�����һ���������ͽ���
				swap(a[j], a[j - 1]);
				exchange = true;
			}
		}
		if (exchange) {//�н����ͼ����ݹ�
			BubbleSort(a, n, i + 1);
		} else {
			return;
		}
	}

}

void Sort(int a[], int len, int x) {//ѭ������
	if (x == len - 1)
		return;
	int k = x;
	for (int i = x + 1; i < len; i++) {
		if (a[k] > a[i]) {//k�д���С���±�
			k = i;
		}
	}
	if (k != x) {//�����ڿ�ʼ�ͽ���
		swap(a[k], a[x]);
	}
	Sort(a, len, x + 1);
}

int main() {
	int n = 0;
	int a[100];
	cout << "���������:";
	cin >> n;
	cout << "����������:";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	BubbleSort(a, n, 0);//�����飬�����������ʼλ��
	Sort(a, n, 0);
	print(a, n);
	return 0;
}
