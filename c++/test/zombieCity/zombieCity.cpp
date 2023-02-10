#include<iostream>

using namespace std;

bool div(int a,int b)
{
	for(int i=2;i<=a&&i<=b;i++)
	{
		if((a%i==0)&&(b%i==0))
		{
			return false;
		}
	}
	return true;
}

int cal(int n,int a[])
{
	for(int i=0;i<n-1;i++)
	{
		if((a[i]>a[i+1])&&(div(a[i],a[i+1])))
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int n=5,a[n]={20,40,10,50,7};
	cout<<cal(n,a)<<endl;
	return 0;
}
