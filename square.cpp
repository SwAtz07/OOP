#include<iostream>
#include<stdio.h>
using namespace std;
class employee
{
	protected:
	char name[30];
	int exp;
	float sal;
	public:
		void read()
		{
			getchar();
			cout<<"Enter the name:";
			cin.getline(name,30);
			cout<<"Enter the experience:";
			cin>>exp;
			cout<<"Enter the salary:";
			cin>>sal;
		}
};
class department:public employee
{
	public:
	char dept_name[30];
	void readd()
	{
		getchar();
		cout<<"Enter the department name:";
		cin.getline(dept_name,30);
	}
};
class senior:public department
{
	public:
	void display()
	{
		cout<<"\nName:"<<name;
		cout<<"\nExperience:"<<exp;
		cout<<"\nSalary:"<<sal;
		cout<<"\nDepartment:"<<dept_name;
	}
	void expdis()
	{
		if(exp>10)
		{
			cout<<"\nName:"<<name;
			cout<<"\nExperience:"<<exp;
			cout<<"\nSalary:"<<sal;
			cout<<"\nDepartment:"<<dept_name;
		}
	}
};
int main()
{
	senior s[5];
	int ch,y=1;
	for(int i=0;i<5;i++)
	{
		s[i].read();
		s[i].readd();
	}
	do
	{
		cout<<"1.Display\n2.Senior\nEnter the choice:";
		cin>>ch;
		if(ch==1)
			for(int i=0;i<5;i++)
				s[i].display();
		else
			for(int i=0;i<5;i++)
				s[i].expdis();
		cout<<"\nDo you want to continue:";
		cin>>y;
	}while(y==1);
	return 0;
}
			

	

