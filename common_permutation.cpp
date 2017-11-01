	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		string str1,str2,str3;
		bool mark[1001];
		
		while(cin>>str1>>str2)
		{
			int len1 = str1.length();
			int len2 = str2.length();
			memset(mark,false,sizeof mark);
			str3="";
			for(int j=0;j<len1;j++) 
			{
				for(int i=0;i<len2;i++)
			 	{	
			 		if(str1[j]==str2[i] && mark[i]==false)
			 		{	//string c;
			 				//c= str2[i];
			 			str3.push_back(str1[j]);
			 			mark[i]=true;
			 			break;
			 			
			 		}		
			 	}
			 	
			 }
			 sort(str3.begin(),str3.end());
			 cout<<str3<<"\n";
		}
	
	
	}
