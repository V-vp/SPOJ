	#include<bits/stdc++.h>
	#define ll long long int 
	using namespace std;
	int main()
	{
		ll t;
		cin>>t;
		while(t--)
		{
			ll ans,num1;
			cin>>num1;
			ans = num1;
			while(1)
			{
				char c;
				cin>>c;
				if(c=='=')
					break;
				ll num2;
				//cin>>num;
				
				cin>>num2;
				if(c=='+')
				ans += num2;
				else if(c=='-')
				ans -=num2;
				else if(c=='*')
				ans *=num2;
				else
					ans/=num2;
				
			}
			cout<<ans<<"\n";
		}
	}
