	#include<bits/stdc++.h>
	using namespace std;
	

	int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			int n;
			cin>>n;
			vector<pair<int,int> > v;
			int strt,fin;
			for(int i=0;i<n;i++)
			{
					cin>>strt>>fin;
					v.push_back(make_pair(fin,strt));
			}
			
			
			
			sort(v.begin(),v.end());
			
			
			int count=1;
			int j=0;
			for(int i=1;i<n;i++)
			{
				if(v[i].second>=v[j].first)
				{
					count++;
					j=i;
				}
			}
			cout<<count<<"\n";
		}
	}
