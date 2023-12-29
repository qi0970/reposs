//在方法中定义默认实参，定义一个实参其后的参数必须也要成为实参
#include <bits/stdc++.h>
using namespace std;

//string stu(string name, int age = 18, float score ){}错误
string stu(string name, int age = 18, float score = 70) {
	string info = "学生姓名：" + name + "\t年龄：" + to_string(age) + "\t成绩" + to_string(score);
	return info;
}

int main() {
	cout << stu("张三", 40, 29) << endl;
	cout << stu("李四");
}