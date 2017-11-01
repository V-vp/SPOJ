	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int w,n;
		cin>>w>>n;
		//while(w && n)
		//{
			int weight[n],cost[n];
			for(int i=0;i<n;i++)
			{
				cin>>weight[i]>>cost[i];
			}
			
			int KN[n+1][w+1];
			
			for(int i=0;i<=n;i++)
			{
				for(int j=0;j<=w;j++)
				{
					if(i==0||j==0)
						KN[i][j]=0;
					else if(weight[i-1]<=j)
						KN[i][j] = max(cost[i-1]+KN[i-1][j-weight[i-1]],KN[i-1][j]);
					else
						KN[i][j] = KN[i-1][j];
				}
			
			}
			/*int m=-1;
			for(int i=1;i<=w;i++)
				if(KN[n][i]==KN[n][w])
				{
					m = i;
					break;
				}
			cout<<m<<" "<<KN[n][w]<<"\n";*/
			cout<<KN[n][w]<<"\n";
			
			//cin>>w>>n;
		
		//}
	
	
	}
