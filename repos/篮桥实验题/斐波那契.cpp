#include <bits/stdc++.h>
using namespace std;

long long n(int a) {
	if (a < 2)
		return a;
	return n(a - 1) + n(a - 2);
}

long double fib(int n) {
	if (n < 2)
		return n;
	int dp[2] = {0, 1};
	int result = 0;
	for (int i = 2; i <= n; ++i) {
		result = dp[0] + dp[1];
		dp[0] = dp[1];
		dp[1] = result;
	}
	return dp[1];
}

int main() {
	int a;
	cin >> a;
	cout << n(a);
	return 0;
}
