#include<iostream>

using namespace std;

int * cal(int no_of_tab,int length, int win[])
{
	int n=win[no_of_tab-1];
	for (int i = no_of_tab-1; i >0; i--) 
	{
		win[i]=win[i-1];
	}
	win[0]=n;
	return win;
}

int main()
{
	int no_of_tab=3, length=4, win[length]={1,2,3,4};
	int * result=cal(no_of_tab, length, win);
	for(int i=0;i<length;i++)
	{
		cout<<result[i]<<", ";
	} 
	cout<<endl;
	return 0;
}
