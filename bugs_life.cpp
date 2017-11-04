//graph is bipartite or not ,
// colouring graph bfs;
	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long int
	ll graph[2010][2010];
	ll colour[2010];
	
	bool bfs(ll v,ll vertice)
	{
		colour[v]=1;
		queue<ll> q;
		q.push(v);
		while(!q.empty())
		{
			ll u=q.front();
			q.pop();
			/*if(graph[u][u]==1)
				return false;*/
			for(ll i=1;i<=vertice;i++)
			{
				if(graph[u][i] && colour[i]==-1)
				{
					colour[i]=1-colour[u];
					q.push(i);
				}
				else if(graph[u][i] && colour[i]==colour[u])
					return false;
			}
			
		}
		return true;
	}
	
	bool bipartite(ll v,ll vertice)
	{
		for(int i=1;i<=vertice;i++)
			colour[i]=-1;
		for(ll i=1;i<=vertice;i++)
		{
			if(colour[i]==-1)
			{
				if(bfs(i,vertice)==false)
				{	
					return false;
				}
			}
		}	
		return true;
	}
	
	
	
	int main()
	{
		ll t;
		scanf("%lld",&t);
		for(ll i=1;i<=t;i++)
		{
			memset(graph,0,sizeof graph);
			
			ll v,e,a,b;
			scanf("%lld %lld",&v,&e);
			for(ll j=0;j<e;j++)
			{
				scanf("%lld %lld",&a,&b);
				graph[a][b]=1;
				graph[b][a]=1;
			}
			
			if(bipartite(1,v))
			{
				printf("Scenario #%lld:\n",i);
				printf("No suspicious bugs found!\n");
			}
			else
			{
				printf("Scenario #%lld:\n",i);
				printf("Suspicious bugs found!\n");	
			}
			
			
		}
	} 
