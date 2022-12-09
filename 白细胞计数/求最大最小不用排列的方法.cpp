//求最大最小不用排列的方法

#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	int a[n];
	
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	int max=-1,min=9999;
	
	for(int i=1;i<=n;i++)
	{
		if(a[i]>max) max=a[i];
	}
	
	for(int i=1;i<=n;i++)
	{
		if(a[i]<min) min=a[i];
	}
	
	cout<<max<<endl;
	cout<<min<<endl;
	return 0;
}
