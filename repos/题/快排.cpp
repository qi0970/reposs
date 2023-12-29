#include <iostream>
using namespace std;

int Sort(int a[], int b, int e) {
	int tmp = a[*b];
	while (*e != *b) {
		while (*e < *b && a[*e] >= tmp) {
			*e--;
		}
		while (*e < *b && a[*b] <= tmp) {
			*b++;
		}
		a[*e] = a[*b];
	}
	a[*b] = tmp;
	return b;
}

void digui(int a[], int *b, int *e) {
	if (*b < *e) {
		int i = Sort(a, b, e);
		digui(a, b, i - 1);
		digui(a, i + 1, *e);
	}
}

int main() {
	int a[] = {2, 3, 1, 6, 3, 7, 8, 9, 5, 6};
	digui(a[], a, a + 10);
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}