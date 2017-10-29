	#include<bits/stdc++.h>
	#define LL long long
	using namespace std;
	int main()
	{
		LL int t,a,b,j;
		cin>>t;
		for(j=1;j<=t;j++)
		{
			cin>>a>>b;
			LL int array[b];
			for(long int i=0;i<b;i++)
			{
				cin>>array[i];
			}
			sort(array,array+b,greater<LL int>());
			/*for(long int i=0;i<b;i++)
			{
				cout<<array[i]<<" ";
			}*/
			LL int c=0,count=0;
			for(long int i=0;i<b;i++)
			{
				c+=array[i];
				count+=1;
				if(c>=a)
					break;
				
			}
			if(c<a)
				cout<<"Scenario #"<<j<<":"<<"\nimpossible"<<"\n";
			else
				cout<<"Scenario #"<<j<<":"<<"\n"<<count<<"\n";
		}
	
	}
