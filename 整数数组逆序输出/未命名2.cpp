//ѧ����
//�Ժ�д�������룬����i=1;i<=n;i++�����������
//Ҫ�������������i=n;i>=1;i--��
#include<stdio.h>
#include<iostream>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	int a[100];//��Ϊ��ĿҪ��������Ԫ�أ�������char
	int i;
	
	for(i=1;i<=n;i++){
		cin>>a[i];
	} 
	
	for(int count=n;count>=1;count--)
	{
		cout << a[count] << " ";
	}
	
	
	
	return 0;
}