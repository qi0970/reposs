#include<stdio.h>

List MakeEmpty()
{
	List PtrL;//PtrL��ָ����
	PtrL=(List)malloc(sizeof(struct LNode));//ͨ��malloc������ṹ
	PtrL->Last=-1;
	return PtrL;
}
int Find(ElementType X,List PtrL)
{
	int i=0;
	while(i<=PtrL->Last&&PtrL->Data[i]=X)
		i++;
	if(i>PtrL->Last)
		return -1;
	else return i;
}

//��������
void Insert(ElementType X,int i,List PtrL)//i��λ��
{
	if(PtrL->Last==MAXSIZE-1)//�ռ����������ܲ���
	{
		printf("���Ա�����");
		return;
	}
	if(i<1||i>PtrL->Last+2)
	{
		printf("λ�ò���ȷ");
		return;
	}
	int j=0;
	for(j=PtrL->Last;j>=i-1;j--)
	{
		PtrL->Data[j+1]=PtrL->Data[j];//�����Ա����һ������������һ���������һֱ��Ŀ��i
	}
	PtrL->Data[i-1]=X;//����Ԫ��
	PtrL->Last++;
	return;
}

//ɾ������
void Delete(int i,List PtrL)//i��λ��
{
	int j=0;
	if(i<1||i>PtrL->Last+1)
	{
		printf("�����ڵ�%d��Ԫ��",i);
		return;
	}
	for(j=i;j<=PtrL->Last;j++)//���������ƶ�
		PtrL->Data[j-1]=PtrL->Data[j];
	PtrL->Last--;
	return;
}