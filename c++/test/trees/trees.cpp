#include<iostream>
#include<vector>

using namespace std;

int cal(int trees_cut, int modulus)
{
	vector<int> vec;
	int tree=1;
	vec.push_back(2);
	while(tree<=trees_cut)
	{
		int v=vec[tree-1];
		int val=(v+1)%modulus;
		vec[tree-1]=-1;
		for(int i=0;i<val;i++)
		{
			vec.push_back(i);
		}
		tree++;
	}
	int c=0;
	for(int i=0;i<vec.size();i++)
	{
		if(vec[i]>=0)
			c++;
	}
	return c;
}

int main()
{
	int trees_cut=3,modulus=5;
	cout<<cal(trees_cut,modulus)<<endl;
	return 0;
}
