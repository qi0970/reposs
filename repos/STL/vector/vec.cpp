//vector容器

//1.vector是将元素置于一个动态数组中加以管理的容器
//2.vector可以随机存取元素
//3.vector在尾部添加或者删除很快，在其他位置慢

#include <iostream>
#include <vector>
using namespace std;

vector<int> t;//全局变量

void print(vector<int> a);
void assignment(vector<int> v);
void vet(int a[]);
void method(vector<int> s);


//带参构造函数
void vet(int a[]) {
	vector<int> v(a, a + 4);//构造函数将数组[，)区间的元素拷贝给自己。左闭右开
	print(v);
	vector<int> v1(v.begin(), v.end());//对vector型的拷贝
	print(v1);
	vector<int> v2(4, 10);//4个10拷贝给自己
	print(v2);
	vector<int>v3(v2);//拷贝构造函数
	print(v3);
	cout << endl;
	assignment(v);

}

//赋值
void assignment(vector<int> v) {
	t.assign(v.begin(), v.end());//使用迭代器重新赋值
	vector<int> t1;
	t1.assign(4, 9);
	//t1 = t; //赋值运算
	t1.swap(t);//元素互换
	print(t);
	print(t1);
	cout << endl;
}

//方法
void method(vector<int> s, vector<int> v) {
	int num = s.size();//容器元素个数
	cout << "容器元素个数:" << num << endl;
	s.resize(6);//重新定义容器长度，若容器变短，末尾超出容器的元素删除；
	//若容器变长，默认填0补齐，也可以在（ ，）逗号后添加指定数
	bool t = s.empty();//判断容器是否为空
	cout << "判断容器是否为空。1、是，0、否" << endl << t << endl;

	cout << "容器下标的元素为：" << s.at(3) << endl;//如果下标越界，抛出out_of_range异常。

	s.push_back(10);//尾插法插入一个元素
	s.pop_back();//从尾部删除最后一个元素
	s.insert(s.begin() + 2, 2, 12);//从中间插入元素，（指针，数量，元素），第一个参数只能是指针
	s.insert(s.begin(), v.begin(), v.end());//(目标指针，另一个数组的开始指针，另一个数组的结束指针)
	print(s);

	s.erase(s.begin());//删除指针指定的元素
	print(s);
	s.erase(s.begin() + 5, s.end());//删除容器区间的数据
	print(s);
	s.clear();//移除容器的所有数据
	print(s);
	cout << "全部删除";


	cout << endl;
}

//输出
void print(vector<int> a) {
	for (int i = 0; i < (int)a.size(); i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
	int a[] = {3, 6, 8, 11};
	vector<int> v(a, a + 4);
	vector<int> s(5, 5);//容器里为5个5
	vet(a);
	method(s, v);
}