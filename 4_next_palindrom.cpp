#include<iostream>
using namespace std;

void pallindrome(long long int x)
{
	long long int mod,sum,rem,a;
	x=x+1;
	for(;;x++)
	{
		a=x;
		sum=0;
		while(a>0)
		{
			
			mod = a%10;
			sum = mod + sum*10;
			a = a/10;
		}
		if(sum==x)
		{
			cout<<sum<<"\n";
			break;
		}
	}
}

int main()
{
	int t;
	cin>>t;
	long long int m;
	while(t-->0)
	{
		cin>>m;
		pallindrome(m);
	}
	
	return 0;
}
