#include <iostream>
using namespace std;

void mt() {
	int b, s, g;

	for (int i = 100; i < 1000; i++) {
		b = i / 100;//��λ
		s = i / 10 % 10;//ʮλ
		g = i % 10;//��λ
		if (g > b && b > s && (g + s + b == g * s * b)) {
			//������λ���ڰ�λ����λ����ʮλ��λ�����=λ��֮��
			cout << "������������Ϊ��" << b * 100 + s * 10 + g << endl;
		}
	}
}

int main() {
	mt();

	return 0;
}
