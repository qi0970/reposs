//�ڷ����ж���Ĭ��ʵ�Σ�����һ��ʵ�����Ĳ�������ҲҪ��Ϊʵ��
#include <bits/stdc++.h>
using namespace std;

//string stu(string name, int age = 18, float score ){}����
string stu(string name, int age = 18, float score = 70) {
	string info = "ѧ��������" + name + "\t���䣺" + to_string(age) + "\t�ɼ�" + to_string(score);
	return info;
}

int main() {
	cout << stu("����", 40, 29) << endl;
	cout << stu("����");
}