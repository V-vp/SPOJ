	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		string str;
		while(cin>>str)
		{
			if(str=="0" || str=="1")
				cout<<str<<"\n";
			else
			{	
				reverse(str.begin(),str.end());
				int len = str.length();
				int d,c=0,x;
				for(int i=0;i<len;i++)
				{
					d = str[i]-'0';
					x = d*2+c;
					c = x/10;
					str[i] =  x%10+'0';	
				}
				while(c)
			{
				string s;
				s ='0'+(c%10);
				str.append(s);
				c/=10;
			}
			
				//cout<<str<<"\n";
				int minlen = str.length();
				string str2="2";
				for(int i=1;i<minlen;i++)
					str2.append("0");
				//cout<<str2<<"\n";
				c=0;
				for(int i=0;i<minlen;i++)
				{
					d = (str[i]-'0'-c)-(str2[i]-'0');
					//d = d-2;
					if(d<0)
					{
						d+=10;
						c=1;
					}else c=0;
					str[i]='0'+d;
				}
				reverse(str.begin(),str.end());
				if(str[0]=='0')
					str.erase(str.begin() + 0);

				cout<<str<<"\n";
			}
				
		}
	}
