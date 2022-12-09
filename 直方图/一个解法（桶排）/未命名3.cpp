//关键在于cin>>x;a[x]++;这两行。这里的思想是我们并不用数组来存储数字，而是将数字看成数组的下标，数组担任的是计数器功能。
//比如说数字1；一般来说会是cin>>a[i]，这是将数字1存储在a[1]中。那么再来一个数字1，又用cin>>a[i]，这是将数字1存储到a[2]中。
//但如果是cin>>x;a[x]++;就成了将数字1变成a[1]中的那个下标[1]。以后如果有数字1，a[1]++。如果有3个数字1,最后输出的a[1]就等于3，代表有三个1出现了。
//这样的排序方法，就是桶排。
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	int max=-1;
	int x;
	int a[100005];
	for(int i=1;i<=n;i++) 
	{
		cin>>x;
		a[x]++;
		if(x>max) max=x;
	} 
     
	for(int i=0;i<=max;i++)
	{
		cout<<a[i]<<endl;
	}
	
	return 0;
}