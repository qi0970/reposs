#include <bits/stdc++.h>
using namespace std;

void p(int a) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a - i - 1; j++) {
			cout << ".";
		}
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}

}

int main() {
	int a = 0;
	cin >> a;
	p(a);
	return 0;
}