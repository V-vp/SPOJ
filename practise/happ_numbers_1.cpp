	#include<bits/stdc++.h>
	#define LL unsigned long long int
	using namespace std;
	int main()
	{
		 LL b=0,n,count=1,result;
		 cin>>n;
		 while(n)
		 {
		 	b = b+((n%10)*(n%10));
		 	n/=10;
		 }
		 while(b>9)
		 {
		 
		 	result=0;
		 	while(b>0)
		 	{
		 		result = result + ((b%10)*(b%10));
		 		b/=10; 
		 	}
		 	b=result;
		 	count++;
		 	
		 }
		 if(b==1)
		 	cout<<count;
		 else
		 	cout<<"-1";
		 return 0;
	}
