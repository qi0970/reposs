#include <iostream>
using namespace std;

int gongY(int x, int y) {
	if (y == 0) {//递归出口

		return x;
	} else
		return gongY(y, (x % y));//第一个数为第二个，第二个数为x除以y
}

int main() {
	int x = 0, y = 0;
	cout << "输入两个数:";
	cin >> x >> y;
	cout << "最大公约数为：" << gongY(x, y);

	return 0;
}
