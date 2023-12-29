#include <iostream>
using namespace std;

class one {
	private:
		string oname;
		int oage;
	public:
		one() {
			cout << "空参构造" << endl;
		}
		one(string name, int age) {
			initialization();
			oname = name;
			oage = age;
		}
		void initialization() {
			oname.clear();
			oage = 0;
		}
		void print() {
			cout << "我是" << oname << "，年龄为：" << oage << endl;
		}
		~one() {//析构函数
			cout << "析构" << endl;
		}
		one(const one &gg) {
			oname = "聪明的" + gg.oname;
			oage = gg.oname - 1;
			cout << "这是拷贝" << endl;
		}
};

one tmp() {
	one gg;
	gg.oname = "李四";
	gg.age = 23;
	return gg;
}

int main() {
//	one i("张三", 20);
//	one gou = i;//拷贝构造函数
//	gou.print();
	one j = tmp();
	j.print();

	return 0;
}
