#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	getchar();
	char c[100][100];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%c", &c[i][j]);
		}
		getchar();
	}
	//cout << "-------------------------------------" << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			printf("%c", c[i][j]);
		}
	}
	return 0;
}

