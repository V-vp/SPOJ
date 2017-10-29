#include<bits/stdc++.h>
using namespace std;



int array[200][200];
int n,m;
int po(int i,int j)
{
	
	queue<int> q;
	q.push(i);
	q.push(j);
	array[i][j]=0;	
	while(!q.empty())
	{
		
		int x = q.front();
		q.pop();
		int y = q.front();
		q.pop();
		int dist = array[x][y]+1;
		if(x-1>=0 && dist<array[x-1][y])
		{
			q.push(x-1);
			q.push(y);
			array[x-1][y] = dist;
		}
		if(x+1<n && dist<array[x+1][y])
		{
			q.push(x+1);
			q.push(y);
			array[x+1][y] = dist;
		}
		if(y-1>=0 && dist<array[x][y-1])
		{
			q.push(x);
			q.push(y-1);
			array[x][y-1] = dist;
		}
		if(y+1<m && dist<array[x][y+1])
		{
			q.push(x);
			q.push(y+1);
			array[x][y+1] = dist;
		}
		
		
		
	}
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		vector < pair<int,int> > vc;
		//array[n][m];
		scanf("%d %d",&n,&m);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				char ch;
				cin>>ch;
				if(ch=='1')
				{
					array[i][j]=INT_MIN;
					vc.push_back(make_pair(i,j));
				}
				else
					array[i][j] = INT_MAX;
			}
		}
		
		for(int i=0;i<vc.size();i++)
		{
			po(vc[i].first,vc[i].second);
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
				printf("%d ",array[i][j]);
				
			printf("\n");
		}
		printf("\n");
	}
}

