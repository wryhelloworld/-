//这个方法也同样巧妙。num[a[i]]++;
//num[]的下标同时也是a[i]的值。
//就是将桶排序方法中cin>>x;a[x]++;这两行压缩成num[a[i]]++;了

#include<bits/stdc++.h>
using namespace std;
int n;
int a[100010],num[100010]; 
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);//排序
	int maxi=a[n];//最大值
	for(int i=1;i<=n;i++)
		num[a[i]]++;//出现次数
	for(int i=0;i<=maxi;i++)
		cout<<num[i]<<endl;
	return 0;
}
