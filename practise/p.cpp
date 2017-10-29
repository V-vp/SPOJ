#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> my;
	stack<int>stk;
	cout<<stk.size()<<"\n";
	
	for(int i=1;i<=10;i++)
		my.push_back(i);
	
	for(int i=0;i<my.size();i++)
		cout<<my[i]<<" ";
		
	cout<<"\n";
	my.erase(my.begin(),my.begin()+2);
	for(int i=0;i<my.size();i++)
		cout<<my[i]<<" ";
	
}
