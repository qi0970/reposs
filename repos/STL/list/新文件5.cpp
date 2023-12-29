//list是一个双向链表容器，可以高效插入删除元素
//list不可以随机存取元素，所以不支持at（下标）函数和[]操作符
//list容器的迭代器是双向迭代器，只能够自增、自减


#include <iostream>
#include <list>
using namespace std;

void cont(list<int> lit);

//list容器的基本使用。正向迭代器
list<int> method(list<int> lit) {
	lit.push_back(10);//尾插
	lit.push_front(20);//头插
	list<int>::iterator it;
	for (it = lit.begin(); it != lit.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	int a = lit.front();//返回头结点
	int b = lit.back();//返回尾节点
	cout << "a=" << a << ",";
	cout << "b=" << b << endl;
	lit.front() = 55;//将第一个元素赋值为
	lit.back() = 99;//将最后一个元素赋值为
	for (it = lit.begin(); it != lit.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	lit.push_back(33);
	lit.push_back(44);
	for (it = lit.begin(); it != lit.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	cout << endl;
	return lit;

}

//list容器的反向迭代器
void reverseIterator(list<int> lit) {
	lit.push_back(10);
	lit.push_back(20);
	list<int>::reverse_iterator it1;
	for (it1 = lit.rbegin(); it1 != lit.rend(); it1++) {
		cout << *it1 << " ";
	}

}

//带参构造
void cont(list<int> lit) {
	int i = 0;
	list<int> lit1(3, 5);
	list<int>::iterator it2 = {lit1.begin()};
	for (it2; it2 != lit1.end(); it2++) {
		cout << *it2 << " ";
	}
	cout << endl;
	list<int>::iterator beg = {lit.begin()};
	beg++;
	list<int>::iterator end = {lit.begin()};
	while (i < 3) {
		end++;
		i++;
	}
	cout << endl;

	list<int> lit2(beg, end);//lit.begin()+2是错误的。list容器里迭代器不能+n
	list<int>::iterator it1;//为了取lit容器中的值
	for (it1 = lit2.begin(); it1 != lit2.end(); it1++) {
		cout << *it1 << " ";
	}
	cout << endl;

	list<int>lit3(lit);//浅拷贝
	for (it1 = lit3.begin(); it1 != lit3.end(); it1++) {
		cout << *it1 << " ";
	}
}

//赋值
void fozi(list<int> lit) {
	list<int> lit1, lit2, lit3, lit4;
	list<int>::iterator it = lit.end();
	it--;
	lit1.assign(lit.begin(), it);//选区域覆盖赋值
	list<int>::iterator it1;
	for (it1 = lit1.begin(); it1 != lit1.end(); it1++) {
		cout << *it1 << " ";
	}
	cout << endl;
	lit2.assign(6, 7);//重复赋值
	for (it1 = lit2.begin(); it1 != lit2.end(); it1++) {
		cout << *it1 << " ";
	}
	cout << endl;
	lit3.swap(lit);//
	for (it1 = lit3.begin(); it1 != lit3.end(); it1++) {
		cout << *it1 << " ";
	}
	cout << endl;
	cout << "lit被换成空值";
	for (it1 = lit.begin(); it1 != lit.end(); it1++) {
		cout << *it1 << " ";
	}
	cout << endl;
}

int main() {
	list<int> lit;
	lit = method(lit);
	//reverseIterator(lit);
	//cont(lit);
	fozi(lit);

}