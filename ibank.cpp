#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class Account
{
	public:
		char name[50];
		int accno;
		char type[50];
		float balance;
		Account():balance(0.0)
		{}
		void read()
		{
			cout<<"Enter the name:";
			cin.get(name,50);
			getchar();
			cout<<"Enter the accno:";
			cin>>accno;
			getchar();
			cout<<"Enter the acc type:";
			cin.get(type,50);
			getchar();
		}
};
class cur_acct:public virtual Account
{
	public:
		float with,amnt1;
		void cur_deposit()
		{
			cout<<"Enter the amount:";
			cin>>amnt1;
			balance+=amnt1;
			cout<<"\nBalance is:"<<balance;
		}
		void cur_display()
		{
			cout<<"\nBalance:"<<balance;
		}
		void cur_int()
		{
			balance+=(balance*12)/100;
			cout<<"\nBalance:"<<balance;
		}
		void cur_withdraw()
		{
			cout<<"\nEnter the amount to withdraw:";
			cin>>with;
			if(with<=balance)
			{
				balance-=with;
				cout<<"\nBalance:"<<balance;
			}
			else
				cout<<"\nWithdraw not possible insufficient balance";
		}
};
class sav_acct:public virtual Account		
{
	public:
		float with1,amnt;
		void sav_deposit()
		{
			cout<<"Enter the amount:";
			cin>>amnt;
			balance+=amnt;
			cout<<"\nBalance is:"<<balance;
		}
		void sav_display()
		{
			cout<<"\nBalance:"<<balance;
		}
		void sav_int()
		{
			balance+=(balance*12)/100;
			cout<<"\nBalance:"<<balance;
		}
		void sav_withdraw()
		{
			cout<<"\nEnter the amount to withdraw:";
			cin>>with1;
			if(with1<=balance)
			{
				balance-=with1;
				cout<<"\nBalance:"<<balance;
			}
			else
				cout<<"\nWithdraw not possible insufficient balance";
		}
};
class Create:public cur_acct,public sav_acct
{
};
int main()
{
	Create a1[10];
	//cur_acct c[10];
	//sav_acct s[10];
	int n,no,y=1,ch;
	char a[20];
	//cout<<"Enter the account type:";
	//cin.get(a,20);
	//getchar();
	//if(strcmp(a,'savings')==0)
	cout<<"Enter the no of customers:";
	cin>>n;
	getchar();
	for(int i=0;i<n;i++)
		a1[i].read();
	
	cout<<"Enter the account No:";
	cin>>no;
	for(int i=0;i<n;i++)
	{
		do
		{
			//getchar();
			if((strcmp(a1[i].type,"savings")==0)&&(a1[i].accno==no))
			{
				cout<<"\n1.Deposit\n2.Compute\n3.Withdraw\n4.Display\nEnter your choice:";
				cin>>ch;
				switch(ch)
				{
					case 1:a1[i].sav_deposit();
						break;
					case 2:a1[i].sav_int();
						break;
					case 3:a1[i].sav_withdraw();
						break;
					case 4:a1[i].sav_display();
						break;
					default:cout<<"Wrong choice";
				}
			}
			else if((strcmp(a1[i].type,"current")==0)&&(a1[i].accno==no))
			{
				cout<<"\n1.Deposit\n2.Compute\n3.Withdraw\n4.Display\nEnter your choice:";
				cin>>ch;
				switch(ch)
				{
					case 1:a1[i].cur_deposit();
						break;
					case 2:a1[i].cur_int();
						break;
					case 3:a1[i].cur_withdraw();
						break;
					case 4:a1[i].cur_display();
						break;
					default:cout<<"Wrong choice";
				}
			}
			cout<<"\nDo you want to continue:";
			cin>>y;
		}while(y==1);
	}
	return 0;
}
	
		
	
