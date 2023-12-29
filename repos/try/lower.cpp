//可以输入任意多数组
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v;
	int c = 0;
	char e;
	while (cin >> c) {
		v.push_back(c);
//		i++;
		cin.get(e);
		if (e != ' ') {
			break;
		}
	}
	sort(v.begin(), v.end());


	for (auto it : v) {
		cout << it << " ";
	}
}