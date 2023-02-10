#include<iostream>

using namespace std;

int main()
{
	int n=6,a[n]={4,9,5,3,2,10},b[n],c=0;
	b[0]=0;
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]>a[i])
			{
				c++;
			}
		}
		b[i]=c;
		c=0;
	}
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<", ";
	}
	cout<<endl;
	return 0;
}
