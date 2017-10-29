	#include<iostream>
	using namespace std;
	int main()
	{
		int a,avg,x;
		int m;
		cin>>x;
		while(x!=-1)
		{
			a=0;
			avg=0;
			int array[x];
			for(int i=0;i<x;i++)
			{
				cin>>array[i];
				a += array[i];
			}
			avg = a/x;
			
			if(a%x==0)
			{
				m=0;
				for(int i=0;i<x;i++)			
				{
					if(avg>array[i])
					 m=m+avg-array[i];	
				}
				cout<<m<<"\n";
			}
			else
			{
				cout<<-1<<"\n";
			}
			
			
			cin>>x;
			
		
		}
	}

