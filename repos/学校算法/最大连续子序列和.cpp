#include <iostream>
using namespace std;

int maxSubSum(int a[], int n) {
	int max = 0, tmp = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			tmp = 0;
			for (int k = i; k <= j; k++) {
				tmp += a[k];
				if (tmp > max) {
					max = tmp;
				}
			}
		}
	}
	return max;
}

int maxSubSum2(int a[], int n) {
	int max = 0, tmp = 0;
	for (int i = 0; i < n; i++) {
		tmp = 0;
		for (int j = i; j < n; j++) {
			tmp += a[j];
			if (tmp > max) {
				max = tmp;
			}
		}
	}
	return max;
}

int maxSubSum3(int a[], int n) {
	int max = 0, tmp = 0;
	for (int i = 0; i < n; i++) {
		tmp += a[i];
		if (tmp <= 0) {
			tmp = 0;
		}
		if (tmp > max) {
			max = tmp;
		}
	}
	return max;
}

int main() {
	int a[] = {-2, 11, -4, 13, -5, -2};
	int n = sizeof(a) / sizeof(a[0]);
	int b[] = {-6, 2, 4, -7, 5, 3, 2, -1, 6, -9, 10, -2};
	int m = sizeof(b) / sizeof(b[0]);
	int x = maxSubSum3(a, n);
	int y = maxSubSum3(b, m);
	cout << "a序列的最大连续子序列的和:" << x << endl;
	cout << "b序列的最大连续子序列的和:" << y;
	return 0;
}
