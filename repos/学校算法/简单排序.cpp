#include <iostream>
using namespace std;

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void SelectSort(int a[], int n, int i) {
	if (i == n - 1) {
		return;
	}
	int k = i;
	for (int j = i + 1; j < n; j++) {
		if (a[j] < a[k]) {
			k = j;
		}
	}
	if (k != i) {
		swap(a[k], a[i]);
	}
	SelectSort(a, n, i + 1);
}

void BubbleSort(int a[], int n, int i) {
	int j = 0;
	bool exchange = false;
	if (i == n - 1)
		return;
	for (j = n - 1; j > i; j--) {
		if (a[j] < a[j - 1]) {
			swap(a[j], a[j - 1]);
			exchange = true;
		}
	}
	if (exchange) {
		BubbleSort(a, n, i + 1);
	} else
		return ;
}

int main() {
	int a[] = {2, 5, 1, 7, 10, 6, 9, 4, 3, 8};
	int n = sizeof(a) / sizeof(a[0]);
	int i = 0;
	//SelectSort(a, n, i);
	BubbleSort(a, n, i);
	for (auto i : a) {
		cout << i << " ";
	}
	cout << endl;
	return 0;
}
