#include <iostream>
using namespace std;


void tont() {
	int c[1000];
	int p = 0;
	for (int i = 1; i <= 5; i++) {
		for (int j = 0; j <= 5; j++) {
			for (int k = 0; k <= 5; k++) {
				c[p] = i * 100 + j * 10 + k;//�������Կ��ܵĽŵ�����
				p++;
			}
		}
	}

	for (int d = 0; d < p; d++) {
		for (int e = 0; e < p; e++) {
			if (2 * c[d] == 4 * c[e] && c[d] % 2 == 0 && c[d] % 4 == 0) {//�����ø�����ͬ����ֻ����2ֻ�ţ���ֻ����4ֻ��
				cout << "���ø���" << c[d] / 4 << ",��������" << c[e] << ",�ý�����" << c[d] << endl;
			}
		}


	}

}

int main() {
	tont();

	return 0;
}
