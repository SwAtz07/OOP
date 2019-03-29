#include<iostream>
using namespace std;
class shape
{
	public:
	float b,h;
	void read()
	{
		cout<<"Enter the sides:";
		cin>>b>>h;
	}
};
class rectangle:public shape
{
	public:
	float area;
	void compute()
	{
		area=b*h;
	}
	void display()
	{
		cout<<"Area of Rectangle:"<<area;
	}
};
class triangle:public shape
{
	public:
	float area1;
	void computet()
	{
		area1=0.5*b*h;
	}
	void displayt()
	{
		cout<<"Area of Triangle:"<<area1;
	}
};
int main()
{
	int ch;
	cout<<"1.Rectangle\n2.Triangle\nEnter your choice:";
	cin>>ch;
	if(ch==1)
	{
		rectangle r;
		r.read();
		r.compute();
		r.display();
	}
	else
	{
		triangle t;
		t.read();
		t.computet();
		t.displayt();
	}
	return 0;
}
