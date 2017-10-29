	#include<bits/stdc++.h>
	#define ll long long int
	using namespace std;
	
	ll gcd(ll a,ll b)
	{
		if(!a)
			return b;
		else
			gcd(b%a,a);
	}
	
	int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			ll a,b;
			cin>>a>>b;
			ll ans = gcd(a,b);
			//cout<<ans;
			
			while(ans!=1)
			{
				a/=ans;
				b/=ans;
				ans = gcd(a,b);
			}
			cout<<b<<" "<<a<<"\n";
		}
	
	}
