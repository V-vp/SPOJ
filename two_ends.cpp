	#include<bits/stdc++.h>
	#define ll long long int
	using namespace std;
	int array[2100],dp[2100][2100][2];
	
	ll aprcdp(int start,int end,int player)
	{
		if(start==end)
		return array[start];
		
		if(dp[start][end][player]!=INT_MIN)
			return dp[start][end][player];
			
		if(player==0)
		{
			dp[start][end][0] = max(array[start]-aprcdp(start+1,end,1),array[end]-aprcdp(start,end-1,1));
			return dp[start][end][0];
		}
		else
		{
			if(array[start]>=array[end])
			{
				dp[start][end][1] = array[start]-aprcdp(start+1,end,0);
				
			}
			else
			{
				dp[start][end][1] = array[end] - aprcdp(start,end-1,0);
				
			}
			return dp[start][end][1];
		}
	}	
	
	int main()
	{
	
		
		int n;
		ll count = 0;			
		while(1)
		{
			count++;
			scanf("%d",&n);
			if(n==0)
			break;
			
			//memset(dp,INT_MIN,sizeof(dp));
			
			
			
			for(int i=0;i<n;i++)
				scanf("%d",&array[i]);
			for(int j=0;j<n;j++)
			{	
			for(int i=0;i<n;i++)
			{	
				dp[j][i][0] = INT_MIN;
				dp[j][i][1]	=INT_MIN;
			}	
			}	
			//cout<<dp[1][1][1];
			//for(int i=0;i<n;i++)
					//cout<<array[i]<<" ";
			ll dpans=aprcdp(0,n-1,0);
			printf("In game %lld, the greedy strategy might lose by as many as %lld points.\n",count,dpans);
			
			
		
		}
	}
