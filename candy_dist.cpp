	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long int
	int main()
	{
		ll n;
		scanf("%lld",&n);
		
		while(n)
		{
			ll array1[n],array2[n];
			for(ll i=0;i<n;i++)
				scanf("%lld",&array1[i]);
			for(ll i=0;i<n;i++)
				scanf("%lld",&array2[i]);
				
			sort(array2,array2+n);
			sort(array1,array1+n,greater<long long int>());
			ll sum=0;
			for(ll i=0;i<n;i++)
			{
				sum+=array1[i]*array2[i];
			}
			printf("%lld\n",sum);
			
			scanf("%lld",&n);
		}
	}
		
