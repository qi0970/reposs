#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) {
		return a; // ��b����0ʱ��a��Ϊ���Լ��
	} else {
		return gcd(b, a % b); // �ݹ����gcd��������b��a����b��������Ϊ�µĲ�������
	}
}

int main() {
	int x, y;
	cout << "Enter two numbers: ";
	cin >> x >> y;
	cout << "The greatest common divisor is: " << gcd(x, y);

	return 0;
}
