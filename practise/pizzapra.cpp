	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int t,a,b;
		int a1=0,a2=0,a3=0;
		char c;
		cin>>t;
		while(t--)
		{
			cin>>a>>c>>b;
			//cout<<a<<b;
			if(a==3)
			{
				a3=a3+1;
			}
			else if(b==2)
			{
				a2=a2+1;
			}
			else if(b==4)
			{
				a1=a1+1;
			}
		}
		//cout<<a1<<" "<<a2<<" "<<a3<<"\n";
		int d=0;
		
		if(a3>=a1)
			a1=0;
		else if(a1!=0)
			a1 = abs(a3-a1);
		/*if(a1>=0)
			a1=0;*/
		int q=0;
		if(a2!=0)
		{
			q=a2%2;
			a2/=2;
		}
		if(q!=0 && a1!=0)
		{
			a1=a1-2;
			if(a1<0)
				a1=0;	
		}
		if(q>=0 && a1!=0)
		{
			if(a1<=4)
				a1=1;
			else
			{
				d=a1%4;
				a1/=4;
				if(d!=0)
					a1+=1;
				
			}
		}
		
	int	r =a1+a2+a3+q+1;
		//cout<<a2<<" "<<a;	
		cout<<r<<"\n";
		
	}
