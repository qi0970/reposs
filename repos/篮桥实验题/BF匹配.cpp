//采用穷举法求解，称BF算法
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
			x = x - y + 1;//x退回到原来i的下一个位置
			y = 0;//子串从0重读
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
	string b = "abcnf";//子串
	cout << BF(a, b);
	return 0;
}
