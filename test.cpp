#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s = "123";
	int n = atoi((s.substr(0,1)).c_str());
	printf("%d\n",n);
	return 0;
}
