	#include<bits/stdc++.h>
	using namespace std;
	int conersion(string str)
	{
		int sum = 0;
		for(int i=0;i<str.length();i++)
		{
			if(!isdigit(str[i]))
				return -1;
			sum = (str[i]-'0')+sum*10;
		
		}
			return sum;
	}
	int main()
	{
		string s1,s2,s3,s4,s5;
		int t;
		cin>>t;
		cout<<"\n";
		for(int i=0;i<t;i++)
		{
			int st1,st2,st3;
			cin>>s1>>s2>>s3>>s4>>s5;
			//cout<<s1<<s2<<s3<<s4<<s5;
			st1 = conersion(s1);
			st2 = conersion(s3);
			st3 = conersion(s5);
			
			if(st1<0)
			{
				st1 = st3-st2;
			}
			if(st2<0)
			{
				st2 = st3-st1;
			}
			if(st3<0)
			{
				st3 = st1+st2;
			}
			cout<<st1<<" + "<<st2<<" = "<<st3<<"\n";
		}
		return 0;
	}
