//当然，题目中又没有说明这个矩阵不能是字符串类型，为什么不用强大的字符串类型处理呢？
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	string a[5]={"","","","",""};
	for(int i=0;i<5;i++)  getline(cin,a[i]);
	//这里补充一下getline用法，它可以接受一个字符串（包括空格）比cin处理字符串更好（cin接受时遇到空格就停止）
	// getline(cin，字符名称)；
	//它需要“#include<string>”

	int m,n;
	cin>>m>>n;
	swap(a[m-1],a[n-1]);
	for(int i=0;i<5;i++) cout<<a[i]<<endl;
	return 0;
}