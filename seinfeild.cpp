	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		string str;
		cin>>str;
		int count=0;
		while(str[0]!='-')
		{	
			count++;
			int len = str.length();
			int ans=0,a=0;
			for(int i=0;i<len;i++)
			{
				if(str[i]=='{')
					a++;
				if(str[i]=='}')
					a--;
				if(a<0)
				{
					ans++;a+=2;
				}
				if(a>=len-i)
				{
					ans++;a-=2;
				}
			}
			cout<<count<<". "<<ans<<"\n";
			cin>>str;
		
		}
	}
