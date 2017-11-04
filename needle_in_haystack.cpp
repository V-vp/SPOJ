	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		ios_base::sync_with_stdio(0);cin.tie(NULL);
		unsigned long long int i,len1,len2,j;
		string str1,str2;
		while(cin>>len1>>str1>>str2)
		{
			int count=0;
			len2 = str2.length();
			if(len1>len2)
				cout<<"\n\n";
			else
			{
				for(i=0;i<=len2-len1;i++)
				{
					if(str1 == str2.substr(i,len1))
					{
						cout<<i<<"\n";
						count=1;
					}
				}
			
				if(count==0)
					cout<<"\n\n";
			}
		}
	}
	
