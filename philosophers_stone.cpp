//http://spoj-solutions.blogspot.in/2014/12/bytesm2-philosophers-stone.html
	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int t,row,col,maxv=0;
		cin>>t;
		while(t--)
		{
			//scanf("%d %d",&row,&col);
			cin>>row>>col;
			
			int array[row+2][col+2];
			
			for(int i=0;i<row;i++)
				for(int j=0;j<col;j++)
					cin>>array[i][j];
			/*for(int i = 0 ; i < col ; i++)
            	maxv = max(maxv , array[0][i]);	*/
					
			for(int i=1;i<row;i++)
			{
				maxv=0;
				for(int j=0;j<col;j++)
				{
					if(j>0 && j<col-1)
						array[i][j] = max(array[i-1][j] + array[i][j] , max(array[i-1][j-1]+array[i][j] , array[i-1][j+1]+array[i][j]));
					else if(j>0)
						array[i][j] = max(array[i-1][j]+array[i][j],array[i-1][j-1]+array[i][j]);
					else if(j<col-1)
						array[i][j] = max(array[i-1][j]+array[i][j],array[i-1][j+1]+array[i][j]);
					maxv = max(array[i][j],maxv);	
				}
			}
			
			cout<<maxv<<"\n";
		}
		return 0;
	}
