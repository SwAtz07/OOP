#include<iostream>
using namespace std;
class Student
{
	public:
		int rollno;
		void getdata()
		{
			cout<<"\nEnter the Rollno:";
			cin>>rollno;
		}
};
class Test: public virtual Student
{
	public:
		int m1,m2;
		void readm()
		{
			cout<<"Enter the mark1:";
			cin>>m1;
			cout<<"Enter the mark2:";
			cin>>m2;
		}
};
class Sports: public virtual Student
{
	public:
		int score;
		void read1()
		{
			cout<<"Enter the score in Sports:";
			cin>>score;
		}
};
class Result: public Test, public Sports
{
	public:
		int res;
		void calc()
		{
			res=m1+m2+score;
		}
		void display()
		{
			cout<<"\nThe Result is:"<<res;
		}
};
int main()
{
	int n;
	Result r[10];
	cout<<"Enter the no of students:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		r[i].getdata();
		r[i].readm();
		r[i].read1();
		r[i].calc();
		r[i].display();
	}	
	return 0;
}

