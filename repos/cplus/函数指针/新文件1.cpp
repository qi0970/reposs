#include <iostream>
using namespace std;

string student(string name, int age, double score) {
	string info = "学生姓名：" + name + "\t年龄：" + to_string(age) + "\t成绩" + to_string(score);
	return info;
}

const string &a(const string &str1, const string &str2) {
	return str1.size() > str2.size() ? str1 : str2;//长度相同时输出第二个
}

int main() {
	const string& (*fp)(const string &, const string &) = nullptr;//函数指针
	string(*fp1)(string, int, double);
	fp = &a;//初始化函数指针
	fp = a;//可以选择使用不使用&

	cout << (*fp)("hello", "world") << endl;//可以直接调用指针
	cout << fp("world", "hello") << endl;

	//函数指针做形参
	void selectStr(const string, const string, const string & (const string &, const string &)); //函数声明
	void selectStr(const string s1, const string s2, const string & (*fp)(const string &,
	               const string &)); //函数定义、 可以省略*号

	//类型别名
	typedef const string &Func(const string &, const string &); //函数类型
	typedef const string &(*Funcp)(const string &, const string &); //函数指针类型
	void selectStr(const string, const string, Func);

	typedef decltype(selectStr)Func2;//decltyoe是c++11新特性和上面一样。定义类型
	typedef decltype(selectStr)(*Funcp2);

	//函数指针可以为返回值
	Func *f(int);
	Funcp f2(int);//函数不能作为返回值
	//尾置返回类型
	auto fun3(int x)->int(*)[5];//c++11新特性用->符号跟在形参列表后，再把类型单独提出来放到最后。

	return 0;
}