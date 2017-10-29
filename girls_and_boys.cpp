	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int a,b;
		cin>>a>>b;
		while(a!=-1 && b!=-1)
		{		
			int out = 0;
			int minv = min(a,b);
			int maxv = max(a,b);
			minv++;
			out = maxv/minv;
			if(maxv%minv)
				out++;
		
			cout<<out<<"\n";
			cin>>a>>b;
		}
	}
