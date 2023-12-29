#include <bits/stdc++.h>
using namespace std;

string weekday[7] = {"Monday", "Tuesday", "Wednesday", "Thurday", "Firday", "Saturday", "Sunday"};

int w(int y, int m, int d) {//返回正确的星期，
	int ans = 0;
	for (int i = 1; i < y; i++) {
		bool r = (i % 100 != 0 && i % 4 == 0) || i % 400 == 0;
		if (r) {
			ans += 366 % 7;
			ans %= 7;
		} else {
			ans += 365 % 7;
			ans %= 7;
		}
	}
	for (int i = 1; i < m; i++) {
		bool r = (i % 100 != 0 && i % 4 == 0) || i % 400 == 0;
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
			ans += 31 % 7;
			ans %= 7;
		} else if (i == 4 || i == 6 || i == 9 || i == 11) {
			ans += 30 % 7;
			ans %= 7;
		} else if (r) {
			ans += 29 % 7;
			ans %= 7;
		} else {
			ans += 28 % 7;
			ans %= 7;
		}
	}
	ans += (d - 1) % 7;
	ans %= 7;
	return ans;
}

int main() {
	int y, m, d;
	cin >> y >> m >> d;

	cout << weekday[w(y, m, d)] << endl;

	if (m <= 2) {
		m += 12;
		y--;
	}
	int num = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;//特殊式求法
	cout << weekday[num];
}