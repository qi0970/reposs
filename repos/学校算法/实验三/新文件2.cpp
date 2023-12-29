#include <iostream>
using namespace std;

int tmp[100] = {};
void p(int a[], int &k, int &x) {
	tmp[k] = a[x];
	x++;
	k++;
}

void Merge(int a[], int low, int mid, int high) {

	int i = low, j = mid + 1, k = 0;
	while (i <= mid && j <= high) {
		if (a[i] < a[j]) {
			p(a, k, i);
		} else {
			p(a, k, j);
		}
	}
	while (i <= mid) {
		p(a, k, i);
	}
	while (j <= high) {
		p(a, k, j);
	}
	for (k = 0, i = low; i <= high; i++, k++) {
		a[i] = tmp[k];
	}
}

void MergeSort(int a[], int low, int high) {
	int mid;
	if (low < high) {
		mid = (low + high) / 2;
		MergeSort(a, low, mid);
		MergeSort(a, mid + 1, high);
		Merge(a, low, mid, high);
	}
}

int main() {
	int n = 0;
	cout << "请输入数组的个数;";
	cin >> n;
	int a[100] = {};
	cout << "请输入数组元素:";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	MergeSort(a, 0, n - 1);
	cout << "排序后:";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;

}
