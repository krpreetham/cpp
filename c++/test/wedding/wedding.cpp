#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int cal(string s,int y)
{
	int c=0,f=0,num=0;
	for(int i=0;i<s.length();i++)
	{
		num=(num*10)+(s[i]-'0');
		if(num<=y)
			f=1;
		else
		{
			if(f)
				c+=1;
			num=s[i]-'0';
			f=0;
			if(num<=y)
				f=1;
			else
				num=0;
		}
	}
	if(f)
		c++;
	return c;
}


int main()
{
	string s = "1234";
	int y = 30;
	cout << cal(s, y)<<endl;
	return 0;
}

{{2,5,9}
 {3,7,10}}

