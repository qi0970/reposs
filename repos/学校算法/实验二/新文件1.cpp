#include <iostream>
using namespace std;

int Fib(int x) {
	if (x == 1 || x == 2) {//��һ�κ�
		return 1;
	} else
		return Fib(x - 1) + Fib(x - 2);//��һ�κ����ϸ��ĺ�
}

int main() {
	int x = 0;
	cout << "�����·�:";
	cin >> x;
	cout << "��" << x << "����" << Fib(x) << "ֻ����";
	return 0;
}
