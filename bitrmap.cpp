	#include<bits/stdc++.h>
	using namespace std;
	
	int rever(int i,int j)
	{
		int count=0;
		for(int p=j;p>=0;p--)
		{
			if(array[i][p]==1)
				break;
			count++;
		}
		return count;
	}
	
	int straight(int i,int j)
	{
		int count=0;
		for(int p=j;p<n;p++)
		{
			if(array[i][p]==1)
				break;
			count++;
		}
		return count;
	}
	
	int main()
	{
		ios_base::sync_with_stdio(0);cin.tie(NULL);
		int t;
		scanf("%d\n",&t);
		while(t--)
		{
			int n,m;
			scanf("%d %d\n",&n,&m);
			int array[n+1][m+1],dp[n+1][m+1];
			string str[n];
			for(int i=0;i<n;i++)
				cin>>str[i];
				
			for(int i=0;i<n;i++)
				for(int j=0;j<m;j++)
					array[i][j]=str[i][j]-'0';
				
			for(int i=0;i<n;i++)
				for(int j=0;j<m;j++)
					dp[i][j]=min(straight(array,i,j),rever(array,i,j));
		}
	}
