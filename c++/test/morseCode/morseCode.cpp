#include<iostream>

using namespace std;

int cal(int l, string * str)
{
	int counter=0,dash_counter=0,dot_counter=0;
	for(int i=0;i<l;i++)
	{
		string s=str[i];
		if(s[0]=='.'&&s[s.length()-1]=='-')
		{
			for(int j=1;j<s.length()-1;j++)
			{
				if(s[j]=='.')
					dot_counter++;
				else
					dash_counter++;
			}
			if(dash_counter==dot_counter)
				counter++;
			dot_counter=0;
			dash_counter=0;
		}
	}
	return counter;
}

int main()
{
	int l=2;
	string str[l]={".-.-.-.-.-","...---.-"};
	cout<<cal(l,str)<<endl;
	return 0;
}
