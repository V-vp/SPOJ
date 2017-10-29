	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int t,count,x;
		cin>>t;
		while(t)
		{	count=1;
			vector <int> mob;
			stack <int> stk;
			for(int i=0;i<t;++i)
			{
				cin>>x;
			
				while(stk.size()&&stk.top()<x)
				{
					mob.push_back(stk.top());
					stk.pop();
				}
				stk.push(x);
			}
		
			while(stk.size())
			{
				mob.push_back(stk.top());
				stk.pop();
			}
			//count=0;
			for(int i=0;i<mob.size();++i)
			{
				if(mob[i]!=i+1)
				{
					count = 0;
					break;
				}
			}
			if(count)
				cout<<"yes\n";
			else
				cout<<"no\n";
			cin>>t;
			
		}
		return 0;	
	}
	
