#include <iostream>
using namespace std;

class one {
	private:
		string oname;
		int oage;
	public:
		one() {
			cout << "�ղι���" << endl;
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
			cout << "����" << oname << "������Ϊ��" << oage << endl;
		}
		~one() {//��������
			cout << "����" << endl;
		}
		one(const one &gg) {
			oname = "������" + gg.oname;
			oage = gg.oname - 1;
			cout << "���ǿ���" << endl;
		}
};

one tmp() {
	one gg;
	gg.oname = "����";
	gg.age = 23;
	return gg;
}

int main() {
//	one i("����", 20);
//	one gou = i;//�������캯��
//	gou.print();
	one j = tmp();
	j.print();

	return 0;
}
