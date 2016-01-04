#include<iostream>
#include<stdio.h>
#include<memory.h>
#include<string>
#include<string.h>
#include<stdlib.h>
using namespace std;
int dp[40][6];
int main()
{
	memset(dp,0,sizeof(dp));
	int n,k;
	cin>>n>>k;
	string num;
	cin>>num;
	for(int i = 0; i < n; i++)
	{
		dp[i][0] = atoi((num.substr(0,i+1)).c_str());
		for(int j = 1; j <= k && j <= i; j++)
		{
			for(int l = 0; l < i; l++)
			{
				int result = dp[l][j-1];
				result *= atoi((num.substr(l+1,i-l)).c_str());
				if(result > dp[i][j])
					dp[i][j] = result;
			}
		}
	}
	/*
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= k; j++)
			printf("%d ",dp[i][j]);
		printf("\n");
	}*/
	printf("%d\n",dp[n-1][k]);
	return 0;
}
