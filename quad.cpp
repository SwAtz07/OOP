#include<iostream>
#include<cmath>
using namespace std;
class Quad
{
	int a,b,c,d;
	float x1,x2;
	public:
	void read()
	{
		cout<<"Enter the coefficient of x^2:";
		cin>>a;
		cout<<"Enter the coefficient of x^1:";
		cin>>b;
		cout<<"Enter the coefficient of x^0:";
		cin>>c;
	}
	void root()
	{
		d=(b*b)-(4*a*c);
		if(d>0)
		{
			x1=((-b+sqrt(d))/(2*a));
			x2=((-b-sqrt(d))/(2*a));
			cout<<"Root are:"<<x1<<"\n"<<x2;
		}
		if(d==0)
		{
			x1=((-b+sqrt(a))/(2*a));
			cout<<"Roots are:"<<x1<<"\n"<<x1;
		}
		if(d<0)
		{
			cout<<"-"<<b<<"+ i"<<sqrt(-d)<<"/"<<(2*a);
			cout<<"\n"<<"-"<<b<<"- i"<<sqrt(-d)<<"/"<<(2*a);
		}
		cout<<"\n";
	}
};
int main()
{
	Quad q;
	q.read();
	q.root();
}
		
