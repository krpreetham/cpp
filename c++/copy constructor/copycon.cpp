#include<iostream>

using namespace std;

class Hotel
{
	public:
		int regNo;
		Hotel(int reg)
		{
			regNo=reg;
		}
		Hotel(Hotel &h)
		{
			regNo=h.regNo;
		}
};

int main()
{
	Hotel h1(21),h2(100);
	cout<<"Values before calling copy constructor"<<endl;
	cout<<"Hotel 1 RegNo is "<<h1.regNo<<endl;
	cout<<"Hotel 2 RegNo is "<<h2.regNo<<endl;
	h1=h2;
	//Hotel h2(h1);
	cout<<"Values after calling copy constructor"<<endl;
	cout<<"Hotel 1 RegNo is "<<h1.regNo<<endl;
	cout<<"Hotel 2 RegNo is "<<h2.regNo<<endl;
}
