#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[3] = {};
	int b, i = 0;
	for (i = 0; i < 3; i++) {
		b++;
		cout << "�������" << b << "��40���ܲ��ɼ�:";
		cin >> a[i];

	}
	double num = (double)(a[0] + a[1] + a[2]) / b;
	cout << "����Ϊ��" << b << endl;
	cout << "ƽ���ɼ�Ϊ��" << num;
}