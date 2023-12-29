#include <bits/stdc++.h>
using namespace std;
template<typename T>//Ä£°å

void p(T &a, T &b) {
	if (a > b) {
		cout << a;
	} else {
		cout << b;
	}
}

int main() {
	float a, b;
	cin >> a;
	cin >> b;

	cout << "a:" << a << endl << "b:" << b << endl;
	p(a, b);
	return 0;
}