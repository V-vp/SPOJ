    #include <bits/stdc++.h>
    using namespace std;
    #define LL long long
    map <LL,LL> ans;
    LL coins(LL n)
    {
	//int ans[10000000000];
         if(n==0)
              return 0;
         else if(!ans[n])
         {
              ans[n]= max(n,coins(n/2) + coins(n/3) + coins(n/4));
	      cout<<ans[n]<<" ";
         }
         return ans[n];
    }
    int main() {
         LL n;
	 int t=0;
         while(t++<10)
         {
	      cin>>n;
              cout<<coins(n)<<"\n";
         }
         
         return 0;
    }
