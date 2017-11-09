	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long int
	int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			int n;
			cin>>n;
			ll array[n];
			for(int i=0;i<n;i++)
				cin>>array[i];
			ll sum=0;	
			for(int i=0;i<n;i++)
			{
				sum+=(array[i]*i);
				sum-=array[i]*(n-i-1);
			}
			cout<<sum<<"\n";
		
		}		
	}
