#include <bits/stdc++.h>
using namespace std;

void huiw(string &a) {
	int h = a.size() - 1;
	int i = 0;
	bool tmp;
	while ( i < h) {
		if (a[i] != a[h]) {
			tmp = false;
		} else {
			tmp = true;

		}
		h--;
		i++;
	}
	if (tmp) {
		cout << "�ǻ���";
	} else {
		cout << "���ǻ���";
	}
}

int main() {
	string a;
	cin >> a;
	huiw(a);
	return 0;
}
