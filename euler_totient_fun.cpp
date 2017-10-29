	#include<bits/stdc++.h>
	#define ll long long int
	using namespace std;
	
	
	ll tot(ll n)
	{
		ll result = n;
		for(int p=2;p<=sqrt(n);p++)
		{
			if(n%p==0)
			{
				while(n%p==0)
					n/=p;
				result -= result/p;
			}
		}
		
		if(n>1)
			result-=result/n;
		return result;
	}
	
	int main()
	{
		ll t;
		scanf("%lld",&t);
		while(t--)
		{
			ll n,a;
			scanf("%lld",&n);
			a = tot(n);
			cout<<a<<"\n";
		}
	
	}
