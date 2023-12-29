#include <iostream>
#include <vector>
using namespace std;

// �����ڴ�����Ľṹ
struct Partition {
	int startAddress;
	int size;
	bool allocated;
};

// ����һ���������洢����
vector<Partition> partitions;

// ��ʾ�ڴ�����ĵ�ǰ״̬
void displayPartitions() {
	cout << "�ڴ����״̬��" << endl;
	for (const Partition &p : partitions) {
		cout << "��ʼ��ַ��" << p.startAddress << " | ��С��" << p.size;
		if (p.allocated) {
			cout << " | �ѷ���" << endl;
		} else {
			cout << " | ����" << endl;
		}
	}
	cout << endl;
}

// ���״���Ӧ�㷨Ϊ��ҵ�����ڴ�ĺ���
void allocateMemoryFirstFit(int jobId, int size) {
	for (Partition &p : partitions) {
		if (!p.allocated && p.size >= size) {
			p.allocated = true;
			return;
		}
	}
}

// �ͷ���ҵ�ڴ�ĺ���
void deallocateMemory(int jobId) {
	for (Partition &p : partitions) {
		if (p.allocated && p.startAddress == jobId) {
			p.allocated = false;
			return;
		}
	}
}

int main{

	return 0;
}
