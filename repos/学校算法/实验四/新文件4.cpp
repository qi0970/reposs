//��x����y,ʣ����z
//10x-2=y
//12(x-1)-z=y

#include <iostream>
using namespace std;

void ko() {
	int people = 0;
	for (int i = 1; i < 100; i++) {//����
		for (int j = 0; j <= 12; j++) {//ʣ������
			if (10 * i - 2 == 12 * (i - 1) - j) {
				people = i * 10 - j;
			}
		}
	}
	cout << "һ����" << people << "��" << endl;
}

int main() {
	ko();

	return 0;
}
