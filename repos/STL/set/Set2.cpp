//set������ֵ�����ظ�
#include <bits/stdc++.h>
using namespace std;

int main() {
	set<int, less<int>> s1;//�������С� ���������˺�������
	set<int, greater<int>> s2;//��������
	s1.insert(0);
	s1.insert(9);
	s1.insert(7);
	s1.insert(6);
	s1.insert(10);

	s2.insert(4);
	s2.insert(9);
	s2.insert(7);
	set<int>::iterator it;
	for (it = s1.begin(); it != s1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	it = s1.find(9);
	cout << *it << endl;
	int w = s1.count(3);//����Ԫ�ظ���
	cout << w << endl;

	it = s1.upper_bound(7); //���ص�һ��>Ԫ�صĵ�����
	it = s1.lower_bound(7);//���ص�һ��>=Ԫ�صĵ�����
	for (it; it != s1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	pair<set<int>::iterator, set<int>::iterator>pairIt = s1.equal_range(7);//pair����
	cout << *pairIt.first << "	" << *pairIt.second << endl;
}