//���ܺ���ָ�뱻�㷺���ں����ص�����C++���ṩ�������ص������ķ��������Ǻ�������
//functor,����ɺ�������α������������������ˡ�����������������ͨ����󡣴��﷨�Ͻ���������ͨ������Ϊ����
#include <bits/stdc++.h>
using namespace std;

//ѧ����
class Stu {
	public:
		Stu(int Id, string strName) {
			mId = Id;
			mName = strName;
		}
		int mId;//ѧ��
		string mName;//����
};

//���캯������
class StuFunctor {
	public:
		const bool operator()(const Stu &stu1, const Stu &stu2) {//operator���������
			return stu1.mId < stu2.mId;
		}
};

int main() {
	set<Stu, StuFunctor> setStu;//����set����
	setStu.insert(Stu(3, "С��"));
	setStu.insert(Stu(1, "С��"));
	setStu.insert(Stu(5, "С��"));
	setStu.insert(Stu(2, "С��"));
	set<Stu, StuFunctor>::iterator it = setStu.begin();
	for (it; it != setStu.end(); it++) {
		cout << it->mId << " ";
	}
}