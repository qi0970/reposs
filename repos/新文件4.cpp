#include <bits/stdc++.h>
using namespace std;

typedef int (*FUNC) (int, int);


int func1(int x, int y) {
	cout << "func�ӷ���";
	return x + y;
}

int func2(int x, int y) {
	cout << "func������";
	return x - y;
}

int func3(int x, int y) {
	cout << "func�ɷ���";
	return x * y;
}

int func4(int x, int y) {
	cout << "func������";
	return x / y;
}


int func(int x, int y, FUNC f) {
	return f(x, y);
}



int main() {
	int i = func1(3, 4);
	cout << i;
}
