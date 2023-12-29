#include <iostream>
#include <vector>
using namespace std;

int main() {
	//构造一个迭代器
	vector<int>::iterator iter;
	int a[] = {23, 45, 75, 22, 64, 88, 5};
	vector<int> v(a, a + 7);
	iter = v.begin(); //让迭代器指向v容器的第一个元素
	cout << *iter  << endl;

	iter = v.insert(iter, 2, 10);//返回新容器的位置
	cout << *iter << endl;
	while (iter != v.end()) {
		cout << *iter << " ";
		iter++;
	}
	cout << endl;
	for (int i = 0; i < (int)v.size(); i++) {
		cout << v[i] << " ";
	}
}