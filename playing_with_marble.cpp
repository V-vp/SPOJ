	#include<bits/stdc++.h>
	using  namespace std;
	int array[2000];
	int main()
	{
		int n;
		while(1)
		{
			cin>>n;
			if(n==0)
				break;
			//array[0]=0;	
			array[1]=5;
			array[2]=12;
			
			for(int i=3;i<=n;i++)
			{
				array[i] = array[i-1]+10+3*(i-3);
			}
			cout<<array[n]<<"\n";
		}
	}
