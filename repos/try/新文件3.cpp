#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[3] = {};
	int b, i = 0;
	for (i = 0; i < 3; i++) {
		b++;
		cout << "请输入第" << b << "次40米跑步成绩:";
		cin >> a[i];

	}
	double num = (double)(a[0] + a[1] + a[2]) / b;
	cout << "次数为：" << b << endl;
	cout << "平均成绩为：" << num;
}