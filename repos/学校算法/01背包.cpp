//0/1��������
//1.��˷�����
#include <bits/stdc++.h>
using namespace std;
#define MAX 20

int n = 4;				//��Ʒ����
int W = 6;				//���Ƶ�����

int w[] = {0, 5, 3, 2, 1};	//�洢��Ʒ������
int v[] = {0, 4, 4, 3, 1};	//�洢��Ʒ�ļ�ֵ
int x[MAX];				//��ռ�
int maxv = 0;				//���Ž���ܼ�ֵ

void dfs(int i, int tw, int tv, int rw, int op[]) {
	if (i > n) {
		if (tw == W && tv > maxv) {
			maxv = tv;
			for (int j = 1; j <= n; j++) {
				x[j] = op[j];
			}
		}
	} else {
		if (tw + w[i] <= W) {
			op[i] = 1;
			dfs(i + 1, tw + w[i], tv + v[i], rw - w[i], op);
		}
		if (tw + rw + w[i] >= W) {
			op[i] = 0;
			dfs(i + 1, tw, tv, rw - w[i], op);
		}
	}
}
void dispasolution() {	//������Ž�
	int i;
	cout << "���װ�����" << endl;
	for (i = 1; i <= n; i++)
		if (x[i] == 1)
			printf(  "ѡȡ��%d����Ʒ\n", i);
	cout << "������" << W << "�ܼ�ֵ" << maxv;
}

int main() {
	int op[MAX];
	dfs(1, 0, 0, 11, op);
	dispasolution();

	return 0;
}
