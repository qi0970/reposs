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
	cout << "����Ӣ����ӣ�";
	getline(cin, s);
	cout << "���еĵ���Ϊ��" << endl;
	t(s);
	return 0;
}
