#include <bits/stdc++.h>

using namespace std;

void Sort(int left, int right, int v[]) {
	int tmp = v[left];
	int l = left;
	int r = right;
	if (left >= right)
		return;
	while (l < r) {
		while (l < r && v[l] <= tmp) {
			l++;
		}
		while (l < r && v[r] >= tmp) {
			r--;
		}
		if (l < r) {
			int res = v[l];
			v[l] = v[r];
			v[r] = res;
		}
	}
	v[left] = v[l];
	v[l] = tmp;
	Sort(left, l - 1, v);
	Sort(l + 1, right, v);
}

int main() {
	int a[] = {2, 3, 1, 6, 3, 7, 8, 9, 5, 6};

	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	Sort(0, 10, a);
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}

	return 0;
}
