#include <iostream>
using namespace std;

int cif(int x, int n) {
	if (n == 1) {
		return x;
	} else {
		return x * cif(x, n - 1);
	}

}

double myPow(double x, int n) {
	if (n == 0) {
		return 1.0; // 当n为0时值都为1
	}
	if (n < 0) {
		x = 1 / x; // 当n为负数时，求x的-n次方等价于求1/x的n次方
		n = -n; // 将n转换为正数
	}
	double half = myPow(x, n / 2); // 递归求解x的n/2次方
	if (n % 2 == 0) {
		return half * half; // 当n为偶数时，x的n次方等于x的n/2次方*x的n/2次方
	} else {
		return half * half * x; // 当n为奇数时，x的n次方等于x的n/2次方*x的n/2次方*x
	}
}

int main() {
	int x, x1, n, res;
	cout << "输入x：";
	cin >> x;
	cout << "输入次方:";
	cin >> n;
	cout << "输入1 使用递归方法。" << endl << "输入2 使用二分法。" << endl;
	cin >> x1;
	if (x == 1) {
		res = cif(x, n);
	} else if (x == 2)
		res = myPow(x, n);
	cout << res;

	return 0;
}
