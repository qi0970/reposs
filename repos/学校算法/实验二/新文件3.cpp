#include <bits/stdc++.h>
using namespace std;


bool huiW(const char *a, int left, int right) {//数组，起始位置，终止位置
	if (left >= right) {//递归出口，如果为空就直接是
		return true;
	}
	if (a[left] == a[right]) {//递归体
		return huiW(a, left + 1, right - 1);

	} else {
		return false;
	}
}

int main() {
	char a[100];
	cout << "请输入：";
	cin >> a;
	bool h = huiW(a, 0, strlen(a) - 1);
	if (h) {
		cout << "是回文";
	} else {
		cout << "不是回文";
	}
	return 0;
}
