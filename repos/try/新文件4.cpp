#include <bits/stdc++.h>
using namespace std;

void p(int &a, int &b) {
	int i, j, num;
	if (a > b) {
		i = b;
		j = a;
	} else {
		i = a;
		j = b;
	}
	for (i; i <= j; i++) {
		num += i;
	}
	cout << num;
}

int main() {
	int a, b;
	cin >> a;
	cin >> b;
	p(a, b);
}