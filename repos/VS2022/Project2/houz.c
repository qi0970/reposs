#include<stdio.h>
int main() 
	{
		int i = 0;
		int j = 0;
		scanf_s("%d", &j);
		for (i = 0; i < j; i++) {
			j = j * (j - 1);
			j = j - 1;
		}
		printf("%d", j);
		return 0;
	

