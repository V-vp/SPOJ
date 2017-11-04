#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
//ll sum[4*50000];
ll tree[4*50000];
ll maxleft[4*50000];
ll maxright[4*50000];
ll maxall[4*50000];
ll array[4*50010];


ll build(ll node)
{
ll t =	tree[node] = tree[node*2]+tree[node*2+1];
ll ml =	maxleft[node] = max(maxleft[node*2],tree[node*2]+maxleft[node*2+1]);
ll mr =	maxright[node] = max(maxright[node*2+1],tree[node*2+1]+maxright[node*2]);
ll ma =	maxall[node] = max(max(maxall[node*2],maxall[node*2+1]),maxleft[2*node+1]+maxright[2*node]);
return ma;
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

ll query_rec(ll node,ll start,ll end,ll l,ll r)
{
	 if(l == start && end == r)
	 {
	 	return tree[node];
	 }
	 
	 
		 ll mid = (start+end)/2;
		 if(l>mid)
		 	return query_rec(2*node+1, mid+1, end, l, r);
		 if(r<=mid)
		 	return query_rec(2*node, start, mid, l, r);
		 	
		 	 query_rec(2*node, start, mid, l, r);
		 	 query_rec(2*node+1, mid+1, end, l, r);
		 	
		 	ll f =  build(node);
		 	return f;

	 

}

/*ll query(ll l,ll r,ll n)
{
	vector<ll>nodelist;
	query_rec(nodelist,1,0,n,l,r);
	
}
*/

int main()
{
	ll n,m;
	scanf("%lld",&n);
	for(ll i=0;i<n;i++)
		scanf("%lld",&array[i]);
		
	build_tree(1,0,n-1);
	
	scanf("%lld",&m);
	for(ll i=0;i<m;i++)
	{
		ll x,y;
		scanf("%lld %lld",&x,&y);
		printf("%lld\n",query_rec(1,0,n-1,x,y-1));
	}
		
		
}
