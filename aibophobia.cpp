	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			string str2,str1;
			cin>>str2;
			str1 = str2;
			reverse(str2.begin(),str2.end());
			int len1 = str1.length();
			
			int array[len1+9][len1+9];
			memset(array,0,sizeof(array));
			for(int i=1;i<=len1;i++)
			{
				for(int j=1;j<=len1;j++)
				{
					if(str1[i-1]==str2[j-1])
						array[i][j] = array[i-1][j-1]+1;
					else 
						array[i][j] = max(array[i-1][j],array[i][j-1]);
					
				}
			}
			
			int lcs = array[len1][len1];
			cout<<len1-lcs<<"\n";
		}
	}
