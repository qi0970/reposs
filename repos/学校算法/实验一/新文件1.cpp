#include <bits/stdc++.h>
using namespace std;

void prime(int x) {
	bool tmp = true;
	if (x < 2) {
		cout << "不是素数";
	}
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			tmp = false;
			break;
		}
	}
	cout << "第一种方法" << endl;
	if (tmp) {
		cout << "是素数" << endl;
	} else {
		cout << "不是素数" << endl;
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
	cout << "请输入一个数：";
	cin >> a;
	prime(a);
	cout << "第二种方法" << endl;
	if (sushu(a)) {
		cout << "是素数";
	} else {
		cout << "不是素数";
	}
}
