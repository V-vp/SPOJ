	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int t;
		long long int a,b;
		cin>>t;
		while(t--)
		{
			cin>>a>>b;
			if(a%2==0 && b%2==0)
			{
				if(a<=b)
					cout<<"L\n";
				else
					cout<<"U\n";			
			}
			
			else if(a%2!=0 && b%2!=0)
			{
				if(a<=b)
					cout<<"R\n";
				else
					cout<<"D\n";			
			}
			
			else if(a%2==0 && b%2!=0)
			{
				if(a<b)
					cout<<"L\n";
				else
					cout<<"D\n";
			}
			
			else if(a%2!=0 && b%2==0)
			{
				if(a<b)
					cout<<"R\n";
				else
					cout<<"U\n";
			}
			
		}	
		return 0;
	}
