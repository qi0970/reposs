#include <iostream>
using namespace std;

int Partition(int a[], int l, int r) {
	int tmp = a[l];
	while (l != r) {//����ָ�벻��ͬ
		while (l < r && a[r] >= tmp) {//����±�С���ұ߲����ұ�ֵ������ʱ����
			r--;//�ݼ�ֱ������С����ʱ�����ģ�����ѭ����
		}
		a[l] = a[r];//���ұߵ�ֵ�ŵ����
		while (l < r && a[l] <= tmp) {
			l++;
		}
		a[r] = a[l];
	}
	a[l] = tmp;//������ʱ������������
	return l;
}

void QuickSort(int a[], int l, int r) {
	if (l < r) {
		int i = Partition(a, l, r);
		QuickSort(a, l, i - 1);//�ȵݹ�����
		QuickSort(a, i + 1, r);
	}
}

int main() {
	int n = 0;
	cout << "����������ĸ���;";
	cin >> n;
	int a[100] = {};
	cout << "����������Ԫ��:";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	QuickSort(a, 0, n - 1);
	cout << "�����:";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
