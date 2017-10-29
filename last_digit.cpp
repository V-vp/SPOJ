    #include <bits/stdc++.h>
    #define ll unsigned long long int
    using namespace std;
    //ModularExponentiaion
    ll ModularExponentiaion(ll x,ll n,int p=10)
    {
           ll ans=1,temp=x%p;
           while(n)
           {
                  if(n&1)
                  {
                         ans=(ans*temp)%p;
                  }
                  n>>=1;
				
                  temp=(temp*temp)%p;
           }
           return  ans;
    }
    int main() {
        ll b,t,a;
         cin>>t;
         while(t--)
         {
            cin>>a>>b;
            cout<<ModularExponentiaion(a,b)<<"\n";
         }
         return 0;
    }
