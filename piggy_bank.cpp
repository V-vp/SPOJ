//http://www.mathcs.emory.edu/~cheung/Courses/323/Syllabus/DynProg/knapsack2.html
	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			int e,f,W;
			cin>>e>>f;
			W=f-e;
			int dp[W+1];
			memset(dp, 0, sizeof dp);
			int n;
			cin>>n;
			int val[n+1],wt[n+1];
			for(int i=0;i<n;i++)
			{
				cin>>val[i]>>wt[i];
			}
			//dp[W]=INT_MAX;
			for(int i=0;i<=W;i++)
			{
				for(int j=0;j<n;j++)
				{
					if(wt[j]<=i)
						dp[i] = max(dp[i],dp[i-wt[j]]+val[j]);
				}
				
			}
			cout<<dp[W];
		}
	}
