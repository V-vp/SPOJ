	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int t,a,b;
		cin>>t;
		while(t--)
		{
			cin>>a;
			long long int array1[a];
			for(int i=0;i<a;i++)
				cin>>array1[i];
				
			cin>>b;
			long long int array2[b];
			for(int i=0;i<b;i++)
				cin>>array2[i];
			long long int minv=INT_MAX;;	
			for(int i=0;i<a;i++)
			{
				for(int j=0;j<b;j++)
				{
					minv = min(minv,abs(array1[i]-array2[j]));
				}
			}
			
			cout<<minv<<"\n";
			
		}
	}
