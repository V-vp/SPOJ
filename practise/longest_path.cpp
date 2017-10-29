	#include<bits/stdc++.h>
	using namespace std;
	list<int> adj[10002];
	
	void bfs(bool visited[],int n,int s)
	{
		int dis[n]={0};
		queue<int> q;
		visited[s] = true;
		q.push(s);
		while(!q.empty())
		{
			s = q.front();
			q.pop();
			list<int>::iterator i;
			for(i=adj[s].begin();i!=adj[s].end();i++)
			{
				if(!visited[*i])
				{	
					visited[*i]=true;
					q.push(*i);
					dis[*i] = dis[s]+1;
				}
			}
		}
		
		int maxdis = 0;
		int nodei;
		for(int i=1;i<=n;i++)
		{
			if(dis[i]>maxdis)
			{
				maxdis = dis[i];
				nodei = i; 
			}
		}
		cout<<nodei;
		
	}
	
	int main()
	{
		int n,a,b;
		cin>>n;
		list<int> adj[n+1];
		for(int i=0;i<(n-1);i++)
		{
			cin>>a>>b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		
		bool visited[n+1];
		
		for(int i=0;i<=n;i++)
			visited[i]=false;
		
		bfs(visited,n,1);
		
		
	}
