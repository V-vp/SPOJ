	#include<bits/stdc++.h>
	using namespace std;
	int array[2100],dp[2100][2100];
	
	int treat(int year,int start,int end)
	{
		if(start>end)
			return 0;
		if(dp[start][end]!=-1)
			return dp[start][end];
		
		return (dp[start][end] = max(treat(year+1,start+1,end)+year*array[start],treat(year+1,start,end-1)+year*array[end]));
	}
	
	int main()
	{
		int n;
		scanf("%d",&n);
		memset(dp,-1,sizeof(dp));
		for(int i=0;i<n;i++)
			scanf("%d",&array[i]);
			
		printf("%d\n",treat(1,0,n-1));
		
	}

//https://www.quora.com/Are-there-any-good-resources-or-tutorials-for-dynamic-programming-DP-besides-the-TopCoder-tutorial/answer/Michal-Danil%C3%A1k

