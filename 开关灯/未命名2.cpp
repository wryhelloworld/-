//这道题目十分巧妙，首先它可以不用数组。
//教会我的，是不要一上来就敲代码。仔细分析分析题目和例子答案，联系一下，找到窍门。
//将问题简单化,便可以知道其实就是找平方数罢了
//就是看破现象看本质

#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int answer=0;
    
    for(int i=1;i*i<=n;i++)
    {
        answer=i*i;
        printf("%d ",answer);
    }
    
    return 0;
}