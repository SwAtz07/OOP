#include<iostream>
using namespace std;
class Polygon
{
	public:
		int a,b;
		void read()
		{
			cout<<"Enter the sides:";
			cin>>a>>b;
		}
		virtual float area()
		{
			cout<<"Areas of polygon";
		}
};
class Triangle:public Polygon
{
	public:
		virtual float area()
		{
			return 0.5*a*b;
		}
};
class Rectangle:public Polygon
{
	public:
		virtual float area()
		{
			return a*b;
		}
};
int main()
{
	Polygon *p;
	float ar;
	int ch,y=1;
	do
	{
		cout<<"\n1.Triangle\n2.Rectangle\nEnter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:{
					Triangle t;
					t.read();
					p=&t;
					ar=p->area();
					cout<<"\nArea:"<<ar;
				}
				break;
			case 2:{
					Rectangle r;
					r.read();
					p=&r;
					ar=p->area();
					cout<<"\nArea:"<<ar;
				}
				break;
			default:cout<<"\nWrong Choice";
		}
		cout<<"\nDo you want to continue:";
		cin>>y;
	}while(y==1);
	return 0;
}
			
		
