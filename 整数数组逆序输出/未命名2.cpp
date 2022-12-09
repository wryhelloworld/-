//学到了
//以后写数组输入，就用i=1;i<=n;i++。这样好理解
//要逆序输出，就用i=n;i>=1;i--。
#include<stdio.h>
#include<iostream>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	int a[100];//因为题目要求是整数元素，不能用char
	int i;
	
	for(i=1;i<=n;i++){
		cin>>a[i];
	} 
	
	for(int count=n;count>=1;count--)
	{
		cout << a[count] << " ";
	}
	
	
	
	return 0;
}