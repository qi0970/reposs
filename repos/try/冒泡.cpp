
#include <bits/stdc++.h>
using namespace std;

void a(int data[]) {
	int i = 5;

	for (i; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (data[j] > data[j + 1]) {
				int tmp;
				tmp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = tmp;
			}
		}
		cout << "第" << 6 - i << "次排序后结果是：";
		for (int j = 0; j < 6; j++) {
			cout << setw(3) <<
			     data[j];//setw(int n)是输出时宽度，仅对紧挨着的输出有效，下一个回继续变成默认值，如果输出的比n少补空格，否则全输出。
		}
		cout << endl;
	}
	cout << "排序完结果为：";
	for (int i = 0; i < 6; i++) {
		cout << setw(3) << data[i];
	}
	cout << endl;
}

int main() {
	int data[6] = {6, 5, 9, 7, 2, 8,};
	cout << "冒泡排序： \n原始数据为：";
	for (int i = 0; i < 6; i++) {
		cout << setw(3) << data[i];
	}
	cout << endl;
	a(data);
	return 0;
}