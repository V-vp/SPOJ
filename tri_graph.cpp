	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long int
	int main()
	{
		ll row;
		scanf("%lld",&row);
		ll count=1;
		while(row)
		{	
			ll array[row+2][3];
		
			for(ll i=0;i<row;i++)
			{
				for(ll j=0;j<3;j++)
				{
					scanf("%lld",&array[i][j]);
				}
			}
			array[0][2]+=array[0][1];
			array[1][0]+=array[0][1];
			array[1][1]+=min(array[0][1],min(array[0][2],array[1][0]));
			array[1][2]+=min(array[0][1],min(array[0][2],array[1][1]));
			//cout<<"\n\n";
			/*for(int i=0;i<3;i++)
			{
				cout<<array[1][i]<<" ";
			}*/
			//cout<<"\n";
			ll minv;
			for(ll i=2;i<row;i++)
			{
				
				for(ll j=0;j<3;j++)
				{
					if(j==0)
					{
						array[i][j] += min(array[i-1][j],array[i-1][j+1]);
					}
					else if(j==1)
					{
						array[i][j] += min(array[i-1][j],min(array[i-1][j+1],min(array[i-1][j-1],array[i][0])));
					}
					else if(j==2)
					{
						array[i][j] += min(array[i-1][j],min(array[i-1][j-1],array[i][1]));
					}
					
					
					//cout<<array[i][j]<<" ";
				}
				//cout<<"\n";
			}
			//cout<<"\n";
			cout<<count<<". "<<array[row-1][1]<<"\n";
			cin>>row;
			count++;
			
		}
	}
