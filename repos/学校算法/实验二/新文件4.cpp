#include <iostream>
using namespace std;

int gongY(int x, int y) {
	if (y == 0) {//�ݹ����

		return x;
	} else
		return gongY(y, (x % y));//��һ����Ϊ�ڶ������ڶ�����Ϊx����y
}

int main() {
	int x = 0, y = 0;
	cout << "����������:";
	cin >> x >> y;
	cout << "���Լ��Ϊ��" << gongY(x, y);

	return 0;
}
