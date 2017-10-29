	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			string str1,str2;
			cin>>str1;
			cin>>str2;
			int len1 = str1.length();
			int len2 = str2.length();
			
			int array[len1+9][len2+9];
			
			for(int i=0;i<=len1;i++)
				array[i][0] = i;
			for(int i=0;i<=len2;i++)
				array[0][i] = i;
			for(int i=1;i<=len1;i++)
			{
				for(int j=1;j<=len2;j++)
				{
					if(str1[i-1]==str2[j-1])
						array[i][j] = array[i-1][j-1];
					else
						array[i][j] = min(array[i-1][j-1]+1,min(array[i][j-1]+1,array[i-1][j]+1));
				
				
				}
			}	
			cout<<array[len1][len2]<<"\n";
		} 
		return 0;
	}
