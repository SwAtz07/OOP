#include<iostream>
#include<stdio.h>
using namespace std;
class Employee
{
	public:
	int id;
	char name[50];
	int age;
	float bpay;
	char des[50];
	int exp;
	void read()
	{
		cout<<"ID:";
		cin>>id;
		getchar();
		cout<<"Name:";
		cin.getline(name,50);
		//getchar();
		cout<<"Age:";
		cin>>age;
		cout<<"Basic Pay:";
		cin>>bpay;
		getchar();
		cout<<"Designation:";
		cin.getline(des,50);
		//getchar();
		cout<<"Experience:";
		cin>>exp;
	}
};
class Otherincome:public virtual Employee
{
	public:	
	float income;
	char source[50];
	void reado()
	{
		cout<<"Income:";
		cin>>income;
		getchar();
		cout<<"Source:";
		cin.getline(source,50);
	}
};
class Increment:public virtual Employee
{
	public:
	float incr;
	void cal_increment()
	{
		if(exp>25)
			incr=5000;
		else
			incr=2000;
	}
};
class NetSalary:public Otherincome,public Increment
{
	public:
	float totsal;
	void cal_netsalary()
	{
		totsal=income+bpay+incr;
	}
	void display()
	{
		cout<<"\nEmployee Details:\n";
		cout<<"ID:"<<id;
		cout<<"\nName:"<<name;
		cout<<"\nAge:"<<age;
		cout<<"\nBasic Pay:"<<bpay;
		cout<<"\nDesignation:"<<des;
		cout<<"\nExperience:"<<exp;
		cout<<"\nTotal Salary:"<<totsal;
	}
};
int main()
{
	NetSalary n;
	n.read();
	n.reado();
	n.cal_increment();
	n.cal_netsalary();
	n.display();
	return 0;
}

		

