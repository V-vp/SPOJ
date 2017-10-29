	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		long long a;
		cin>>a;
		long long b = a&(a-1);
		//cout<<b;
		if(b==0)
			cout<<"TAK\n";
		else
			cout<<"NIE\n";
		return 0;
	}
	
