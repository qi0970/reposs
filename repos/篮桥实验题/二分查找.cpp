#include <bits/stdc++.h>
using namespace std;
template <class T>

T BinSearch(T a[], T low, T high, T k) {
	T mid = (low + high) / 2;
	if (low <= high) {

		if (a[mid] == k) {
			return mid;
		}
		if (a[mid] > k) {
			return BinSearch(a, low, mid - 1, k);
		} else {
			return BinSearch(a, mid + 1, high, k);
		}
	} else {
		return -1;
	}
}

int main() {
	int k ;
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cin >> k;
	int t = BinSearch(a, 0, 9, k);
	if (t >= 0) {
		cout << "在第" << t << "位上";
	} else {
		cout << "无";
	}
	cout << endl;
	return 0;
}
