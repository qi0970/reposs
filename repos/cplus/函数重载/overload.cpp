
#include <iostream>
using namespace std;

void zhi(int &i) {
	int  *p = &i;
//�ع�ָ��
	cout << "*p:" << *p << endl;//����i��ֵ
	cout << "&i:" << &i << endl;//����i�ĵ�ַ
	cout << "p:" << p << endl;//Ҳ��i�ĵ�ַ
	cout << "&p:" << &p << endl;//ָ��p�ĵ�ַ
}

void fun(int &a) {}
void fun(const int &a) {}//�β������ǳ������ã�����һ���º���

void fun2(int *a) {}
void fun2(const int *a) {}//�β�������ָ������ָ�룬����һ���º���

int main() {
	//count��������
	int i = 1;
	const int io = i;
	i = io;
	cout << io << endl;
	//ָ�볣��
	int  *p = &i;
	int *const pc = p;
	p = pc;

//ָ��
	zhi(i);
	return 0;
}
