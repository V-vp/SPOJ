	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int array[101];
		bool mark[10001];
		memset(mark,false,sizeof mark);
		int t,n,i,j,b;
		cin>>t;
		for(i=0;i<t;i++)
		{
			cin>>array[i];
			cin>>n;
			for(j=0;j<n;j++)
			{
				cin>>b;
				mark[b]=true;
			}
		}
		
		for(i=0;i<t;i++)
		{
			mark[array[i]]=false;
		}
		int count=0;
		for(i=1;i<=9999;i++)
			if(mark[i])
				count++;	
	
		cout<<count;
	}
		
