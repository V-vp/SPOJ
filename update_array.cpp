	//https://www.hackerearth.com/practice/data-structures/advanced-data-structures/fenwick-binary-indexed-trees/tutorial/
	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long int
	ll array[100005],tree[100005];
	void update(ll x, ll val,ll n)
	{
      for(; x <= n; x += x&-x)
        tree[x] += val;
	}
	
	ll query(ll x)
	{
	     ll sum = 0;
	     for(; x > 0; x -= x&-x)
	        sum += tree[x];
	     return sum;
	}
	
	int main()
	{
		int t;
		scanf("%d",&t);
		while(t--)
		{
			ll n,u;
			memset(tree,0,sizeof tree);
			scanf("%lld %lld",&n,&u);
			//for(ll i=0;i<=n;i++)
			//	array[i]=0;
			while(u--)
			{
				ll l,r,val;
				scanf("%lld %lld %lld",&l,&r,&val);
				update(l+1,val,n);
				update(r+2,-val,n);
			}
			ll q;
			scanf("%lld",&q);
			while(q--)
			{
				ll a;
				scanf("%lld",&a);
				printf("%lld\n",query(a+1));
			}
			
		}
	}
