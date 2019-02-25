#include<iostream>
using namespace std;
class Bank
{
	int count;
	public:
		Bank():count(0)
		{}
		int getcount()
		{
			return count;
		}
		void operator ++()
		{
			++count;
		}
		void operator --()
		{
			--count;
		}
};
int main()
{
	Bank b1;
	int y=1,ch,c;
	do
	{
		cout<<"\n1.Enter\n2.Exit\n3.Display count\nEnter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:++b1;
				break;
			case 2:--b1;
				break;
			case 3:{
				c=b1.getcount();
				cout<<"\nTotal count is:"<<c;
				}
				break;
			default:cout<<"Wrong choice";
		}
		cout<<"\nDo you want to continue:";
		cin>>y;
	}while(y==1);
	return 0;
}
