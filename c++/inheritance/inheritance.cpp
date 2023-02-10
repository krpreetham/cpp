#include<iostream>

using namespace std;

class Shape
{
	public:
	void setWidth(int w)
	{
		width=w;
	}
	void setHeigth(int h)
	{
		heigth=h;
	}
	
	protected:
	int width,heigth;
};
class Rectangle: public Shape
{
	public:
	int getArea()
	{
		return (width*heigth);
	}
};
int main()
{
	Rectangle rect;
	rect.setWidth(10);
	rect.setHeigth(20);
	cout<<"Area is "<<rect.getArea()<<endl;
	return 0;
}
