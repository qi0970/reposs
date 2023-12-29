//尽管函数指针被广泛用于函数回调，但C++还提供了其他回调函数的方法，就是函数对象
//functor,翻译成函数对象，伪函数，算符。是重载了“（）”操作符的普通类对象。从语法上讲，它与普通函数行为类似
#include <bits/stdc++.h>
using namespace std;

//学生类
class Stu {
	public:
		Stu(int Id, string strName) {
			mId = Id;
			mName = strName;
		}
		int mId;//学号
		string mName;//姓名
};

//构造函数对象
class StuFunctor {
	public:
		const bool operator()(const Stu &stu1, const Stu &stu2) {//operator重载运算符
			return stu1.mId < stu2.mId;
		}
};

int main() {
	set<Stu, StuFunctor> setStu;//创建set容器
	setStu.insert(Stu(3, "小张"));
	setStu.insert(Stu(1, "小李"));
	setStu.insert(Stu(5, "小王"));
	setStu.insert(Stu(2, "小刘"));
	set<Stu, StuFunctor>::iterator it = setStu.begin();
	for (it; it != setStu.end(); it++) {
		cout << it->mId << " ";
	}
}