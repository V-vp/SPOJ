	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int t;
		scanf("%d",&t);
		while(t--)
		{
			int n;
			scanf("%d",&n);
			float ans=0,a=1;
			
			for(int i=1;i<=n;i++)
				ans = ans+a/i;
				
			ans = ans*n;
			printf("%.2f\n",ans);
			
		}
	}
