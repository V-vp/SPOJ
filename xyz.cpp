    #include <bits/stdc++.h>
    using namespace std;
    int main() {
       int t,n;
       scanf("%d",&t);
       while(t--)
       {
          scanf("%d",&n);
          
          int men[n],women[n];
          for(int i=0;i<n;++i)
             scanf("%d",&men[i]);
          for(int i=0;i<n;++i)
             scanf("%d",&women[i]);   
             
          sort(men,men+n);
          sort(women,women+n);
          
          int ans=0;
          
          for(int i=0;i<n;++i)
             ans+=men[i]*women[i];
          printf("%d\n",ans);
          
       }
       return 0;
    }
