	#include<bits/stdc++.h>
	using namespace std;
	#define ULL long long
	int main()
	{
		int t;
		ULL int a,b,d,fir,sum,n;
		//scanf("%d",&t);
		cin>>t;
		while(t--)
		{
			cin>>a>>b>>sum;
			//scanf("%lld %lld %lld",&a,&b,&sum);
			n = (2*sum)/(a+b);
			d = (b-a)/(n-5);
			fir = a-2*d;
			//printf("%lld\n",n);
			
			cout<<n<<"\n";
			for(int i=0;i<n;i++)
			{
				//printf("%lld ",fir);
				cout<<fir<<" ";
				fir=fir+d;
			}
			printf("\n");
		}
	return 0;
	}
