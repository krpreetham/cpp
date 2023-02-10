#include<iostream>

using namespace std;

int cal(int n,int arr[])
{

	int sum=arr[0]+arr[n-1],i,j;
	for(i=0,j=n-1;i<n;i++,j--)
	{
		if(i==j)
			return sum - arr[i];
	  if(arr[i]+arr[j]!=sum)
		{
		  if(arr[i+1]+arr[j]==sum)
 				return sum-arr[i];
			else
				return sum-arr[j];
		}
	}
}

int main()
{
	int n=5,a[5]={2,4,10,14,22};
	cout<<cal(n,a)<<endl;
 	return 0;
}
