#include<iostream>

using namespace std;

int cal(int n,int k,int *a)
{
	int f=1,c=0;
	for(int i=0;i<k;i++)
	{
		for(int j=i-1;j>=0;j--)
		{
			if(a[i]==a[j])
			{
				f=0;
				break;
			}
		}
		if(f)
			c++;
		f=1;
	}
	return c;
}

int main()
{
	int n=10,k=7,a[n]={2,1,2,1,1,1,4,5,6,1};
	cout<<cal(n,k,a)<<endl;
	return 0;
}
