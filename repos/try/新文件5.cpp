#include <iostream>
using namespace std;

void p(int array) {
	long double num = 1;
	int i = 1;
	if (array == 0) {
		cout << "1";
	} else {
		for (i; i <= array; i++) {
			num = i * num;
		}
		cout << num << endl;
	}
}

int main() {
	int array = 0;
	cin >> array;
	p(array);
}