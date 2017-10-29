#include<bits/stdc++.h>
using namespace std;
int main()
{	int count=1,i,j;	
	for(i=1;i<10;i++)
	{
		for(j=1;j<2;j++)
		{	
			if(count==3)
				break;
			count+=1;
		}
		if(count==3)
			break;
	}

	cout<<i<<" "<<j;
}			
