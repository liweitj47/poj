#include<iostream>
#include<stdio.h>
#include<memory.h>
using namespace std;
int dp[20][20];
int mac[20][20];
int sel[20][20];
int s[20];
int main()
{
	memset(s,0,sizeof(s));
	memset(sel,0,sizeof(sel));
	memset(dp,0,sizeof(dp));
	memset(mac,0,sizeof(mac));
	int n,m;
	cin>>n>>m;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			cin>>mac[i][j];
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			dp[i][j] = dp[i-1][j];	//choose nothing for this company
			sel[i][j] = 0;
			for(int k = 1; k <= j; k++)
			{
				int r = dp[i-1][j-k]+mac[i][k-1];
				if(dp[i][j] <= r)
				{
					dp[i][j] = r;
					sel[i][j] = k;
				}
			}
		}
	}
	int remain = m;
	int mm = 0;
	for(int i = 0; i <= m; i++)
	{
		if(mm <= dp[n-1][i])
		{
			mm = dp[n-1][i];
			remain = i;
		}
	}
	for(int i = n-1; i >= 0; i--)
	{
		s[i] = sel[i][remain];
		remain -= s[i];
	}
	printf("%d\n",mm);
	for(int i = 0; i < n; i++)
	{
		printf("%d %d\n",i+1,s[i]);
	}
	return 0;
}
