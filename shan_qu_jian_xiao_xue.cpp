#include<iostream>
#include<stdio.h>
#include<memory.h>
using namespace std;
int dist[510];
int dp[510][510];
int main()
{
	int m,n;
	cin>>m>>n;
	memset(dp,0,sizeof(dp));
	memset(dist,0,sizeof(dist));
	for(int i = 1; i < m; i++)
		cin>>dist[i];
	for(int i = 1; i < m; i++)
	{
		for(int j = 1; j <= i && j < n; j++)
		{
			for(int k = 1; k < i; k++)
			{
				
			} 
		}
	}
	return 0;
}
