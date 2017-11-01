	#include<bits/stdc++.h>
	
	using namespace std;
	
	int gcd(int a, int b)
	{
		if (b==0)
			return a;
		else
			return gcd(b,a%b);
	}
	
	int main()
	{
		int t,a;
		string str;
		cin>>t;
		while(t--)
		{
			cin>>a>>str;
			
			
			if(a==0)
			{
				cout<<str<<"\n";
			}
			else
			{
				reverse(str.begin(),str.end());
				int c=0,d;
				int divlen = str.length();
				//cout<<divlen;
				//mod
				for(int i=divlen-1;i>=0;i--)
				{
					d = c*10+(str[i]-'0');
					c = d%a;
					d/=a;
					str[i]=d+'0';
				}
				reverse(str.begin(),str.end());
				for(int i=0;i<divlen;i++)
				{
					if(str[i]=='0')
					{
						str.erase(str.begin()+0);
					}
					else break;
			
				}
				
			
			//end mod
				if(c==0)
					cout<<a<<"\n";
				else
					cout<<gcd(a,c)<<"\n";
			}		
			
		}
		
	}
