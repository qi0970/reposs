#include <bits/stdc++.h>
using namespace std;

void shu(int k, queue<int> q) {
	int n = q.size();
	queue<int> tmpque;
	for (int i = 0; i < k; i++) {
		tmpque.push(q.front());
		q.pop();
	}
	cout << q.front();
	for (int j = 0; j < n; j++) {
		tmpque.push(q.front());
		q.pop();
	}
}

int main() {
	queue<int> q;
	int a = 0;
	int n = 0;
	cout << "������и�����";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		q.push(a);
	}
	int k = 0;
	cout << "��Ҫ���ӵ�λ�ã�";
	cin >> k;
	shu(k, q);
	return 0;
}
