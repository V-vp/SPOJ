	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			long int n,val=1;
			//string str;
			char str[10000];
			cin>>n;
			map<string,int> account;
			while(n--)
			{
				gets(str);
				account[(string)str]++;
			}
			//map <string,int>::iterator itr;
			int itr;
			for(typeof(account.begin())itr=account.begin();itr!=account.end();++itr)
			{
				cout<<"\n"<<itr->first.c_str()<<itr->second;
			}
			cout<<"\n";
		}
	}
