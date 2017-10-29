	#include<bits/stdc++.h>
	using namespace std;
	#define ULL long long
	int main()
	{	
		ULL int t,n;
		
		cin>>t;
		cout<<"\n";
		while(t-->0)
		{
			cin>>n;
			//scanf("\n%lld",&n);
			ULL int array[n];
			ULL int a=0;
			for(ULL int i=0;i<n;i++)
			{
				cin>>array[i];
				a =(a+array[i])%n;
			}
			
			if(a%n==0)
			{
				cout<<"YES"<<"\n";
			}
			else
				cout<<"NO"<<"\n";
		}
	
	}
