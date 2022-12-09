//求最大最小可以直接用sort函数，之后最大的就是最右边的那个。
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	float a[305]={0};
	float b[305]={0};
	float sum=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=2;i<n;i++)
	{
		sum+=a[i];
	}
	float aver=0;
	aver=sum/(n-2);
	printf("%.2f ",aver);
	
	for(int i=1;i<=(n-2);i++)
	{
		b[i]=abs(a[i+1]-aver);
	}
	sort(b+1,b+n-1);
	printf("%.2f ",b[n-2]);
	return 0;
}