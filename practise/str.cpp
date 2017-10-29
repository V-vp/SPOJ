	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int sum[100];
		string str;
		str = "465845 + 8";
		bool i = isdigit(str[3]);
		cout<<i;
		int j=0,count;
		for(int i=0;i<str.length();i++)
		{
			if(isdigit(str[i]))
			{
				count=1;
				sum[j] = (str[i]-'0')+sum[j]*10;
			}
			else
				 
		
		}
		  
	  return 0; 
	}
