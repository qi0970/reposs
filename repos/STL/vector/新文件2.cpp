#include <iostream>
#include <vector>
using namespace std;

int main() {
	//����һ��������
	vector<int>::iterator iter;
	int a[] = {23, 45, 75, 22, 64, 88, 5};
	vector<int> v(a, a + 7);
	iter = v.begin(); //�õ�����ָ��v�����ĵ�һ��Ԫ��
	cout << *iter  << endl;

	iter = v.insert(iter, 2, 10);//������������λ��
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