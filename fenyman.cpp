	#include<iostream>
	using namespace std;
	int main()
	{
		int sqr;
		unsigned long long no;
		cin>>sqr;
		while(sqr!=0)
		{
	
				no = (sqr*(sqr+1)*(2*sqr+1))/6;
				cout<<no<<"\n";
				cin>>sqr;
		}
	}
