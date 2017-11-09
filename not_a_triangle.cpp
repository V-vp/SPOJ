	
	//https://www.codechef.com/wiki/tutorial-not-triangle
	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long int
	ll array[2000];
	int binarysearch(int start,int end,ll sum)
	{
		while(end-start>1)
		{
			int mid = (start+end)/2;
			if(array[mid]>sum)
				end = mid;
			else
				start = mid;
		}
		
		if(array[start]>sum)
			return start;
		return end;
	}
	
	int main()
	{
		int n;
		cin>>n;
		while(n)
		{	
			//ll array[n];
			ll ans=0;
			for(int i=1;i<=n;i++)
				cin>>array[i];
			sort(array+1,array+n+1);
			for(int i=1;i<n-1;i++)
			{	for(int j=i+1;j<n;j++)
				{
					if(array[i]+array[j]<array[n])
					{
						ll b = binarysearch(i,n,array[i]+array[j]);
						
						ans =ans+n-b+1;
					}
				}
			}	
			cout<<ans<<"\n";
			cin>>n;
		}
		
	}
