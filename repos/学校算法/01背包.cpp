//0/1背包问题
//1.回朔法求解
#include <bits/stdc++.h>
using namespace std;
#define MAX 20

int n = 4;				//物品个数
int W = 6;				//限制的重量

int w[] = {0, 5, 3, 2, 1};	//存储物品的重量
int v[] = {0, 4, 4, 3, 1};	//存储物品的价值
int x[MAX];				//解空间
int maxv = 0;				//最优解的总价值

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
void dispasolution() {	//输出最优解
	int i;
	cout << "最佳装填方案是" << endl;
	for (i = 1; i <= n; i++)
		if (x[i] == 1)
			printf(  "选取第%d个物品\n", i);
	cout << "总重量" << W << "总价值" << maxv;
}

int main() {
	int op[MAX];
	dfs(1, 0, 0, 11, op);
	dispasolution();

	return 0;
}
