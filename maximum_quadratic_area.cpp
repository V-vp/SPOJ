	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int t;
		scanf("%d",&t);
		while(t--)
		{
			double a,b,c,d,peri,area;
			cin>>a>>b>>c>>d;
			peri = (a+b+c+d)/2;
			area = (peri-a)*(peri-b)*(peri-c)*(peri-d);
			area = sqrt(area);
			cout<<fixed<<setprecision(2)<<area<<"\n";
		}
	}
