#include <iostream>
using namespace std;

void mt() {
	int b, s, g;

	for (int i = 100; i < 1000; i++) {
		b = i / 100;//百位
		s = i / 10 % 10;//十位
		g = i % 10;//各位
		if (g > b && b > s && (g + s + b == g * s * b)) {
			//条件各位大于百位，百位大于十位，位数相加=位数之和
			cout << "满足条件的数为：" << b * 100 + s * 10 + g << endl;
		}
	}
}

int main() {
	mt();

	return 0;
}
