#include<iostream>
#include<string>
using namespace std;
int main()
{
 	string w="aaeioot";
	string vowels="aeiou";
	int c=0;
	for(int i=0;i<w.length();i++)
	{
		for(int j=0;j<vowels.length();j++)
		{
			if(w[i]==vowels[j]/*&&vowels[j]!=0*/)
			{
				vowels[j]='0';
				c++;
			}
		}
	}
	if(c==5)
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
}
