#include <bits/stdc++.h>
using namespace std;

int main() {
	auto item = make_tuple("1234", 5, 80);
	auto book = get<0>(item);
	cout << book;

	return 0;
}
