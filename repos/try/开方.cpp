#include <bits/stdc++.h>
using namespace std;

bool s(long long x) {

	set<long long> t;
	int a = 0;
	if (x == 0)
		return false;
	while (x) {
		a = x % 10;
		t.insert(a);
		x /= 10;
	}
	return t.size() == 10;
}

int main() {
	long long a = 0;
	for (long long i = sqrt(9876543210); i >= sqrt(1026753849); i--) {
		if (s(i * i)) {
			cout << i *i;
			break;
		}
	}
	return 0;
}