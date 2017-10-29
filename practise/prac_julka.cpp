	#include<bits/stdc++.h>
	using namespace std;
	
	int main()
	{
		
	}
	
	/*
	void div()
	{
		string str1,str2;
		cin>>str1>>str2;
		reverse(str1.begin(),str1.end());
		reverse(str2.begin(),str2.end());
		cout<<str1<<" "<<str2;
		int len1 = str1.length();
		int len2 = str2.length();
		int d,c=0;
		for(int i=len1-1;i>=0;i--)
		{
			d = c*10+(str1[i]-'0');
			c=d%2; d/=2; str1[i] = '0'+d; 
		}
		cout<<" "<<str1;
	}*/
	
	/*void sub()
	{
		string str1,str2;
		cin>>str1>>str2;
		reverse(str1.begin(),str1.end());
		reverse(str2.begin(),str2.end());
		cout<<str1<<" "<<str2;
		int len1 = str1.length();
		int len2 = str2.length();
		int c=0,d;
		for(int i=len2;i<len1;i++)
		{
			str2.append("0");
		}
		for(int i=0;i<len1;i++)
		{
			d = (str1[i]-'0'-c)-(str2[i]-'0');
			if(d<0)
			{
				d+=10;
				c=1;
			}
			else c=0;
			str1[i]='0'+d;
		}
		
		cout<<" "<<str1;
		}*/
	
	
	/*void add()
	{
		int len1 = str1.length();
			int len2 = str2.length();
			for(int j=len1;j<len2;j++)
				str1.append("0");
			for(int j=len2;j<len1;j++)
				str2.append("0");
			cout<<str1<<" "<<str2;
			int i,d,c=0;
			for(i=0;i<len1||i<len2;i++)
		     {
		          d=(str1[i]-'0')+(str2[i]-'0')+c;
		          c=d/10;
		          d%=10;
		          str1[i]='0'+d;
		     }
		      while(c)
		     {
		     	  string s;
		     	  s = '0'+(c%10);
		          //cout<<s;
		          str1.append(s);
		          c/=10;
		     }
		     cout<<" "<<str1;
	
	}
	
	void(){}*/
	
	
