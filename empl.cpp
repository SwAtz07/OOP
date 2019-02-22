#include<iostream>
#include<stdio.h>
using namespace std;
class Employee
{
	int eno;
	char ename[20];
	int basic;
	float da,it,net,gross;
	public:
		void read()
		{
			cout<<"Enter the eno:";
			cin>>eno;
			getchar();
			cout<<"Enter the name:";
			cin.getline(ename,20);
			cout<<"Enter the basic salary:";
			cin>>basic;	
			//cout<<basic;
		}
		void nets()
		{
			da=(52*basic)/100;
			gross=basic+da;
			it=(30*gross)/100;
			net=gross-it;
		}
		void display()
		{
			cout<<"\nEno:"<<eno;
			cout<<"\nName:"<<ename;
			cout<<"\nNet salary:"<<net;
		}
};
int main()
{
	int n;
	Employee E[20];
	cout<<"Enter the no of employee:";
	cin>>n;
	for(int i=0;i<n;i++)
		E[i].read();
	for(int i=0;i<n;i++)
		
	cout<<"\nEmployee Details are:\n";
	for(int i=0;i<n;i++){
		E[i].nets();
		E[i].display();
	}
	return 0;
}

		
