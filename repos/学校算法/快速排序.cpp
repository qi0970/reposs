#include <iostream>
using namespace std;

int Partition(int a[], int s, int t) {
	int i = s;
	int j = t;
	int tmp = a[s];
	while (i != j) {
		while (j > i && a[j] >= tmp)
			j--;
		a[i] = a[j];
		while (i < j && a[i] <= tmp)
			i++;
		a[j] = a[i];
	}
	a[i] = tmp;
	return i;
}

void QuickSort(int a[], int s, int t) {
	if (s < t) {
		int i = Partition(a, s, t);
		QuickSort(a, s, i - 1);
		QuickSort(a, i + 1, t);
	}
}


int main() {
	int a[] = {2, 5, 1, 7, 10, 6, 9, 4, 3, 8};
	int n = sizeof(a) / sizeof(a[0]);
	int i = 0;
	QuickSort(a, i, n - 1);
	for (auto i : a) {
		cout << i << " ";
	}
	cout << endl;
	return 0;
}
