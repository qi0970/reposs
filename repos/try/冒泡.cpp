
#include <bits/stdc++.h>
using namespace std;

void a(int data[]) {
	int i = 5;

	for (i; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (data[j] > data[j + 1]) {
				int tmp;
				tmp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = tmp;
			}
		}
		cout << "��" << 6 - i << "����������ǣ�";
		for (int j = 0; j < 6; j++) {
			cout << setw(3) <<
			     data[j];//setw(int n)�����ʱ��ȣ����Խ����ŵ������Ч����һ���ؼ������Ĭ��ֵ���������ı�n�ٲ��ո񣬷���ȫ�����
		}
		cout << endl;
	}
	cout << "��������Ϊ��";
	for (int i = 0; i < 6; i++) {
		cout << setw(3) << data[i];
	}
	cout << endl;
}

int main() {
	int data[6] = {6, 5, 9, 7, 2, 8,};
	cout << "ð������ \nԭʼ����Ϊ��";
	for (int i = 0; i < 6; i++) {
		cout << setw(3) << data[i];
	}
	cout << endl;
	a(data);
	return 0;
}