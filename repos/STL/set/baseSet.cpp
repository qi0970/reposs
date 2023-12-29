#include <iostream>
#include <set>
using namespace std;

//set容器end（）指向是输入的最后一个的下一个存的值。那个值为容器内元素数量
void tr() {
	set<int> t;
	t.insert(2);
	t.insert(4);
	t.insert(6);
	t.insert(8);
	t.insert(9);

	set<int>::iterator it = t.end();
	for (int i = 0; i < 10; i++) {
		cout << *it << " ";
		it++;//it++后的顺序为 元素个数，最后一个数，循环
		//it--后的顺序为 元素个数，倒序输出set容器里的元素
	}
}

set<int> strat() {
	set<int> s;//set容器默认升序排序
	s.insert(1);//数据地址随机
	s.insert(4);
	s.insert(9);
	s.insert(7);

	set<int>::reverse_iterator it ;//反向迭代器
	for (it = s.rbegin(); it != s.rend(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	return s;
}

//赋值方法
void Fmethod(set<int> a) {
	set<int> b(a);//浅拷贝
	set<int> c;
	c = b;//浅拷贝
	c.swap(b);//交换
	b.insert(5);
	set<int>::iterator it ;//正向迭代器
	for (it = c.begin(); it != c.end(); it++) {
		cout << *it << " ";
	}
}

//
void Method(set<int> a) {
	a.size();
	a.empty();
	set<int>::iterator it = a.begin();

	set<int>::reverse_iterator it2 = a.rbegin();//set容器的erase不支持反向迭代器
	a.erase(it);//迭代器，两个迭代器，值
	for (it = a.begin(); it != a.end(); it++) {
		cout << *it << " ";
	}
	it--;
	it = a.erase(it);
	cout << "it:" << *it << endl;
}

int main() {
	tr();
//	set<int> a = strat();
//	//Fmethod(a);
//	Method(a);
//	return 0;
}