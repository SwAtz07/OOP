#include<iostream>
#include<stdio.h>
using namespace std;
class Employee
{
	int EMPCODE;
	char EMPNAME[20];
	public:
		void getdata()
		{
			cout<<"Enter the Employee Code:";
			cin>>EMPCODE;
			getchar();
			cout<<"Enter the Name:";
			cin.get(EMPNAME,20);
		}
		void display()
		{
			cout<<"\nEMPCODE:"<<EMPCODE;
			cout<<"\nNAME:"<<EMPNAME;
		}
};
int main()
{
	Employee E[6];
	for(int i=0;i<6;i++)
		E[i].getdata();
	cout<<"\nThe details are:\n";
	for(int i=0;i<6;i++)
		E[i].display();
	return 0;
}
