//�������ɴ�С��������ð������
//ð�������Ǹ��ð취���������и��õ�
//sort��������Ĭ�Ͻ�������С��������
//����˵a��n�������������ʱ��i=1;i<=n;i++;
//sort��a+1,a+n+1��;
//���������ʱ��i=0;i<n;i++
//sort��a+0;a+n+0��;

#include<bits/stdc++.h>
using namespace std;
int a[105],n,sum=0;
int main() {
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1; a[i]!=a[n]; i++) 
	{
		sum+=a[i];
	}
	cout<<sum;
	return 0;
}