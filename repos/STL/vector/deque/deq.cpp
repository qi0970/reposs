//deque�ǡ�double-ended queue������д����vectorһ������STL��������deque��˫�����飬��vector�ǵ��˵ġ�
//deque�ڽӿ��Ϻ�vector�ǳ����ƣ����������ĵط�����ֱ���滻��
//deque���������ȡԪ�أ�֧������ֱֵ�Ӵ�ȡ�� ��[]��������at()������
//dequeͷ����β����ӻ��Ƴ�Ԫ�ض��ǳ����١��������в�����Ԫ�ػ��Ƴ�Ԫ�رȽϷ�ʱ��

//deque��vector�ڲ����ϼ���һ����deque������������
//deque.push_front(elem); //������ͷ������һ������
//deque.pop_front(); //ɾ��������һ������


#include <iostream>
#include <deque>
using namespace std;

//����
void da(deque<int> d) {
	d.push_front(100);//��ͷ������Ԫ��
	deque<int>::iterator it = d.begin();
	while (it != d.end()) {
		cout << *it << " ";
		it++;
	}
	cout << endl;
	d.pop_front();//��ͷ��ɾ��Ԫ��
	d.erase(d.begin());
	for (it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";
	}
}

int main() {
	deque<int> d = {10, 20, 30, 40}	;
	da(d);
}