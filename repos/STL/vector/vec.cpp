//vector����

//1.vector�ǽ�Ԫ������һ����̬�����м��Թ��������
//2.vector���������ȡԪ��
//3.vector��β����ӻ���ɾ���ܿ죬������λ����

#include <iostream>
#include <vector>
using namespace std;

vector<int> t;//ȫ�ֱ���

void print(vector<int> a);
void assignment(vector<int> v);
void vet(int a[]);
void method(vector<int> s);


//���ι��캯��
void vet(int a[]) {
	vector<int> v(a, a + 4);//���캯��������[��)�����Ԫ�ؿ������Լ�������ҿ�
	print(v);
	vector<int> v1(v.begin(), v.end());//��vector�͵Ŀ���
	print(v1);
	vector<int> v2(4, 10);//4��10�������Լ�
	print(v2);
	vector<int>v3(v2);//�������캯��
	print(v3);
	cout << endl;
	assignment(v);

}

//��ֵ
void assignment(vector<int> v) {
	t.assign(v.begin(), v.end());//ʹ�õ��������¸�ֵ
	vector<int> t1;
	t1.assign(4, 9);
	//t1 = t; //��ֵ����
	t1.swap(t);//Ԫ�ػ���
	print(t);
	print(t1);
	cout << endl;
}

//����
void method(vector<int> s, vector<int> v) {
	int num = s.size();//����Ԫ�ظ���
	cout << "����Ԫ�ظ���:" << num << endl;
	s.resize(6);//���¶����������ȣ���������̣�ĩβ����������Ԫ��ɾ����
	//�������䳤��Ĭ����0���룬Ҳ�����ڣ� �������ź����ָ����
	bool t = s.empty();//�ж������Ƿ�Ϊ��
	cout << "�ж������Ƿ�Ϊ�ա�1���ǣ�0����" << endl << t << endl;

	cout << "�����±��Ԫ��Ϊ��" << s.at(3) << endl;//����±�Խ�磬�׳�out_of_range�쳣��

	s.push_back(10);//β�巨����һ��Ԫ��
	s.pop_back();//��β��ɾ�����һ��Ԫ��
	s.insert(s.begin() + 2, 2, 12);//���м����Ԫ�أ���ָ�룬������Ԫ�أ�����һ������ֻ����ָ��
	s.insert(s.begin(), v.begin(), v.end());//(Ŀ��ָ�룬��һ������Ŀ�ʼָ�룬��һ������Ľ���ָ��)
	print(s);

	s.erase(s.begin());//ɾ��ָ��ָ����Ԫ��
	print(s);
	s.erase(s.begin() + 5, s.end());//ɾ���������������
	print(s);
	s.clear();//�Ƴ���������������
	print(s);
	cout << "ȫ��ɾ��";


	cout << endl;
}

//���
void print(vector<int> a) {
	for (int i = 0; i < (int)a.size(); i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
	int a[] = {3, 6, 8, 11};
	vector<int> v(a, a + 4);
	vector<int> s(5, 5);//������Ϊ5��5
	vet(a);
	method(s, v);
}