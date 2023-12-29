#include <stdio.h>

#define W 5 //最大进程数W=5
#define R3  //最大资源总数=3

int work[3] = {3, 4, 5}; //工作向量
char finish[5] = {'f', 'f', 'f', 'f', 'f'}; //最大需求矩阵
int Allocation[5][3];//分配矩阵
int Need[5][3];//需求矩阵
int Request[3];//进程请求向量

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
