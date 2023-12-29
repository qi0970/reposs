#include <iostream>
using namespace std;

void solve(int a[], int low, int high, int &maxx, int &minn) {
	if (low == high) {
		maxx = low;
		minn = low;
	} else if (low + 1 == high) {
		maxx = max(a[low], a[high]);
		minn = min(a[low], a[high]);
	} else {
		int mid = (low + high) / 2;
		int lm, ln;
		solve(a, low, mid, lm, ln);
		int rm, rn;
		solve(a, mid + 1, high, rm, rn);
		maxx = max(lm, rm);
		minn = min(ln, rn);
	}
}

int main() {
	int n = 0;
	cout << "请输入数组的个数;";
	cin >> n;
	int a[100] = {};
	cout << "请输入数组元素:";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int maxx, minn ;
	solve(a, 0, n - 1, maxx, minn);
	cout << "年龄最大的患者为:" << maxx << endl;
	cout << "年龄最小的患者为:" << minn << endl;

	return 0;
}
