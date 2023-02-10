#include<iostream>

using namespace std;

int cal(int n)
{
	int a[n];
	int zeroCounter=0, alternate_counter=1, flag=1;
	for(int i=0;zeroCounter<n;i++)
	{	
		if(flag)
			a[i]=i+1;
		if(a[i]>0)
		{
			if(alternate_counter==1)
			{
				if(zeroCounter==n-1)
					return a[i];
				a[i]=0;
				alternate_counter=0;
				zeroCounter++;
			}
			else
				alternate_counter=1;
		}
		if(i==n-1)
		{
			i=-1;
			flag=0;
		}
	}
}

int main()
{
	int n=6;
	cout<<cal(n)<<endl;
	return 0;
}
