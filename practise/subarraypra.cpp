	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long int	
	int main()
	{
		ll n;
		
		scanf("%lld",&n);
		ll array[n+1];
		for(ll i=0;i<n;i++)
		{
			scanf("%lld",&array[i]);
		}
		ll k;
		scanf("%lld",&k);
		ll max=INT_MIN,i,a;
		for(i=0;i<k;i++)
		{
			if(array[i]>=max)
			{	
				max=array[i];
				a=i;
			}
		}
		cout<<max<<" ";
		for(i=k;i<n-1;i++)
		{
			if(array[i]>=max)
			{
				max=array[i];
			}
			cout<<max<<" ";
		}
		if(array[n-1]>=max)
			cout<<array[n-1];
		else
			cout<<max;
		
		cout<<"\n";	
		
		
	}
