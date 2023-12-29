#include <iostream>
using namespace std;

void swap(int &x, int &y) {
	int tmp = x;
	x = y;
	y = tmp;
}

void print(int a[], int n) {
	cout << "排序后：";
	for (int i = 0; i < n; i++) {//循环输出
		cout << a[i] << " ";
	}
	cout << endl;
}

void BubbleSort(int a[], int n, int i) {//冒泡排序
	int j;
	bool exchange;//判断是否还要继续
	if (i == n - 1)
		return;
	else {
		exchange = false;
		for (j = n - 1; j > i; j--) {
			if (a[j] < a[j - 1]) {//如果下一个比这个大就交换
				swap(a[j], a[j - 1]);
				exchange = true;
			}
		}
		if (exchange) {//有交换就继续递归
			BubbleSort(a, n, i + 1);
		} else {
			return;
		}
	}

}

void Sort(int a[], int len, int x) {//循环排序
	if (x == len - 1)
		return;
	int k = x;
	for (int i = x + 1; i < len; i++) {
		if (a[k] > a[i]) {//k中存最小的下标
			k = i;
		}
	}
	if (k != x) {//不等于开始就交换
		swap(a[k], a[x]);
	}
	Sort(a, len, x + 1);
}

int main() {
	int n = 0;
	int a[100];
	cout << "请输入个数:";
	cin >> n;
	cout << "请输入数组:";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	BubbleSort(a, n, 0);//传数组，数组个数，起始位置
	Sort(a, n, 0);
	print(a, n);
	return 0;
}
