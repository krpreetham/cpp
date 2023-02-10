#include <iostream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

int distinct_year(string str)
{
	string str2 = "";
	int n,f=1;
	vector<string> vec;
	for (int i = 0; i < str.length(); i++) 
	{
		if (isdigit(str[i]))
			str2.push_back(str[i]);
		else if (str[i] == '-')
			str2.clear();
		else if (str2.length() == 4) 
		{
			for(int i=0;i<vec.size();i++)
			{
				if(str2==vec[i])
				{
					f=0;
					break;
				}
			}
			if(f)
				vec.push_back(str2);
			f=1;
			str2.clear();
		}
		else
		str2.clear();
	}
	return vec.size();
}

int main()
{
	string str = "UN was established on 24-10-1945 UN was established on 24-10-1999 UN was established on 24-10-1998 UN was established on 24-10-1998.";
	cout << distinct_year(str)<<endl;
	return 0;
}

