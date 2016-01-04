#include<iostream>
#include<stdio.h>
#include<memory.h>
using namespace std;
int w[100];
int v[100];
int dp[1010];
int main()
{
	memset(dp,0,sizeof(dp));
	memset(w,0,sizeof(w));
	memset(v,0,sizeof(v));
	int m,n;
	cin>>m>>n;
	for(int i = 0; i < n; i++)
	{
		cin>>w[i]>>v[i];
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = m; j >= w[i]; j--)
		{
			dp[j] = max(dp[j],dp[j-w[i]]+v[i]);
		}
	}
	printf("%d\n",dp[m]);
	return 0;
}
