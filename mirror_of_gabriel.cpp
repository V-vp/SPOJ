	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			string str1,str2;
			cin>>str1;
			str2 = str1;
			reverse(str2.begin(),str2.end());
			if(str1.compare(str2))
				cout<<"NO\n";
			else
				cout<<"YES\n";			
		}
	}
	
