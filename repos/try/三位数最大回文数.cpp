#include <bits/stdc++.h>
using namespace std;

bool h(int x) {
	int a[7] = {};
	int n = 0;
	while (x > 0) {
		a[n] = x % 10;
		x /= 10;
		n++;
	}
	int i = 0, j = n - 1;
	while (i <= j) {
		if (a[i] == a[j]) {
			i++;
			j--;
		} else
			return false;
	}
	return true;
}

int main() {
	int num = 0;
	for (int i = 999; i > 99; i--) {
		for (int j = 999; j > 99; j--) {
			int x = i * j;
			if (h(x)) {
				if (num < x) {
					num = x;
					break;
				}
			}
		}
	}
	cout << num ;

	return 0;
}