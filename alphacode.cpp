	#include<bits/stdc++.h>
	#define LL long long
	using namespace std;
	int main()
	{
		while(1)
		{
			string str;
			cin>>str;
			if(str[0]=='0')
			 break;
			unsigned long long int array[5010]={0},x;
			array[0]=1;
			long long int len = str.length();
			for(long long int j=1;j<len;j++)
			{
				x=(str[j-1]-'0')*10+(str[j]-'0');
				if(str[j]-'0')
					array[j]=array[j-1];
				if(x>=10 && x<=26)
					array[j] += array[(j-2)<0?0:j-2];
			}
			cout<<array[len-1]<<"\n";
		}
	}
