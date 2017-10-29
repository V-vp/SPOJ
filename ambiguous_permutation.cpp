	#include<bits/stdc++.h>
	//#define LL unsigned long long
	using namespace std;
	int main()
	{
		int t;
		
		while(1)
		{
			int i,j;
			int array1[100002],array2[100002];
			cin>>t;
			if(t==0)
				break;			
			for(i=1;i<=t;i++)
			{
				cin>>array1[i];
				//cout<<array1[i];
				array2[array1[i]] = i;	
			}
			
			int count=1;
			for(j=1;j<=t;j++)
			{
				if(array2[j]!=array1[j])
				{	
					count=0;		
					break;
				}
			}
			if(count==1)
				cout<<"ambiguous\n";
			else
				cout<<"not ambiguous\n";
			//cout<<"\n\n";
			//cin>>t;
		}
	}
