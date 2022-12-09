//学到了#include<bits/stdc++.h>万能头文字
#include<bits/stdc++.h> 
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	int a[n],b[n],sum=0;
	
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>b[i];
		sum+=a[i]*b[i];
	}
	cout<<sum<<endl;
	return 0;
}