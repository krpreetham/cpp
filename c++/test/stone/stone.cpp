#include<iostream>

using namespace std;

int cal(int m,int n,int a[])
{
	int f=1,c=0,sum=0;
	for(int i=1;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==a[j])
			{
				f=0;
				break;
			}
		}
		if(f&&(sum+i<m))
		{
			c++;
			sum+=i;
		}
		f=1;
	}
	return c;
}

int main()
{
	int m=14,n=4,a[n]={4,6,8,9};
	cout<<cal(m,n,a)<<endl;
	return 0;
}
