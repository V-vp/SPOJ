	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long int
	int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			ll n;
			cin>>n;
			ll len;
			if(n==0 || n==1)
				len=1;
			else
  			{
  				double x = ((n*log10(n/M_E)+log10(2*M_PI*n)/2.0));
  				len = floor(x)+1;
  			}
  			cout<<len<<"\n";
			
		}
	}
