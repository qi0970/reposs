#include<stdio.h>
int main() {
	int a = 0;
	int b = 0;
	int i = 0;
	scanf_s("%d", &a);
	for (i = 0; i < a; i++) {
		b = b + a * (a - 1);
		a = a - 1;
	}
	printf("%d", a);
	return 0;
}
