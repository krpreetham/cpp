#include<iostream>

using namespace std;

int cal(int n,int *a)
{
	int temp=1,c=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				a[j]+=temp;
				c=c+temp;
				temp++;
			}
		}
		temp=1;
	}
	return c;
}

int main()
{
	int n=4,a[n]={1,1,1,4};
	cout<<cal(n,a)<<endl;
	return 0;
}
