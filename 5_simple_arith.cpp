#include<iostream>
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include<iomanip>
using namespace std;

void line(int x)
{
	for (int i=0;i<x;i++)
	{
		cout<<"-";
	
	}
		cout<<endl;
}
void add(string str,int i)
{
	int lenstr = str.length();
	string num1=str.substr(0,i),num2=str.substr(i+1);
	int num1_len = num1.length(),num2_len = num2.length();
	/*char *str1;
	char *str2;
	str1 = new char[num1.size()+1];
	str2 = new char[num2.size()+1];
	//len1 = strlen()
	
	strcpy(str1,num1.c_str());
	strcpy(str2,num2.c_str());
	
	
	long long int first = atoi(str1);
	long long int seconds = atoi(str2);*/
	
	static int array1[501];	
		
		for(int i=0;i<num1_len;i++)
		{
			array1[i]=num1[i]-'0';
		
		}	
	static int array2[501];	
		
		for(int i=0;i<num2_len;i++)
		{
			array2[i]=num2[i]-'0';	
		}
	
	int sum[10000];
	for(i=)

	int sumlen = 0;
	int dummy=sum;
	while(dummy>0)
	{
		dummy = dummy/10;
		sumlen++;
	}
	num2 = '+'+num2;
	if(num2.length()>=num1.length() && num2.length()>=sumlen)
	{
		int numlen = num2.length();
		cout<<setw(numlen)<<num1<<"\n";
		cout<<num2<<"\n";
		line(numlen);
		cout<<setw(numlen)<<sum<<"\n";		
	}
	else if(num2.length()<num1.length() && num1.length()>=sumlen)
	{
		int numlen = num1.length();
		cout<<num1<<"\n";
		cout<<setw(numlen)<<num2<<"\n";
		line(numlen);
		cout<<setw(numlen)<<sum<<"\n";		
	}
	else if(num2.length()>=num1.length() && num2.length() < sumlen )
	{
		int numlen = sumlen;
		cout<<setw(numlen)<<num1<<"\n";
		cout<<setw(numlen)<<num2<<"\n";
		line(numlen);
		cout<<sum<<"\n";		
	}
	
	
}



int sub(string str,int i)
{
	int lenstr = str.length();
	string num1=str.substr(0,i),num2=str.substr(i+1);
	char *str1;
	char *str2;
	str1 = new char[num1.size()+1];
	str2 = new char[num2.size()+1];
	//len1 = strlen()
	
	strcpy(str1,num1.c_str());
	strcpy(str2,num2.c_str());
	
	
	long long int first = atoi(str1);
	long long int seconds = atoi(str2);
	
	long long int sum = first-seconds;
	
	int sumlen = 0;
	int dummy=sum;
	while(dummy>0)
	{
		dummy = dummy/10;
		sumlen++;
	}
	num2 = '-'+num2;
	if(num2.length()>=num1.length() && num2.length()>=sumlen)
	{
		int numlen = num2.length();
		cout<<setw(numlen)<<num1<<"\n";
		cout<<num2<<"\n";
		line(numlen);
		cout<<setw(numlen)<<sum<<"\n";		
	}
	else if(num2.length()<num1.length() && num1.length()>=sumlen)
	{
		int numlen = num1.length();
		cout<<num1<<"\n";
		cout<<setw(numlen)<<num2<<"\n";
		line(numlen);
		cout<<setw(numlen)<<sum<<"\n";		
	}
	else if(num2.length()>=num1.length() && num2.length() < sumlen )
	{
		int numlen = sumlen;
		cout<<setw(numlen)<<num1<<"\n";
		cout<<setw(numlen)<<num2<<"\n";
		line(numlen);
		cout<<sum<<"\n";		
	}
	
	
}



int mul(string str,int i)
{
	
	int lenstr = str.length();
	string num1=str.substr(0,i),num2=str.substr(i+1);
	char *str1;
	char *str2;
	str1 = new char[num1.size()+1];
	str2 = new char[num2.size()+1];
	//len1 = strlen()
	
	strcpy(str1,num1.c_str());
	strcpy(str2,num2.c_str());
	
	
	int first = atoi(str1);
	int second = atoi(str2);
	
	int sum = first*second;
	
	int sumlen = 0;
	int dummy=sum;
	while(dummy>0)
	{
		dummy = dummy/10;
		sumlen++;
	}
	num2 = '*'+num2;
	if(num2.length()>=num1.length() && num2.length()>=sumlen)
	{
		int numlen = num2.length();
		cout<<setw(numlen)<<num1<<"\n";
		cout<<num2<<"\n";
		line(num2.length());
		int multi,count=0,b;
		while(second>0)
		{
			b=second%10;
			multi = first * b;
			cout<<setw(numlen-count)<<multi<<"\n";
			second /=10;count++;
				
		}	
		if(count>1)
		{
			line(numlen);
			cout<<setw(numlen)<<sum<<"\n";
					
		}
	}
	else if(num2.length()<num1.length() && num1.length()>=sumlen)
	{
		int numlen = num1.length();
		cout<<num1<<"\n";
		cout<<setw(numlen)<<num2<<"\n";
		line(num1.length());
		int multi,count=0,b;
		while(second>0)
		{
			b=second%10;
			multi = first * b;
			cout<<setw(numlen-count)<<multi<<"\n";
			second /=10;count++;
				
		}	
		if(count>1)
		{
			line(numlen);
			cout<<setw(numlen)<<sum<<"\n";
					
		}		
	}
	else if(num2.length()>=num1.length() && num2.length() < sumlen )
	{
		int numlen = sumlen;
		cout<<setw(numlen)<<num1<<"\n";
		cout<<setw(numlen)<<num2<<"\n";
		line(numlen);
		int multi,count=0,b;
		while(second>0)
		{
			b=second%10;
			multi = first * b;
			cout<<setw(numlen-count)<<multi<<"\n";
			second /=10;count++;
				
		}	
		if(count>1)
		{
			line(sumlen);
			cout<<sum<<"\n";			
		}		
	}
}

int main()
{
int t,i;
scanf("%d\n",&t);
string str;
for(int k=0;k<t;k++)
{
cin>>str;
cout<<"\n"<<str<<"\n";
	int len = str.length();
		for(int i=0;i<len;i++)
		{
			if(str[i]=='+')
				add(str,i);
			else if(str[i]=='-')
				sub(str,i);
			else if(str[i]=='*')
				mul(str,i);
			
		}

//cout<<str[k];
}
return 0;
}
