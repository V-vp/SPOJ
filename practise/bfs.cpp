	#include<bits/stdc++.h>
	using namespace std;
	list<int> adj[10002];
	
	pair<int,int> bfs(bool visited[],int n,int s)
	{
		int dis[n+1]={0};
		memset(dis,-1,sizeof(dis));
		queue<int> q;
		q.push(s);
		dis[s] = 0;
		//visited[s]=true;
		
		while(!q.empty())
		{
			int t = q.front();
			q.pop();
			list<int>::iterator i;
			for(i=adj[t].begin();i!=adj[t].end();++i)
			{
				if(dis[*i]==-1)
				{
					q.push(*i);
					//visited[*i] = true;
					dis[*i] = dis[t]+1;
					
				}
			}
		}
		
		int maxdis = 0;
		int nodeindex;
		
		for(int i=1;i<=n;i++)
		{
			if(dis[i]>maxdis)
			{
				maxdis = dis[i];
				nodeindex = i;
			}
		}
		return make_pair(nodeindex,maxdis);
	}
	
	int main()
	{
	
		pair<int,int>t1,t2;
		int n,a,b;
		cin>>n;
		//list<int> adj[n+1];
		for(int i=0;i<(n-1);i++)
		{
			cin>>a>>b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		bool visited[n+1];
		for(int i=0;i<=n;i++)
			visited[i]=false;
		
		/*for(int a=1;a<=n-1;a++)
    {
    for (list<int>::iterator i=adj[a].begin(); i!=adj[a].end(); i++)
       cout << *i << " ";
  
    cout << endl;
  } */
		
		t1 = bfs(visited,n,1);
		t2 = bfs(visited,n,t1.first);
		cout<<t2.second<<"\n";		
			
	}
