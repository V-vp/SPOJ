    #include <bits/stdc++.h>
    using namespace std;
    //ModularExponentiaion
    int ModularExponentiaion(int x,long long n,int p=10)
    {
           int ans=1,temp=x%p;
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
         long long b;
         int t,a;
         scanf("%d",&t);
         while(t--)
         {
              scanf("%d %lld",&a,&b);
              printf("%d\n",ModularExponentiaion(a,b));
         }
         return 0;
    }
