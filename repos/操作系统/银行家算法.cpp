#include <stdio.h>

#define W 5 //��������W=5
#define R3  //�����Դ����=3

int work[3] = {3, 4, 5}; //��������
char finish[5] = {'f', 'f', 'f', 'f', 'f'}; //����������
int Allocation[5][3];//�������
int Need[5][3];//�������
int Request[3];//������������

void motdon() {
	int a, i, j, k;
	while (finish[a] != 't') {
		if (finish[i] = 'f' || Need[j][i] <= work[i]) {
			work[k] = work[k] + Allocation[j][k];
			finish[i] = 't';
		} else {
			for (j = 0; j < 4; j++) {
				for (i = 0; i <= 2; i++) {
					if (Need[j][i] <= work[i] && finish[j]) {
						for (k = 0; k <= 2; k++) {
							work[k] = work[k] + Allocation[j][k];
							finish[i] = 't';
						}
					}
				}
			}
		}
		a++;
	}
}

int main() {


	return 0;
}
