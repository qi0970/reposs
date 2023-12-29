#include <bits/stdc++.h>
using namespace std;

void te(stack<int> stk) {
	stk.push(10);//往栈头添加元素
	stk.push(30);
	stk.push(50);
	stk.pop();//删除栈头元素
	cout << stk.top() << endl; //返回最后一个压入栈元素

	stack<int> stk1(stk);//拷贝构造
	stk1 = stk;//赋值

	stk1.top() = 1;//修改栈头元素
	cout << stk1.top() << endl;

	int i = stk.size(); //容器大小
	int j = stk.empty(); //容器是否为空.不为空是1

	if (j) {
		cout << "容器为空" << endl;
	} else
		cout << "容器不为空。" << "容器大小为：" << i << endl;

}

int main() {
	stack<int> stk;
	te(stk);
	return 0;
}