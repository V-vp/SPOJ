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
		ll max=INT_MIN,a,i;
		deque<ll> q;
		for (i = 0; i < k; ++i)
    	{
		    while ( (!q.empty()) && array[i] >= array[q.back()])
		        q.pop_back(); 	 
			    
			q.push_back(i);
    	}
		//cout<<q.front()<<"\n";
		for(;i<n;++i)
		{
			cout<<array[q.front()]<<" ";
			while((!q.empty()) && q.front()<=i-k)
				q.pop_front();
				
			while((!q.empty()) && array[i]>=array[q.back()])
				q.pop_back();
			
			q.push_back(i);
			
		}
		cout<<array[q.front()];
		cout<<"\n";
		
	}	
