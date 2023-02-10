#include<iostream>

using namespace std;

class Airlines
{
	protected:
		int flightNo,capacity;

	public:
		Airlines(int f,int c)
		{
			flightNo=f;
			capacity=c;
		}
		virtual void displayDetails()
		{
			cout<<"Parent class function"<<endl;
		}
};

class AirIndia: public Airlines
{
	public:
		AirIndia(int f=55334,int c=78):Airlines(f,c){}
		
		void displayDetails()
		{
			cout<<"Welcome to AirIndia"<<endl;
			cout<<"Flight Number :- "<<flightNo<<endl;
			cout<<"Flight Capacity :- "<<capacity<<" Passangers"<<endl;
		}
};

class Indigo: public Airlines
{
	public:
		Indigo(int f=99878,int c=80):Airlines(f,c){}
		
		void displayDetails()
		{
			cout<<"Welcome to Indigo"<<endl;
			cout<<"Flight Number :- "<<flightNo<<endl;
			cout<<"Flight Capacity :- "<<capacity<<" Passangers"<<endl;
		}
};
int main()
{
	cout<<"Enter 1 to select AirIndia\nEnter 2 to select Indigo\n";
	int s;
	cin>>s;
	Airlines *f;
	if(s==1)
	{
		AirIndia a;
		f=&a;
		
	}
	else if(s==2)
	{
		Indigo i;
		f=&i;
	}
	else
	{
		cout<<"Invalid input"<<endl;
		return 0;
	}
	f->displayDetails();
	return 0;
}
