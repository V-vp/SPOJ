	#include<iostream>
	using namespace std;
	int main()
	{
		unsigned long long int x,y,a,b,t;
		
		cin>>t;
		while(t-->0)
		{
			cin>>x>>y;
			if(x%2==0 && x==y)
			{
				cout<<2*x<<"\n";
			}
			else if(x%2==0 && x==y+2)
			{
				cout<<x+y<<"\n";
			}
			else if(x%2!=0 && x==y+2)
			{
				cout<<x+y-1<<"\n";
			}
			else if(x%2!=0 && x==y)
			{
				cout<<2*x-1<<"\n";
			}
			else
			{
				cout<<"No Number"<<"\n";
			}
		}

	}
