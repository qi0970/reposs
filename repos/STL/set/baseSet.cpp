#include <iostream>
#include <set>
using namespace std;

//set����end����ָ������������һ������һ�����ֵ���Ǹ�ֵΪ������Ԫ������
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
		it++;//it++���˳��Ϊ Ԫ�ظ��������һ������ѭ��
		//it--���˳��Ϊ Ԫ�ظ������������set�������Ԫ��
	}
}

set<int> strat() {
	set<int> s;//set����Ĭ����������
	s.insert(1);//���ݵ�ַ���
	s.insert(4);
	s.insert(9);
	s.insert(7);

	set<int>::reverse_iterator it ;//���������
	for (it = s.rbegin(); it != s.rend(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	return s;
}

//��ֵ����
void Fmethod(set<int> a) {
	set<int> b(a);//ǳ����
	set<int> c;
	c = b;//ǳ����
	c.swap(b);//����
	b.insert(5);
	set<int>::iterator it ;//���������
	for (it = c.begin(); it != c.end(); it++) {
		cout << *it << " ";
	}
}

//
void Method(set<int> a) {
	a.size();
	a.empty();
	set<int>::iterator it = a.begin();

	set<int>::reverse_iterator it2 = a.rbegin();//set������erase��֧�ַ��������
	a.erase(it);//��������������������ֵ
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