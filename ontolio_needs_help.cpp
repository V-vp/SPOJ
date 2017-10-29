	//XOR problem

	#include<bits/stdc++.h>
	#define LL long long int
	using namespace std;
	int main()
	{
		LL t,res=0;
		scanf("%lld",&t);
		LL array[t];
		for(LL i=0;i<t;i++)
		{
			scanf("%lld",&array[i]);
		}
		for(LL i=0;i<t;i++)
		{
			res^=array[i];
		}
		printf("%lld",res);
	}
