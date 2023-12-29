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
	cout << "����������ĸ���;";
	cin >> n;
	int a[100] = {};
	cout << "����������Ԫ��:";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int maxx, minn ;
	solve(a, 0, n - 1, maxx, minn);
	cout << "�������Ļ���Ϊ:" << maxx << endl;
	cout << "������С�Ļ���Ϊ:" << minn << endl;

	return 0;
}
