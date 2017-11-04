	
	//https://www.hackerearth.com/practice/notes/segment-tree-and-lazy-propagation/
	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long int 
	ll lazy[4*100000],tree[4*100000];
	
	void update(ll node,ll start,ll end,ll l,ll r,ll val)
	{
		if(lazy[node]!=0)
		{
			tree[node]+=(end-start+1)*lazy[node];
			if(start!=end)
			{
				lazy[node*2+1]+=lazy[node];
				lazy[node*2+2]+=lazy[node];
			}
			lazy[node]=0;
		}
		
		if(start>end || start>r || end<l)
			return;
			
		if(start>=l && end<=r)
		{
			tree[node]+=(end-start+1)*val;
			if(start!=end)
			{
				lazy[node*2+1]+=val;
				lazy[node*2+2]+=val;
			}
			return;
		}
		
		ll mid = (start+end)/2;
		update(node*2+1,start,mid,l,r,val);
		update(node*2+2,mid+1,end,l,r,val);
		
		tree[node] = tree[2*node+1] + tree[2*node+2];
		
		
	}
	
	
	ll query(ll node,ll start,ll end,ll l,ll r)
	{
		if(start>end || start>r || end<l)
			return 0;
		if(lazy[node]!=0)
		{
			tree[node]+=(end-start+1)*lazy[node];
			if(start!=end)
			{
				lazy[node*2+1]+=lazy[node];
				lazy[node*2+2]+=lazy[node];
			}
			lazy[node]=0;
		}
		
		if(start>=l && end<=r)
		{
			return tree[node];
		}
		
		ll mid = (start+end)/2;
		ll p1 = query(node*2+1,start,mid,l,r);
		ll p2 = query(node*2+2,mid+1,end,l,r);
		return (p1+p2);
	}
	
	
	int main()
	{
		ll t;
		scanf("%lld",&t);
		while(t--)
		{
			ll n,c,key,l,r,val;
			memset(lazy,0,sizeof lazy);
			memset(tree,0,sizeof tree);
			cin>>n>>c;
			while(c--)
			{
				cin>>key;
				if(key==0)
				{
					cin>>l>>r>>val;
					update(0,0,n-1,l-1,r-1,val);
				}
				else
				{
					cin>>l>>r;
					cout<<query(0,0,n-1,l-1,r-1)<<"\n";
				}
				
			}
			
		}

	}
