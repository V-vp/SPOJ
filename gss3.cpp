	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long int 
	//ll sum[4*50000];
	ll tree[4*50000];
	ll maxleft[4*50000];
	ll maxright[4*50000];
	ll maxall[4*50000];
	ll array[4*50010];


	void build(ll node)
	{
		tree[node] = tree[node*2]+tree[node*2+1];
		maxleft[node] = max(maxleft[node*2],tree[node*2]+maxleft[node*2+1]);
		maxright[node] = max(maxright[node*2+1],tree[node*2+1]+maxright[node*2]);
		maxall[node] = max(max(maxall[node*2],maxall[node*2+1]),maxleft[2*node+1]+maxright[2*node]);
	}

	void build_tree(ll node,ll start,ll end)
	{
		if(start==end)
		{
			tree[node]=maxleft[node]=maxright[node]=maxall[node]=array[start];
		}
		else
		{
			ll mid = (start+end)/2;
			build_tree(node*2,start,mid);
			build_tree(node*2+1,mid+1,end);
		
			build(node);
		}

	}
	
	void modify(ll node,ll start,ll end, ll idx,ll val)
	{
		if(start==end)
		{
			array[idx]=val;
			tree[node]=maxleft[node]=maxright[node]=maxall[node]=val;
		}
		else
		{
			ll mid = (start+end)/2;
			if(start<=idx && idx<=mid)
				modify(2*node,start,mid,idx,val);
			else
				modify(2*node+1,mid+1,end,idx,val);
		
			build(node);
		}
		
		
	}
	
	void query_rec(vector<ll>&nodelist, ll node,ll start,ll end,ll l,ll r)
	{
		 if(l <= start && end <= r)
		 {
		 	nodelist.push_back(node);
		 }
		 else
		 {
		 	ll mid = (start+end)/2;
		 	if(mid>=l && start<=r)
		 	{
		 		query_rec(nodelist, 2*node, start, mid, l, r);
		 	}
		 	
		 	if (end >= l && mid<=r) 
		 	{
		        query_rec(nodelist, 2*node+1, mid+1, end, l, r);
			}
		 }
	}

	ll query(ll start, ll end,ll n) {
		vector<ll> nodelist;
		query_rec(nodelist, 1, 0, n, start, end);
		ll best = INT_MIN;
		ll tsum = INT_MIN;
		for (ll i = 0; i < nodelist.size(); i++) {
		    best = max(best, maxall[nodelist[i]]);
		    best = max(best, tsum + maxleft[nodelist[i]]);
		    tsum = max(maxright[nodelist[i]], tsum + tree[nodelist[i]]);
		}
		return best;
	}

	int main()
	{
		ll n,m,o,key,l,r,val,idx;
		scanf("%lld",&n);
		for(ll i=0;i<n;i++)
			scanf("%lld",&array[i]);
		
		build_tree(1,0,n-1);
	
		scanf("%lld",&m);
		for(ll i=0;i<m;i++)
		{
			scanf("%lld",&key);
				if(key==0)
				{
					scanf("%lld %lld",&idx,&val);
					modify(1,0,n-1,idx-1,val);
				}
				else
				{
					scanf("%lld %lld",&l,&r);
					printf("%lld\n",query(l-1,r-1,n-1));
				}
		}
		
		
	}
