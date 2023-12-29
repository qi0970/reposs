#include <bits/stdc++.h>
using namespace std;

int main() {
	int a = 1000;
	int &b = a;//此时的&是声明引用
	int *ai = &a;//这里&是标示变量的地址
	int *bi = &b;
	cout << a << endl << b << endl;
	cout << ai << endl << bi << endl;
	cout << & a;
}