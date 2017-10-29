	#include<iostream>
	using namespace std;
	long long int diff,rat,a,b,c,d;
	
	int ap()
	{
		diff = b-a;
		d = c-b;
		if(diff==d)
			return 1;
		else
			return 0;
	
	}
	
	int main()
	{
		
		//unsigned long long no;
		cin>>a>>b>>c;
		while(a!=0 || b!=0 || c!=0)
		{
				if(ap())
				{
					cout<<"AP"<<" "<<c+diff<<"\n";
				}
				else
				{
					rat = c/b;
					cout<<"GP"<<" "<<c*rat<<"\n";
				}
				
				
				cin>>a>>b>>c;
		}
	}
