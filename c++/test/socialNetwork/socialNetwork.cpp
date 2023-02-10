#include<iostream>

using namespace std;

int cal(int n)
{
	int f=0,c=1;
	for(int i=2;i<=n+1;i++)
	{
		for(int j=2;j<=n+1;j++)
		{
			if((i!=j)&&((i%j==0)||(j%i)==0))
			{
				f=1;
				break;
			}
		}
		if(!f)
		c++;
		f=0;
	}
	return c;
}

int main()
{
	cout<<"Enter a number-";
	int n;
	cin>>n;
	cout<<"Number of groups-"<<cal(n)<<endl;
	return 0;
}
