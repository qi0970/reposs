#include <iostream>
#include <map>
using namespace std;

class Stu {
	public:
		int id;
		string name;

		Stu() {//�ղι���
		}
		Stu(int id, string name) {//ȫ�ι���
			this->id;
			this->name;
		}
		friend ostream &operator << (ostream &out, Stu &s) {//��<<���������
			out << s.name;
			return out;
		}
};

void teshu(map<int, Stu>s) {
	Stu s4(1, "�ռ�");
	s[1] = s4;
	Stu s3(3, "ֱ��");
	s.insert(pair<int, Stu>(s3.id, s3));

	Stu s7 (7, "����");
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
	//ͨ��insert��������pair����
	s2.insert(pair<int, string>(3, "�糤"));//pair�ȴ��������ͣ��ٴ�ֵ
	s2.insert(pair<int, string>(4, "�ǳ�"));
	s2.insert(pair<int, string>(7, "�ó�"));
	//ͨ��value_type�ķ�ʽ�������
	s2.insert(map<int, string>::value_type(1, "С��"));
	//ͨ�����鷽ʽ����ֵ
	s2[2] = "�ܶ�";//�Ḳ��ԭkey��ӳ���value

	for (auto t : s2) {
		cout << t.first << ":" << t.second << endl;
	}

	string na = s2[3];//���keyΪ�ջᴴ��һ��valueΪ�յļ�ֵ��
	cout << na << endl;//Ѱ��key��Ӧ��value��

	map<int, string>::iterator it;
	it = s2.find(8);
	if (it == s2.end()) {
		cout << "�Ҳ����˼�" << endl;
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
