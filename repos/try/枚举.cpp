#include <iostream>
using namespace std;

enum num {
	I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000
};

int w(string s) {
	int an = 0;
	for (int i = s.size(); i > 0; i--) {
		num a = s[i - 1];
		num b = s[i]
		if (a < b) {
			s[i] = -s[i];
		}
		an = b + an;
		return an;
	}
//	return 0;
}

int main() {
	string s = "IV";
	int a = w(s);
	cout << a;
	cout << (int)s[1];
	return 0;
}
