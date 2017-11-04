#include<iostream>
using namespace std;
int main()
{
unsigned int i,j,k,t,m,n,p;
cin>>t;
if(t>=1 && t<=10)
{
	for(i=0; i<t; i++)
	{
		cin>>m>>n;
		if(n<m or ((m<1 or m>1000000000) or (n<1 or n>1000000000)) or n-m>100000)
			continue;
		else
		{
			for(j=m;j<=n;j++)
			{
				for(k=2;k<=j;k++)
				{
					if(j%k==0 || j!=2 || j!=k)
					{
						break;
					}	
					else
						cout<<j<<"\n";
						break;
				}
			}
		}
	}
}
return 0;
}
