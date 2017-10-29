#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

char array[1000002];

void palin()
{
	int x,y;
	int len  = strlen(array);
	int flag=0;
	for(int i=0;i<len;i++)
	{
		if(array[i]!='9')
		{
			flag=1;
	
			break;
		}
	}

	if(flag==0)
	{
		array[0]='1';
		array[len]='1';
		for(int i=1;i<len;i++)
		{
			array[i]='0';
		}
	}
	else
	{
	
	flag=1;
	int mid = len/2;
	x = mid -1;
	if(len%2==0)
	{
		y=mid;
	}
	else
		y = mid+1;
	
	while(x>=0 || array[x]==array[y])
	{
		x--;
		y++;
	}
	bool leftsmall = false;
	if(x<0|| array[x]<array[y])
	{
		leftsmall = true;
	}
	
	while(x>=0)
	{
		array[y]=array[x];
		x--;
		y++;
	}
	if(leftsmall)
	{
		int carry =1 ;
		x = mid-1;
		
		if(len%2==1)
		{
			array[mid]+=carry;
			carry =  array[mid]/10;
			array[mid]%=10;
			y=mid+1;
		}
		else
			y=mid;
		while(x>=0)
		{
			array[x]+=carry;
			carry = array[x]/10;
			array[x]%=10;
			array[y++]=array[x--];
			
		}
		
	}
}
}


int main()
{
	int t;
	scanf("%d\n",&t);
	
	long long int m;
	for(int i=0;i<t;i++)
	{
		gets(array);
		palin();
		cout<<array<<"\n";
	}
	
	return 0;
}
