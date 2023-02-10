#include <iostream>

using namespace std;

int cal(int l,int a[][2])
{
	int length = 0;
	for(int i = 0; i < l; i++)
	{
		 int s = a[i][1] - a[i][0];
		 length = length + s;
		 if(a[i][1] > a[i+1][0] && i < l-1)
		 {
				int c = a[i][1] - a[i+1][0];
				length = length - c;
		 }
	}
	return length;
}

int main()
{
	int l=2;
	int a[l][2]={{5,7},{8,12}};
	cout<<cal(l,a)<<endl;
	return 0;
}



1 2 3 4 5 6 7 8 9 10 11 12
