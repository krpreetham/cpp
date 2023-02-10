#include<iostream>

using namespace std;

int cal(int n,int *a)
{
	int sum=0,min=a[0];
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
		if(sum<min)
		{
			min=sum;
		}
	}
	return min;
}

int main()
{
	int n=9,a[n]={-4,-5,-2,-6,-3,-8,-2,10,-5};
	cout<<cal(n,a)<<endl;
	return 0;
}
