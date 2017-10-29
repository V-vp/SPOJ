	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		long long int n,i;
		cin>>n;
		while(n!=-1)
		{	
			long long int a=1;
			for(i=0;a<n;i++)
			{
				a = a+i*6;
//cout<<a<<" ";	
			}
//cout<<a<<" "<<n;
			if(a==n)
				cout<<"Y\n";
			else
				cout<<"N\n";
			cin>>n;
		}
	}
