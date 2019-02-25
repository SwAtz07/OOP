#include<iostream>
#include<stdio.h>
using namespace std;
class Elect
{
	char name[20];
	int nou;
	float charge;
	float sur,d,c1,c2;
	public:
		Elect():charge(50)
		{}
		void read()
		{
			cout<<"Enter the name:";
			cin.get(name,20);
			cout<<"Enter the no. of units consumed:";
			cin>>nou;
		}
		void calc()
		{
			if(nou<=100)
				charge=0.60*nou;
			else if(nou>100&&nou<=300)
			{
				d=nou-100;
				c1=0.60*100;
				charge=(0.80*d)+c1;
			}
			else if(nou>300)
			{
				d=nou-300;
				c1=0.60*100;
				c2=0.80*200;
				charge=c1+c2+(d*0.90);
			}
			if(charge>300)
			{
				sur=(15*charge)/100;				
				charge+=sur;
			}
		}
		void display()
		{
			cout<<"\nName:"<<name;
			cout<<"\nNo of units:"<<nou;
			cout<<"\nCharge:"<<charge;
		}
};
int main()
{
	Elect e;
	e.read();
	e.calc();
	cout<<"\nCharge:\n";
	e.display();
}
