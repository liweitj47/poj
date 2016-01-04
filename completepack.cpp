#include<iostream>
#include<stdio.h>
#include<memory.h>
using namespace std;
int w[30];
int v[30];
int dp[210];
int main()
{
	memset(w,0,sizeof(w));
	memset(v,0,sizeof(v));
	memset(dp,0,sizeof(dp));
	int m,n;
	cin>>m>>n;
	for(int i = 0; i < n; i++)
	{
		cin>>w[i]>>v[i];
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = w[i]; j <= m; j++)
		{
			dp[j] = max(dp[j],dp[j-w[i]]+v[i]);
		}
	}
	printf("max=%d\n",dp[m]);
	return 0;
}
