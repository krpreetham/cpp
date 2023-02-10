#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v)
{
	cout<<"Elements are : ";
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}

int main()
{
	int ele;
	vector<int> v;
	char i;
	do
	{
		cout<<"enter the element to add to vector\n";
		cin>>ele;
		v.push_back(ele);
		cout<<"To add element to vector once again press 'y'\n";
		cin>>i;
	}while(i=='y');
	display(v);
	return 0;
}
