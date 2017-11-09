	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		string str;
		getline(cin,str);
		//cout<<str;
		while(str[0]!='*')
		{
			int len = str.length();
			//cout<<str;
			char c = toupper(str[0]);
			int count=1;
			for(int i=0;i<len;i++)
			{
				
				if(str[i]==' ')
				{
					if(toupper(str[i+1])==c)
					{
						count = 1;
						c= toupper(str[i+1]);
					}
					else
					{
						count=0;
						break;
					}
				}	
			}
			if(count)
				cout<<"Y\n";
			else
				cout<<"N\n";
			getline(cin,str);
		}
	}

