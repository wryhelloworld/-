//�������������Ͱ�ţ�ȷ��ÿ�����ֳ��ֵĴ��������ǵ�һ�γ��־Ͳ��������
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	int a[20005],tong[150];
	cin>>n;
	for(int i=0;i<n;i++) 
	{
		cin>>a[i];
		tong[a[i]]++;
		if(tong[a[i]]<2) cout<<a[i]<<" ";
	}
	return 0;
}