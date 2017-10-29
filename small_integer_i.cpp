#include<iostream>
using namespace std;
int array[200];

void fact(int x)
{
    int i=0,m=0,f=x;
    while(f>0)
    {
        int n = f%10;
		//sum=n+sum*10;
		array[i]=n;
		f /=10;
	i++;
	m++;
    }
    

    int b;
    for(b=2;b<x;b++)
    {
	int temp =0;

        for(int j=0;j<i;j++)
        {
            int y = array[j]*b+temp;
            array[j] = y%10;
            temp = y/10;

        }
        while(temp>0)
        {
            array[i]=temp%10;
		temp/=10;
		i++;m++;
        }

    }
    for(int j=m-1;j>=0;j--)
    {

        cout<<array[j];
    }
    cout<<"\n";

}
int main()
{
    int t,f;
	cin>>t;
    while(t-->0)
    {
        cin>>f;
        fact(f);

    }

}
