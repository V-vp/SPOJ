	#include<bits/stdc++.h>
	#define ll long long int
	using namespace std;
	int main()
	{
		ll t,b=1;
		cin>>t;
		while(t--)
		{
			ll n;
			cin>>n;
			ll array[n+9]={0},dp[n+9]={0};
			if(n==0)
			{
				cout<<"Case "<<b++<<": 0\n";
				continue;
			}
			for(ll i=0;i<n;i++)
			{
				cin>>array[i];
			}
			ll a=0;
			for(ll i=0;i<n;i++)
			{
				if((i-1)<0)
					dp[i] = max(a+array[i],a);
				else if((i-2)<0)
					dp[i] = max(a+array[i],dp[i-1]);
				else
					dp[i] = max(dp[i-2]+array[i],dp[i-1]);
			}
			cout<<"Case "<<b++<<": "<<dp[n-1]<<"\n";
		
		}
	}
