#include<iostream>

using namespace std;

class Complex
{
	private:
		int real,imag;

	public:
		Complex()
		{
			real=0;
			imag=0;
		}
		Complex(int r,int i)
		{
			real=r;
			imag=i;
		}

		void print()
		{
			cout<<real<<"+"<<imag<<endl;
		}

		int getReal()
		{
			return real;
		}

		int getImag()
		{
			return imag;
		}

		Complex operator +(Complex c)
		{
			Complex temp;
			temp.real=real+c.real;
			temp.imag=imag+c.imag;
			return temp;
		}
};

int main()
{
	Complex c1(4,5),c2(6,7);
	Complex c3=c1+c2;
	cout<<"real :"<<c3.getReal()<<"\n"<<"imag :"<<c3.getImag()<<endl;
	return 0;
}
