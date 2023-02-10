#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

bool is_palindrome(string str)
{
	string P = str;
  reverse(P.begin(), P.end());
  if (str == P)
	{
	  return true;
  }
  else
	{
		return false;
  }
}

bool is_halindrome(string s)
{
		if(is_palindrome(s)&&s.length()>=2)
			return true;
		else if(s.length()>=2)
		{
			string s1,s2;
			int len=s.length();
			if(len%2==0)
			{
				s1=s.substr(0,len/2);
				s2=s.substr(len/2,len);
			}
			else
			{
				s1=s.substr(0,len/2);
				s2=s.substr(len/2+1,len);
			}
			if(is_halindrome(s1)||is_halindrome(s2))
					return true;
		}
		return false;
}

int cal(int n,string *str)
{
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(is_halindrome(str[i]))
			c++;
	}
	return c;
}

int main()
{
	int n=4;
	string s[n]={"abcbazmnbnm","asdfdsa","aksdhgg","qweqwpasdcaabckazmybnm"};
	cout<<cal(n,s)<<endl;
	return 0;
}
