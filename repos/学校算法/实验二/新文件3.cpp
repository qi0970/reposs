#include <bits/stdc++.h>
using namespace std;


bool huiW(const char *a, int left, int right) {//���飬��ʼλ�ã���ֹλ��
	if (left >= right) {//�ݹ���ڣ����Ϊ�վ�ֱ����
		return true;
	}
	if (a[left] == a[right]) {//�ݹ���
		return huiW(a, left + 1, right - 1);

	} else {
		return false;
	}
}

int main() {
	char a[100];
	cout << "�����룺";
	cin >> a;
	bool h = huiW(a, 0, strlen(a) - 1);
	if (h) {
		cout << "�ǻ���";
	} else {
		cout << "���ǻ���";
	}
	return 0;
}
