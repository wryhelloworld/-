//��Ȼ����Ŀ����û��˵��������������ַ������ͣ�Ϊʲô����ǿ����ַ������ʹ����أ�
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	string a[5]={"","","","",""};
	for(int i=0;i<5;i++)  getline(cin,a[i]);
	//���ﲹ��һ��getline�÷��������Խ���һ���ַ����������ո񣩱�cin�����ַ������ã�cin����ʱ�����ո��ֹͣ��
	// getline(cin���ַ�����)��
	//����Ҫ��#include<string>��

	int m,n;
	cin>>m>>n;
	swap(a[m-1],a[n-1]);
	for(int i=0;i<5;i++) cout<<a[i]<<endl;
	return 0;
}