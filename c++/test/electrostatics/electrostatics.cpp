#include<iostream>
#include<string>

using namespace std;

int cal(int * arr,string str)
{
	int sum=0;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='P')
			sum=sum+arr[i];
		else
			sum=sum-arr[i];
	}
	return sum*100;
}

int main()
{
	int l=3, arr[l]={4,3,5};
	string str="PNP";
	cout<<cal(arr,str)<<endl;
	return 0;
}
