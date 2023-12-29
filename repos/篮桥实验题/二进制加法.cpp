#include <bits/stdc++.h>
using namespace std;

int main() {
	string a = {"1010"};
	string b = {"1011"};
	int al = a.size();
	int bl = b.size();
	while (al < bl) {
		a = a + '0';
		al++;
	}
	while (al > bl) {
		b = b + '0';
		al++;
	}
	for (int i = al - 1; i > 0; i--) {
		a[i] = a[i] - '0' + b[i];
		if (a[i] >= '2') {
			a[i] = (a[i] - '0') % 2 + '0';
			a[i - 1] = a[i - 1] + '1' - '0';
		}

	}
	for (int j = 0; j < a.size(); j++)
		cout << a[j];
	return 0;
}