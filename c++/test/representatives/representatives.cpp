#include<iostream>
#include<stdlib.h>
using namespace std;

int * cal(int l, int arr[], int k)
{
	int *result =(int *)malloc(sizeof(int)*k);
	for(int i=0,f=k-1;i<k&&f>=0;i++,f--)
	{
		for(int j=i+1;j<l;j++)
		{
			if(arr[i]<arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		result[f]=arr[i];
	}
	return result;
}

int main()
{
	int l=10, arr[l]={950,477,55,602,881,302,859,438,551,382}, k=5;
	int * result=cal(l,arr,k);
	for(int i=0;i<k;i++)
	{
		cout<<result[i]<<" ";
	}
	cout<<endl;
	return 0;
}
