	#include<bits/stdc++.h>
	using namespace std;
	list<int> adj[10002];
    
    bool iscycle(int v,bool visited[],int parent)
    {
    	visited[v] = true;
    	list<int>::iterator i;
    	for(i=adj[v].begin();i!=adj[v].end();i++)
    	{
    		if(!visited[*i])
    		{	
    			if(iscycle(*i,visited,v))
   					return true;
   			}
   			else if(*i!=parent)
   				return true;
   			  	
    	}
    	return false; 
    }
     
	bool istree(bool visited[],int n)
	{
		for(int i=1;i<=n;i++)
			visited[i]=false;
			
		if(iscycle(1,visited,-1))
			return false;
		
		for(int u=1;u<=n;u++)
		{	
			if(!visited[u])
				return false;
		}
		return true;	
	}
	int main()
	{
		int n,e,a,b;
		cin>>n>>e;
		//list<int>adj[n+1];
		bool visited[n+1];
		for(int i=0;i<e;i++)
		{	
			cin>>a>>b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		/* for(int a=1;a<=e;a++)
    {
    for (list<int>::iterator i=adj[a].begin(); i!=adj[a].end(); i++)
       cout << *i << " ";
  
    cout << endl;
  } */
		istree(visited,n)?cout<<"YES\n":cout<<"NO\n";
		
	}
