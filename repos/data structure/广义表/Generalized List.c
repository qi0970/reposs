//1.����������Ա���ƹ�
//2.���Ա���Ԫ�ض��ǻ����ĵ�Ԫ��
//3.������У���ЩԪ�ز��������ǵ�Ԫ��Ҳ��������һ�������

#include<stdio.h>
#include<stdlib.h>
typedef struct GNode* GList;
struct GNode {
	int tap;//��־��0��ʾ����ǵ�Ԫ�أ�1��ʾ����ǹ����
	union {/*�ӱ�ָ����SubList�뵥Ԫ��������Data���ã������ô洢�ռ�*/ 
		int Data;
		GList SubList;
	}URegion;
	GList Next;//ָ���̽��
};