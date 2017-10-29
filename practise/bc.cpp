#include<stdio.h>
#include<conio.h>
void main()
{
int a[10]={0},b[10]={0},c[10]={0},i,l,n,m;
//PARTIAL INITIALIZATION  WILL SET ALL INDEX BY 0 OF ARRAY A, B & C
clrscr();
printf("enter the limit of first array\n");
scanf("%d",&m);
printf("enter the limit of second array\n");
scanf("%d",&n);
printf("enter the elements of array1\n");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("enter the elements of array2\n");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}

if(m>n)
{
l=m;
for(i=0;i<m;i++)
{
c[i]=a[i]+b[i];
}
}
else
{
l=n;
for(i=0;i<n;i++)
{
c[i]=a[i]+b[i];
}
}
printf("elements of third array are\n");
for(i=0;i<l;i++)
printf("%d\n",c[i]);
getch();
}

