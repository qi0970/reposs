#include <bits/stdc++.h>
using namespace std;

void te(stack<int> stk) {
	stk.push(10);//��ջͷ���Ԫ��
	stk.push(30);
	stk.push(50);
	stk.pop();//ɾ��ջͷԪ��
	cout << stk.top() << endl; //�������һ��ѹ��ջԪ��

	stack<int> stk1(stk);//��������
	stk1 = stk;//��ֵ

	stk1.top() = 1;//�޸�ջͷԪ��
	cout << stk1.top() << endl;

	int i = stk.size(); //������С
	int j = stk.empty(); //�����Ƿ�Ϊ��.��Ϊ����1

	if (j) {
		cout << "����Ϊ��" << endl;
	} else
		cout << "������Ϊ�ա�" << "������СΪ��" << i << endl;

}

int main() {
	stack<int> stk;
	te(stk);
	return 0;
}