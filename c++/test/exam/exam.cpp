#include<iostream>

using namespace std;

int cal(int n,int a[])
{
	int c=1,sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				a[j]=a[j]+c;
				c++;			
			}
		}
		c=1;
		sum=sum+a[i];
	}
	return sum;
}

int main()
{
	int n=5,a[n]={1,4,5,4,5};
	cout<<cal(n,a)<<endl;
}


