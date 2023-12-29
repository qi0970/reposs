//deque是“double-ended queue”的缩写，和vector一样都是STL的容器，deque是双端数组，而vector是单端的。
//deque在接口上和vector非常相似，在许多操作的地方可以直接替换。
//deque可以随机存取元素（支持索引值直接存取， 用[]操作符或at()方法，
//deque头部和尾部添加或移除元素都非常快速。但是在中部安插元素或移除元素比较费时。

//deque与vector在操作上几乎一样，deque多两个函数：
//deque.push_front(elem); //在容器头部插入一个数据
//deque.pop_front(); //删除容器第一个数据


#include <iostream>
#include <deque>
using namespace std;

//方法
void da(deque<int> d) {
	d.push_front(100);//在头部插入元素
	deque<int>::iterator it = d.begin();
	while (it != d.end()) {
		cout << *it << " ";
		it++;
	}
	cout << endl;
	d.pop_front();//从头部删除元素
	d.erase(d.begin());
	for (it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";
	}
}

int main() {
	deque<int> d = {10, 20, 30, 40}	;
	da(d);
}