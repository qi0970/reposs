//list��һ��˫���������������Ը�Ч����ɾ��Ԫ��
//list�����������ȡԪ�أ����Բ�֧��at���±꣩������[]������
//list�����ĵ�������˫���������ֻ�ܹ��������Լ�


#include <iostream>
#include <list>
using namespace std;

void cont(list<int> lit);

//list�����Ļ���ʹ�á����������
list<int> method(list<int> lit) {
	lit.push_back(10);//β��
	lit.push_front(20);//ͷ��
	list<int>::iterator it;
	for (it = lit.begin(); it != lit.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	int a = lit.front();//����ͷ���
	int b = lit.back();//����β�ڵ�
	cout << "a=" << a << ",";
	cout << "b=" << b << endl;
	lit.front() = 55;//����һ��Ԫ�ظ�ֵΪ
	lit.back() = 99;//�����һ��Ԫ�ظ�ֵΪ
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

//list�����ķ��������
void reverseIterator(list<int> lit) {
	lit.push_back(10);
	lit.push_back(20);
	list<int>::reverse_iterator it1;
	for (it1 = lit.rbegin(); it1 != lit.rend(); it1++) {
		cout << *it1 << " ";
	}

}

//���ι���
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

	list<int> lit2(beg, end);//lit.begin()+2�Ǵ���ġ�list���������������+n
	list<int>::iterator it1;//Ϊ��ȡlit�����е�ֵ
	for (it1 = lit2.begin(); it1 != lit2.end(); it1++) {
		cout << *it1 << " ";
	}
	cout << endl;

	list<int>lit3(lit);//ǳ����
	for (it1 = lit3.begin(); it1 != lit3.end(); it1++) {
		cout << *it1 << " ";
	}
}

//��ֵ
void fozi(list<int> lit) {
	list<int> lit1, lit2, lit3, lit4;
	list<int>::iterator it = lit.end();
	it--;
	lit1.assign(lit.begin(), it);//ѡ���򸲸Ǹ�ֵ
	list<int>::iterator it1;
	for (it1 = lit1.begin(); it1 != lit1.end(); it1++) {
		cout << *it1 << " ";
	}
	cout << endl;
	lit2.assign(6, 7);//�ظ���ֵ
	for (it1 = lit2.begin(); it1 != lit2.end(); it1++) {
		cout << *it1 << " ";
	}
	cout << endl;
	lit3.swap(lit);//
	for (it1 = lit3.begin(); it1 != lit3.end(); it1++) {
		cout << *it1 << " ";
	}
	cout << endl;
	cout << "lit�����ɿ�ֵ";
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