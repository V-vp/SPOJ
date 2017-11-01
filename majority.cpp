	//moore voting algo
	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int t;
		scanf("%d",&t);
		while(t--)
		{
			long long int n;
			scanf("%lld",&n);
			long long array[n],maxv=0,count=0;
			for(long long int i=0;i<n;i++)
			{	
				scanf("%lld",&array[i]);
				//maxv = max(maxv,array[i]);		
			}
			//cout<<maxv;
			//cout<<maxv;
			long long int candi = 0,num=1;
			for(int i=0;i<n;i++)
			{
				if(array[candi]==array[i])
					num++;
				else
					num--;
				if(num==0)
				{
					candi = i;
					num=1;
				}
			}
			
			
			for(long long int i=0;i<n;i++)
			{	
				if(array[candi]==array[i])
					count++;		
			}
			//cout<<count;
			if(count>=(n/2+1))
				printf("YES %lld\n",array[candi]);
			else
				printf("NO\n");
		}
	}
