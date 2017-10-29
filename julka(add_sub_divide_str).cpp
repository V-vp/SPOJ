	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		string str1,str2;
		
		for(int t=0;t<10;t++)
		{
			cin>>str1>>str2;
		
			reverse(str1.begin(),str1.end());
			reverse(str2.begin(),str2.end());
		
			int len1 = str1.length();
			int len2 = str2.length();
		
			for(int i=len1;i<len2;i++)
				str1.append("0");
			
			for(int i=len2;i<len1;i++)
				str2.append("0");
			int d,c=0;
			for(int i=0;i<len1 || i<len2;i++)
			{
				d = (str1[i]-'0')+(str2[i]-'0')+c;
				c =d/10;
				d%=10;
				str1[i] ='0'+d;
			}
			while(c)
			{
				string s;
				s ='0'+(c%10);
				str1.append(s);
				c/=10;
			}
			//cout<<str1<<"\n";
			c=0;
			int divlen = str1.length();
			//cout<<divlen;
			for(int i=divlen-1;i>=0;i--)
			{
				d = c*10+(str1[i]-'0');
				c = d%2;
				d/=2;
				str1[i]=d+'0';
			}
			
			reverse(str1.begin(),str1.end());
			for(int i=0;i<divlen;i++)
			{
				if(str1[i]=='0')
				{
					str1.erase(str1.begin()+0);
				}
				else break;
			
			}
			cout<<str1<<"\n";
			reverse(str1.begin(),str1.end());
		
			int minlen = str1.length();
		
			for(int i=len2;i<minlen;i++)
				str2.append("0");
			c=0;
			for(int i=0;i<minlen;i++)
			{
				d = (str1[i]-'0'-c)-(str2[i]-'0');
				if(d<0)
				{
					d+=10;
					c=1;
				}else c=0;
				str1[i]='0'+d;
			}
			reverse(str1.begin(),str1.end());
			cout<<str1<<"\n";
		
		}
	}
