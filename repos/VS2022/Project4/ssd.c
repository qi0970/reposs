#include<stdio.h>
int main() {
	int i,a1, d, n,an = 0;
	scanf_s("a1=%d d=%d n=%d", &a1, &d, &n);
	a1 = (a1 - 1) * (a1 - 1) + 1;
	for (i = 0; i < n; i++) {
		n = (n - 1) * (n - 1) + i;
	}
	printf("%d", an);
	return 0;
}