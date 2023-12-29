#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	int h1[100], h2[100], m1[100], m2[100], resh[100], resm[100];
	for (int i = 0; i < T; i++) {
		scanf("%d:%d %d:%d", &h1[i], &m1[i], &h2[i], &m2[i]);
	}
	for (int j = 0; j < T; j++) {
		resh[j] = h2[j] - h1[j];
		resm[j] = m2[j] - m1[j];
		if (resh[j] < 0) {
			resh[j] = resh[j] + 24;
		} else if (resm[j] < 0) {
			resm[j] = resm[j] + 60;
			resh[j]--;
		} else if (resh[j] > 23 && resm[j] > 60) {
			cout << "23h59min";
		}
		cout << setfill('0') << setw(2) << resh[j] << "h" << setw(2) << resm[j] << "min" << endl;
	}
	return 0;
}
