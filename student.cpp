#include<iostream>
#include<stdio.h>
using namespace std;
class Student
{
	int usn;
	char name[20];
	int marks[3];
	int av;
	public:
		void read()
		{
			cout<<"Enter USN:";
			cin>>usn;
			getchar();
			cout<<"Enter the name:";
			cin.get(name,20);
			cout<<"Enter the marks for sub1:";
			cin>>marks[0];
			cout<<"Enter the marks for sub2:";
			cin>>marks[1];
			cout<<"Enter the marks for sub3:";
			cin>>marks[2];
		}
		void avg()
		{
			int temp;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<(3-(i+1));j++)
					if(marks[j]>marks[j+1])
					{
						temp=marks[j];
						marks[j]=marks[j+1];
						marks[j+1]=temp;
					}
			}
			int max1,max2;
			max1=marks[2];
			max2=marks[1];
			av=(max1+max2)/2;
		}
		void display()
		{
			cout<<"\nUSN:"<<usn;
			cout<<"\nName:"<<name;
			cout<<"\nAvg marks:"<<av;
		}
};
int main()
{
	Student s[10];
	int n;
	cout<<"Enter the no of student:";
	cin>>n;
	for(int i=0;i<n;i++)
		s[i].read();
	cout<<"\nDetails:\n";
	for(int i=0;i<n;i++)
	{
		s[i].avg();
		s[i].display();
	}
	return 0;
}
			
			
