//������ٷ���⣬��BF�㷨
#include <bits/stdc++.h>
using namespace std;

int BF(string a, string b) {
	int i = a.length();
	int j = b.length();
	int x = 0, y = 0;
	while (x < i && y < j) {
		if (a[x] == b[y]) {
			x++;
			y++;
		} else {
			x = x - y + 1;//x�˻ص�ԭ��i����һ��λ��
			y = 0;//�Ӵ���0�ض�
		}
	}
	if (y == j) {
		return x - y;
	} else {
		return -1;
	}
}

int main() {
	string a = "csabcnf";//
	string b = "abcnf";//�Ӵ�
	cout << BF(a, b);
	return 0;
}
