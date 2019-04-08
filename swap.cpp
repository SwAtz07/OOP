#include<iostream>
using namespace std;
class Swap
{
	int c;
	public:
	void swap_value(int a,int b)
	{
		c=a;
		a=b;
		b=c;
		cout<<"A:"<<a;
		cout<<"\nB:"<<b;
	}
	void swap_address(int *a,int *b)
	{
		c=*a;
		*a=*b;
		*b=c;
	}
	void swap_reference(int &a,int &b)	
	{
		c=a;
		a=b;
		b=c;
	}
};
int main()
{
	Swap s;
	int ch,y=1,a,b;
	cout<<"Enter two nos:";
	cin>>a>>b;
	do
	{
		cout<<"\n1.Value\n2.Reference\n3.Address\nEnter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:s.swap_value(a,b);
				break;
			case 2:{s.swap_reference(a,b);
				cout<<"A:"<<a;
				cout<<"\nB:"<<b;	
				}
				break;
			case 3:{s.swap_address(&a,&b);
				cout<<"A:"<<a;
				cout<<"\nB:"<<b;
				}
				break;
			default:cout<<"Wrong choice";
		}
		cout<<"\nDo you want to continue:";
		cin>>y;
	}while(y==1);
	return 0;
}
