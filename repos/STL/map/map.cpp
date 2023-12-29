#include <iostream>
#include <map>
using namespace std;

class Stu {
	public:
		int id;
		string name;

		Stu() {//空参构造
		}
		Stu(int id, string name) {//全参构造
			this->id;
			this->name;
		}
		friend ostream &operator << (ostream &out, Stu &s) {//对<<运算符重载
			out << s.name;
			return out;
		}
};

void teshu(map<int, Stu>s) {
	Stu s4(1, "空间");
	s[1] = s4;
	Stu s3(3, "直接");
	s.insert(pair<int, Stu>(s3.id, s3));

	Stu s7 (7, "招商");
	s.insert(map<int, Stu>::value_type (s7.id, s7));

	map<int, Stu>::iterator  it;
	cout << s4.id << endl;
	for (it = s.begin() ; it != s.end(); it++) {

		pair<int, Stu> pr = *it;
		int key = pr.first;
		Stu value = pr.second;
		cout << key << ":" << value  << endl;
	}
}

void shur(map<int, string>s2) {
	//通过insert方法插入pair队组
	s2.insert(pair<int, string>(3, "乡长"));//pair先传参数类型，再传值
	s2.insert(pair<int, string>(4, "是长"));
	s2.insert(pair<int, string>(7, "好长"));
	//通过value_type的方式插入对象
	s2.insert(map<int, string>::value_type(1, "小猪"));
	//通过数组方式插入值
	s2[2] = "奋斗";//会覆盖原key所映射的value

	for (auto t : s2) {
		cout << t.first << ":" << t.second << endl;
	}

	string na = s2[3];//如果key为空会创造一个value为空的键值对
	cout << na << endl;//寻找key对应的value。

	map<int, string>::iterator it;
	it = s2.find(8);
	if (it == s2.end()) {
		cout << "找不到此键" << endl;
	} else
		cout << (*it).second << endl;

	cout << s2.at(20) << endl;
}

void o(map<int, Stu>s) {
//	Stu i = {1, "w"};
//	s[i.id] = i;
	s.emplace(1, "w");
//	cout << ;
	map<int, Stu>::iterator it = s.begin();
	pair<int, Stu> pr = *it;
	cout << pr.first << ":" << pr.second;
}

int main() {
	map<int, Stu>s;
	map<int, string>s2;
//	teshu(s);
//	shur(s2);
//	o(s);
	return 0;

}
