#include<iostream>
#include<string>

using namespace std;

int cal(string str)
{
	int c=0;
	for(int i=0;i<=str.length()-2;i++)
	{
		if((str[i]=='1')&&((int)str[i+1]=='2')&&((int)str[i+2]=='3'))
		c++;
	}
	return c;
}

int main()
{
	string str="012304111";
	cout<<cal(str)<<endl;
	return 0;
}
