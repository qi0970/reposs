#include <iostream>
using namespace std;

int metdon(int a[], int n) {
	int i, j, count = 0;
	for (i = 0; i < n; i++) {
		for (j = n - 1; j > i; j--) {
			if (i < j && a[i] > a[j]) {
				count++;
			}
		}
	}
	return count;
}

int main() {
	int count, n = 0;
	cout << "输入个数:";
	cin >> n;
	int a[100] = {};
	cout << "输入数组:";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	count = metdon(a, n);
	cout << "有" << count << "个逆序对";
	return 0;
}
