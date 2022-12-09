//学到了 强制类型转换，就是（类型）值。

#include<bits/stdc++.h> 
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	int cnt1=0,cnt2=0,cnt3=0,cnt4=0;
	int a[105];
	
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++)
	{
		if(a[i]>=0 &&a[i]<=18)
		{
			cnt1++;
		}
		else if(a[i]>=19 &&a[i]<=35)
		{
			cnt2++;
		}
		else if(a[i]>=36 &&a[i]<=60)
		{
			cnt3++;
		}
		else if(a[i]>=61)
		{
			cnt4++;
		}
	}
	printf("%.2f%%\n",(double)cnt1/n*100);
	printf("%.2f%%\n",(double)cnt2/n*100);
	printf("%.2f%%\n",(double)cnt3/n*100);
	printf("%.2f%%\n",(double)cnt4/n*100);
	
	
	
	return 0;
}