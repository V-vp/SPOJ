	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		float t;
		cin>>t;
		//cout<<t;
		while(t!=0)
		{
			//cout<<t;	
			float a=0;
			float n=0;
			while(a<=t)
			{
				n=n+1;
				a = a+1/(n+1);
				
			}
			cout<<n<<" card(s)"<<"\n";
			cin>>t;
		}	
	}
