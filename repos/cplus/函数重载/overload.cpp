
#include <iostream>
using namespace std;

void zhi(int &i) {
	int  *p = &i;
//回顾指针
	cout << "*p:" << *p << endl;//变量i的值
	cout << "&i:" << &i << endl;//变量i的地址
	cout << "p:" << p << endl;//也是i的地址
	cout << "&p:" << &p << endl;//指针p的地址
}

void fun(int &a) {}
void fun(const int &a) {}//形参类型是常量引用，这是一个新函数

void fun2(int *a) {}
void fun2(const int *a) {}//形参类型是指向常量的指针，这是一个新函数

int main() {
	//count函数重载
	int i = 1;
	const int io = i;
	i = io;
	cout << io << endl;
	//指针常量
	int  *p = &i;
	int *const pc = p;
	p = pc;

//指针
	zhi(i);
	return 0;
}
