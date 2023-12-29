#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) {
		return a; // 当b等于0时，a即为最大公约数
	} else {
		return gcd(b, a % b); // 递归调用gcd函数，将b和a除以b的余数作为新的参数传入
	}
}

int main() {
	int x, y;
	cout << "Enter two numbers: ";
	cin >> x >> y;
	cout << "The greatest common divisor is: " << gcd(x, y);

	return 0;
}
