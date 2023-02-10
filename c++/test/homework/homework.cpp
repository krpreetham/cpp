#include<iostream>

using namespace std;

int cal(int n,int *a,int *t)
{
	int sum=0,l;
	for(int i=0;i<n&&t[i]>0;i++)
	{
		l=a[i];
		for(int j=i+1;j<n;j++)
		{
			if(t[i]==t[j])
			{
				if(a[i]>=a[j])
					l=a[i];
				else
					l=a[j];
				t[j]=0;
				a[i]=l;
			}
		}
		sum=sum+l;
	}
	return sum;
}

int main()
{
	int n=6,a[n]={10,21,54,61,41,100},t[n]={2,3,4,3,3,4};
	cout<<cal(n,a,t)<<endl;
	return 0;
}
