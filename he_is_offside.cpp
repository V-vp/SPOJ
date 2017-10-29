	#include <bits/stdc++.h>
	using namespace std;
	int main() 
	{
		while(1)
		{
			int a,b,gp=0,mp=0;
			cin>>a>>b;
			if(a==0 && b==0)
				break;
			int atack[a],def[b];
			for(int i=0;i<a;i++)
			{
				cin>>atack[i];
				//gp+=god[i];
			}
			for(int i=0;i<b;i++)
			{
				cin>>def[i];
				//mp+=mech[i];
			}
			sort(atack,atack+a);
			sort(def,def+b);
			if(atack[0]<def[1])
			cout<<"Y\n";
			else
			cout<<"N\n";
			
		
		}
	}
