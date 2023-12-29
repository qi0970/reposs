#include <iostream>
using namespace std;

int Fib(int x) {
	if (x == 1 || x == 2) {//第一次和
		return 1;
	} else
		return Fib(x - 1) + Fib(x - 2);//上一次和上上个的和
}

int main() {
	int x = 0;
	cout << "输入月份:";
	cin >> x;
	cout << "第" << x << "月有" << Fib(x) << "只兔子";
	return 0;
}
