	#include <bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int t;
    	cin>>t;
    	int b=0;
    	for(int k=t;k>0;k--)
    	{
    	int j = sqrt(k);
    	
    	int count = 0;
    	for(int i=1;i<=j;i++)
    	{
    		
    		if(k%i==0)
    		{
    			count+=1;
    		}
    	}
    	
    		b += count;
    	}
    	cout<<b;
    	
    }
