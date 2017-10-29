	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int array[10],j,b;
		for(int i=0;i<10;i++)
			cin>>array[i];
		int a=0;
		for(j=0;j<10;j++)
		{
			a+=array[j];
			if(a>=100)
				break;
		}
		if(j>0)
		 b = a-array[j];
		if(abs(100-b)>=abs(100-a))
			cout<<a;
		else
			cout<<b;
	}
