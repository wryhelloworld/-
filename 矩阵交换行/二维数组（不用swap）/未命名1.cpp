//�����ͦ����˼�ģ�������Ҫע�������һ��Ԫ�ص��±���0
//�����ǲ���swap��д���ġ�

#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int a[5][5];
	int n=0,m=0,t;

	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>n;
	cin>>m;
	for(int j=0;j<5;j++)
	{
		t=a[m-1][j];
		a[m-1][j]=a[n-1][j];
		a[n-1][j]=t;
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}