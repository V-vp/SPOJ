	#include<bits/stdc++.h>
	#define ULL unsigned long long
	using namespace std;
	int main()
	{
		int t;
		cin>>t;
		
		while(t--)
		{
			ULL n,k=1,i=1,j=1;
			cin>>n;
			while(k<n)
			{
				j++,k++;
				if(k==n)
					break;
				while(j>1 && k<n)
					i++,j--,k++;
				if(k==n) break;	
				
				i++,k++;
				if(k==n)
					break;
				while(i>1&&k<n)
					i--,j++,k++;
					
			}
			cout<<"TERM "<<n<<" IS "<<i<<"/"<<j<<"\n";		}
		
		
	}
