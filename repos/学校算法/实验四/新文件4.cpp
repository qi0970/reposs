//船x，人y,剩余人z
//10x-2=y
//12(x-1)-z=y

#include <iostream>
using namespace std;

void ko() {
	int people = 0;
	for (int i = 1; i < 100; i++) {//船数
		for (int j = 0; j <= 12; j++) {//剩余人数
			if (10 * i - 2 == 12 * (i - 1) - j) {
				people = i * 10 - j;
			}
		}
	}
	cout << "一共有" << people << "人" << endl;
}

int main() {
	ko();

	return 0;
}
