#include<iostream>
#include<stdio.h>
#include<memory.h>
using namespace std;
int dp[110];
int num[110];
int main()
{
	memset(dp,0,sizeof(dp));
	memset(num,0,sizeof(num));
	int n;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			cin>>num[j];
		}
		if(i>0)
		{
			dp[i] = num[i]+dp[i-1];
			for(int j = i-1; j >= 1; j--)
			{
				dp[j] = max(dp[j-1]+num[j],dp[j]+num[j]);
			}
		}
		dp[0] += num[0];
	}
	int mm = 0;
	for(int i = 0; i < n; i++)
	{
		if(mm < dp[i])
			mm = dp[i];
	}
	printf("%d\n",mm);
	return 0;
}
