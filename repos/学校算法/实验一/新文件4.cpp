#include <bits/stdc++.h>
using namespace std;

void t(string &a) {
	int n = a.size();
	for (int i = 0; i < n; i++) {
		if (a[i] == ' ') {
			cout << endl;
			a.erase(i, 1);
		}
		cout << a[i];
	}
}

int main() {
	string s;
	cout << "输入英语句子：";
	getline(cin, s);
	cout << "其中的单词为：" << endl;
	t(s);
	return 0;
}
