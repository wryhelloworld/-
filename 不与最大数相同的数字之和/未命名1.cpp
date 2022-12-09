//将数字由大到小排序还在用冒泡排序？
//冒泡排序是个好办法，但我们有更好的
//sort（）即可默认将数字由小到大排序
//比如说a【n】，如果你输入时是i=1;i<=n;i++;
//sort（a+1,a+n+1）;
//如果你输入时是i=0;i<n;i++
//sort（a+0;a+n+0）;
//

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
