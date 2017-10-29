	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			int hero,tower,damage;
			cin>>hero>>tower>>damage;
			int array[hero],count=0;
			for(int i=0;i<hero;i++)
			{
				cin>>array[i];
			}
			
			for(int i=0;i<hero;i++)
			{
				if(array[i]>damage)
				{	
					count +=1; 
					array[i]-=damage;
					i--;
				}
			}
			
			if(count>=tower)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
	}
