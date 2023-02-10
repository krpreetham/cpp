#include<iostream>

using namespace std;

int cal(int a[],int n,int k)
{
	int temp,sum=0;;
	for(int i=0;i<k;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	sum=sum+a[i];
	}
	return sum;
}

int main()
{
	int a[7]={3,2,10,1,9,1,8},n=7,k=2;
	cout<<cal(a,n,k)<<endl;
	return 0;
}
