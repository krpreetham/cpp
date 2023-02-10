#include<iostream>
using namespace std;
int main()
{
	int n,l;
	cout<<"Enter number"<<endl;
	cin>>n;
	cout<<"Enter number of line"<<endl;
	cin>>l;
	int a=n/l;
	int r=n%l;
	int f=0;
	if(r>0)
	f=1;
	n=1;
	for(int i=1;i<=l;i++)
	{
		for(int j=1;j<=a+f;j++)
		{
			cout<<n<<" ";
			n++;
		}
		cout<<endl;
		r=r-1;
		if(r==0)
		f=0;
	}
}
