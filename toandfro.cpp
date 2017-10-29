	#include<iostream>
	#include<string.h>
	#include<bits/stdc++.h>
	using namespace std;

	int main()
	{
		string str;
		int t;
		cin>>t;
		while(t!=0)
		{
			//cout<<t;
			int i=0,row=0;
			cin>>str;
			 i=str.length();
			 row = i/t;
			string substri[row];
			int brk=0;
				for(int j=0;j<row;j++)
				{	
					  substri[j] = str.substr(brk,t);
					if(j%2!=0)
					{
						reverse(substri[j].begin(),substri[j].end());
					}
					brk=brk+t;
				}
				for(int x=0;x<t;x++)
				{
					for(int y=0;y<row;y++)
					{
						cout<<substri[y][x];
					}
				}
				cout<<"\n";
			cin>>t;
		}
		
		
	}
