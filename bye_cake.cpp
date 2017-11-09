	#include<bits/stdc++.h>
	using  namespace std;
	int main()
	{
		int e,f,s,m,ep,fp,sp,mp,n=0;
		while(1)
		{
			cin>>e>>f>>s>>m>>ep>>fp>>sp>>mp;
			n=0;
			if(e==-1)
				break;
			n = max(n,(e+(ep-1))/ep);
			n = max(n,(f+(fp-1))/fp);
			n = max(n,(s+(sp-1))/sp);
			n = max(n,(m+(mp-1))/mp);
			
			cout<<ep*n-e<<" "<<fp*n-f<<" "<<sp*n-s<<" "<<mp*n-m<<"\n";
			 
		
		}
	}
