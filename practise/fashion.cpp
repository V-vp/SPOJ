	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int t,p;
		cin>>p;
		while(p-->0)
		{
			
				cin>>t;	
	
				int male[t],female[t];
				for(int i=0;i<t;i++)
				{
					cin>>male[i];
				}
				for(int i=0;i<t;i++)
				{
					cin>>female[i];
				}
				//sort(male,male+t);
				//sort(male,female+t);
				
				int a = 0;
				for(int i=0;i<t;i++)
				{
					a +=male[i]*female[i]; 				
				}
				cout<<a<<"\n";
			
			
		}
	
	}
