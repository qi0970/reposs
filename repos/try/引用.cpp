#include <bits/stdc++.h>
using namespace std;

int main() {
	int a = 1000;
	int &b = a;//��ʱ��&����������
	int *ai = &a;//����&�Ǳ�ʾ�����ĵ�ַ
	int *bi = &b;
	cout << a << endl << b << endl;
	cout << ai << endl << bi << endl;
	cout << & a;
}