#include<iostream>
#include<stdio.h>
using namespace std;
class Complex
{
	int real;
	int img;
	public:
		void getdata()
		{
			cout<<"Enter the real and imaginary part:";
			cin>>real>>img;
		}
		void display()
		{
			cout<<"\n";
			cout<<real<<"+"<<img<<"i";
		}
		Complex operator +(Complex c)
		{
			Complex temp;
			temp.real=real+c.real;
			temp.img=img+c.img;
			return temp;
		}
};
int main()
{
	Complex c1,c2,c3;
	cout<<"Enter the 1st complex no:\n";
	c1.getdata();
	cout<<"Enter the 2nd complex no:\n";
	c2.getdata();
	cout<<"\nThe sum is:\n";
	c3=c2+c1;
	c3.display();
	return 0;
}

