#include <iostream>
#include <vector>
using namespace std;

// 定义内存分区的结构
struct Partition {
	int startAddress;
	int size;
	bool allocated;
};

// 定义一个向量来存储分区
vector<Partition> partitions;

// 显示内存分区的当前状态
void displayPartitions() {
	cout << "内存分区状态：" << endl;
	for (const Partition &p : partitions) {
		cout << "起始地址：" << p.startAddress << " | 大小：" << p.size;
		if (p.allocated) {
			cout << " | 已分配" << endl;
		} else {
			cout << " | 空闲" << endl;
		}
	}
	cout << endl;
}

// 用首次适应算法为作业分配内存的函数
void allocateMemoryFirstFit(int jobId, int size) {
	for (Partition &p : partitions) {
		if (!p.allocated && p.size >= size) {
			p.allocated = true;
			return;
		}
	}
}

// 释放作业内存的函数
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
