#include<iostream>
#include<stdio.h>
using namespace std;
class Bank
{
	int accno;
	char name[100];
	char type[100];
	float bal;
	public:
		void assign()
		{
			cout<<"Enter the Acc.No:";
			cin>>accno;
			getchar();
			cout<<"Enter the Name:";
			cin.get(name,100);
			getchar();
			cout<<"Enter the Acc type:";
			cin.get(type,100);
			getchar();
			cout<<"Enter the balance:";
			cin>>bal;
		}
		void deposit()
		{
			int amt;
			cout<<"Enter the amount:";
			cin>>amt;
			bal+=amt;
		}
		void withdraw()
		{
			int amtn;
			cout<<"Enter the amount to be withdrawn:";
			cin>>amtn;
			if(bal>=amtn)
			{
				cout<<"\nWithdraw Successful";
				bal-=amtn;
				cout<<"\nCurrent balance is:"<<bal;
			}
			else
				cout<<"\nWithdraw not possible insufficient balance";
		}
		void display()
		{
			cout<<"\nName:"<<name;
			cout<<"\nBalance:"<<bal;
		}
};
int main()
{
	Bank b;
	int ch,y=1;
	b.assign();
	do
	{
		cout<<"\n1.Deposit\n2.Withdraw\n3.Display\nEnter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:b.deposit();
				break;
			case 2:b.withdraw();
				break;
			case 3:b.display();
				break;
			default:cout<<"Wrong choice";
		}
		cout<<"\nDo you want to continue:";
		cin>>y;
	}while(y==1);
	return 0;
}
	
			
		
