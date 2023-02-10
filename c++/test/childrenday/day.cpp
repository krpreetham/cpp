#include<iostream>

using namespace std;

int cal(int n,int k,int a[])
{
	for(int i=0;i<k;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(a[i]<a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	return a[k-1];
}

int main()
{
	int n=8,k=4,a[8]={10.50,90,30,50,10,80,90};
	cout<<cal(n,k,a)<<endl;
	return 0;
}
