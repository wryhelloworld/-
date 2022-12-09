//这题很明显先用桶排，确定每个数字出现的次数，不是第一次出现就不输出即可
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