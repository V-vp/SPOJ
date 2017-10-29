#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

char array[1000002];

int main()
{
	int t;
	
	int a=99;
	char c = '0'+ a;
	cout<<c;
	cin>>t;
	while(t-- > 0)
	{
		gets(array);
		cout<<array;
		
	}
}
