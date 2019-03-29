#include<iostream>
#include<cmath>
using namespace std;
class triangle
{
	public:
	float area1;
	void area(float b,float h)
	{
		area1=0.5*b*h;
		cout<<"Area of isosceles triangle is:"<<area1;
	}
	void area(float a)
	{
		area1=(sqrt(3)/2)*a*a;
		cout<<"Area of equilateral triangle is:"<<area1;
	}
	void area(float a,float b,float c)
	{
		int s;
		s=(a+b+c)/2;
		area1=sqrt(s*(s-a)*(s-b)*(s-c));
		cout<<"Area of scalene traingle is:"<<area1;
	}
};
int main()
{
	triangle t;
	float a,b,c,h;
	int ch;
	cout<<"1.Isosceles\n2.Equilateral\n3.Scalene\nEnter your choice:";
	cin>>ch;
	if(ch==1)
	{
		cout<<"Enter the base and height:";
		cin>>b>>h;
		t.area(b,h);
	}
	else if(ch==2)
	{
		cout<<"Enter the side:";
		cin>>a;
		t.area(a);
	}
	else
	{
		cout<<"Enter the three sides:";
		cin>>a>>b>>c;
		t.area(a,b,c);
	}
	return 0;
}
