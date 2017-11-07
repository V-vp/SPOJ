	#include<bits/stdc++.h>
	using namespace std;
	
	bool isjava(string str)
	{
		int len = str.length();
		for(int i=0;i<len;i++)
		{
			if(str[i]=='_')
				return false;
		}
		return true;
	}
	bool iscpp(string str)
	{
		int len = str.length();
		if(str[len-1]=='_')
			return false;
		//cout<<str[len-1];
		for(int i=0;i<len;i++)
		{	
			if(str[i]<='Z')
				return false;
		}
		for(int i=0;i<len-2;i++)
		{	
			if(str[i]=='_' && str[i+1]=='_')
				return false;		
		}
		
		return true;
	}
	
	
	string translate_cpp(string str)
	{
		for(int i=0;i<str.length();i++)
		{
			if(str[i]<'a')
			{
				str[i] = str[i]+32;
				str.insert(i,"_");
				
			}
		}
		return str;
	}
	
	string translate_java(string str)
	{
		for(int i=0;i<str.length();i++)
		{
			if(str[i]=='_')
			{
				str.erase(i,1);
				str[i] = str[i]-32;
			}
		}
		return str;
	}
	
	int main()
	{
		string str;
		while(cin>>str)
		{
			//int len = str.length();
			if(str[0]=='_' || str[0]<='Z')
				cout<<"Error!\n";
			else if(isjava(str))
			{
				cout<< translate_cpp(str)<<"\n";
			}
			else if(iscpp(str))
			{
				cout<< translate_java(str)<<"\n";
			}
			else
			{
				cout<<"Error!\n";
			}
		}
	}
