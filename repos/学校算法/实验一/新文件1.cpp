#include <bits/stdc++.h>
using namespace std;

void prime(int x) {
	bool tmp = true;
	if (x < 2) {
		cout << "��������";
	}
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			tmp = false;
			break;
		}
	}
	cout << "��һ�ַ���" << endl;
	if (tmp) {
		cout << "������" << endl;
	} else {
		cout << "��������" << endl;
	}
}

bool sushu(int x) {
	if (x < 2) {
		return false;
	}
	int j = sqrt(x);
	for (int i = 2; i <= j; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int a = 0;
	cout << "������һ������";
	cin >> a;
	prime(a);
	cout << "�ڶ��ַ���" << endl;
	if (sushu(a)) {
		cout << "������";
	} else {
		cout << "��������";
	}
}
