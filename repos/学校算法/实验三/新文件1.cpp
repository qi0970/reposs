#include <iostream>
using namespace std;

int Partition(int a[], int l, int r) {
	int tmp = a[l];
	while (l != r) {//左右指针不相同
		while (l < r && a[r] >= tmp) {//左边下标小于右边并且右边值大于临时变量
			r--;//递减直到遇到小于临时变量的，或者循环完
		}
		a[l] = a[r];//把右边的值放到左边
		while (l < r && a[l] <= tmp) {
			l++;
		}
		a[r] = a[l];
	}
	a[l] = tmp;//最后把临时变量存回最左边
	return l;
}

void QuickSort(int a[], int l, int r) {
	if (l < r) {
		int i = Partition(a, l, r);
		QuickSort(a, l, i - 1);//先递归左半边
		QuickSort(a, i + 1, r);
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
	QuickSort(a, 0, n - 1);
	cout << "排序后:";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
