#include <iostream>
using namespace std;

int main() {
	int num = 0;
	for (int i = 0; i < 5; i++) {
		num += i;
		cout << i << endl;
	}
	cout << num << endl;

	return 0;
}
