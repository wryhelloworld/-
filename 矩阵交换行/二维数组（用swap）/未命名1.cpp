#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int a[5][5];
    int n,m;
	for(int i=0;i<5;i++)
	{
	    for(int j=0;j<5;j++)
	    {
	    	cin>>a[i][j];
		}
	}
	
	cin>>m>>n;
	//这里是直接将a[n-1]和a[m-1]两个一维数组交换
	swap(a[n-1],a[m-1]);
	//这里是直接将a[n-1]和a[m-1]两个一维数组交换
	
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