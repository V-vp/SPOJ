#include<iostream>

using namespace std;
int main()
{
     int t,s;
     long long int n;
     cin>>t;
     while(t--)
     {
         cin>>n>>s;
         if(s==0)
            cout<<"Airborne wins."<<"\n";
         else
            cout<<"Pagfloyd wins."<<"\n";
     }
     return 0;
}
