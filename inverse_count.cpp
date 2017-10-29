	#include<bits/stdc++.h>
	#define ll long long int 
	using namespace std;
	
	
	ll mergesort(ll array[],ll temp[],ll first,ll mid,ll last)
	{
		ll i=first,j=mid,k=first,inv=0;
		
		while(i<mid && j<=right)
		{
			if(array[i]<=array[j])
				temp[k++] = array[i++];
			else
			{	
				temp[k++] = array[j++];
				inv +=(mid-1); 	
			}
		}
		
		/*while(i<mid)
			temp[k++] = array[i++];
		
		while(j<=right)
			temp[k++]=array[j++];
			
		for()*/
		return inv;
	}
	
	ll _merge(ll array[],ll temp,ll first,ll last)
	{
		ll mid,inv = 0;
		if(first<last)
		{
			mid = (first+last)/2;
			inv = _merge(array,temp,first,mid);
			inv+=_merge(array,temp,mid+1,last);
			inv+=mergesort(array,temp,first,mid+1,last);
		}
		
		return inv;
	}
	
	ll merge(ll array[],ll size)
	{
		ll *temp = (int *)malloc(sizeof(ll)*size);
		return _merge(array,temp,0,size-1);
	}
	
	int main()
	{
		LL t,n;
		scanf("%lld",&t);
		//cin>>t;
		printf("\n");
		while(t--)
		{
			scanf("%lld",&n);
			LL array[n];
			for(LL i=0;i<n;i++)
			{
				scanf("%lld",&array[i]);
			}
			//cout<<"\n";
			cout<<merge(array,n);

		}
		
		return 0;
	}
