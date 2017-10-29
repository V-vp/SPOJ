#include<iostream>
#include<stack>
#include<string>
using namespace std;

int prec(char x)
{
	if(x=='^')
		return 3;
	else if(x=='/' || x=='*')
		return 2;
	else if(x=='+'||x=='-')
		return 1;
	else
		return -1;
}

void postfix(string s)
{
	stack<char> st;
	st.push('N');
	string str;
	int len = s.length();
	for(int i=0;i<len;i++)
	{
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
		{
			str+=s[i];
		}
		else if(s[i]=='(')
			st.push(s[i]);
		else if(s[i]==')')
		{
			while(st.top()!='N' && st.top()!='(')
			{
				char c = st.top();
				st.pop();
				str+=c;
			}
			if(st.top()=='(')
				st.pop();
		
		}
		
		
		else
		{
			while(st.top()!='N' && prec(s[i])<=prec(st.top()))
			{
				char c = st.top();
				st.pop();
				str+=c;
			}
			st.push(s[i]);
		}
			
	}
	
	while(st.top() != 'N')
	{
		char c = st.top();
		st.pop();
		str+=c;
	}
	cout<<str<<"\n";	
}


int main()
{
	int t;
	string s;
	cin>>t;
	
	while(t-->0)
	{
		cin>>s;
		cout<<"\n";
		postfix(s);
		
	}
}
