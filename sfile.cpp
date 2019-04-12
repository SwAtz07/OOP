#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
class Student
{
	public:
	char name[20];
	int sid;
	int marks[3];
	void read()
	{	
		getchar();
		cout<<"Name:";
		cin.getline(name,20);
		cout<<"SId:";
		cin>>sid;
		cout<<"Mark1:";
		cin>>marks[0];
		cout<<"Mark2:";	
		cin>>marks[1];
		cout<<"Mark3:";
		cin>>marks[2];
	}
	void display()
	{
		cout<<"\nName:"<<name;
		cout<<"\nSID:"<<sid;
		cout<<"\nMarks1:"<<marks[0];
		cout<<"\nMarks2:"<<marks[1];
		cout<<"\nMarks3:"<<marks[2];
	}
};
int main()
{
	Student S[20];
	int i,ch,y=1,n;
	cout<<"\nEnter the no. of students:";
	cin>>n;
	do
	{
		cout<<"\n1.Enter data\n2.Read data\nEnter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					ofstream Obj;
					Obj.open("student.txt");
					for(i=0;i<n;i++)
					{
						S[i].read();
						Obj.write((char *)&S[i],sizeof(S[i]));
					}
					Obj.close();
				}break;

			case 2:
				{
					ifstream Obj1;
					Obj1.open("student.txt");
					for(i=0;i<n;i++)
					{
						S[i].display();
						Obj1.read((char *)&S[i],sizeof(S[i]));
					}
					Obj1.close();
				}break;
			default:
				cout<<"\nInvalid Choice.";
		}
		cout<<"\nDo you want to continue:";
		cin>>y;
	}while(y==1);
}


