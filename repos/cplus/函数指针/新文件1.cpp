#include <iostream>
using namespace std;

string student(string name, int age, double score) {
	string info = "ѧ��������" + name + "\t���䣺" + to_string(age) + "\t�ɼ�" + to_string(score);
	return info;
}

const string &a(const string &str1, const string &str2) {
	return str1.size() > str2.size() ? str1 : str2;//������ͬʱ����ڶ���
}

int main() {
	const string& (*fp)(const string &, const string &) = nullptr;//����ָ��
	string(*fp1)(string, int, double);
	fp = &a;//��ʼ������ָ��
	fp = a;//����ѡ��ʹ�ò�ʹ��&

	cout << (*fp)("hello", "world") << endl;//����ֱ�ӵ���ָ��
	cout << fp("world", "hello") << endl;

	//����ָ�����β�
	void selectStr(const string, const string, const string & (const string &, const string &)); //��������
	void selectStr(const string s1, const string s2, const string & (*fp)(const string &,
	               const string &)); //�������塢 ����ʡ��*��

	//���ͱ���
	typedef const string &Func(const string &, const string &); //��������
	typedef const string &(*Funcp)(const string &, const string &); //����ָ������
	void selectStr(const string, const string, Func);

	typedef decltype(selectStr)Func2;//decltyoe��c++11�����Ժ�����һ������������
	typedef decltype(selectStr)(*Funcp2);

	//����ָ�����Ϊ����ֵ
	Func *f(int);
	Funcp f2(int);//����������Ϊ����ֵ
	//β�÷�������
	auto fun3(int x)->int(*)[5];//c++11��������->���Ÿ����β��б���ٰ����͵���������ŵ����

	return 0;
}