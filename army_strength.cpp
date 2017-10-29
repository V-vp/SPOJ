	#include<bits/stdc++.h>
	#define LL long long
	using namespace std;
	int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			int a,b,gp=0,mp=0;
			cin>>a>>b;
			int god[a],mech[b];
			for(int i=0;i<a;i++)
			{
				cin>>god[i];
				//gp+=god[i];
			}
			for(int i=0;i<b;i++)
			{
				cin>>mech[i];
				//mp+=mech[i];
			}
			sort(god,god+a,greater<int>());
			sort(mech,mech+b,greater<int>());
			if(god[0]>=mech[0])
			cout<<"Godzilla\n";
			else
			cout<<"MechaGodzilla\n";
			
		
		}
	}
