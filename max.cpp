#include<iostream>
using namespace std;
int n;
class Array
{
	int a[100],max,min;
	public:
	void read()
	{
		cout<<"Enter the no. of elements:";
		cin>>n;
		cout<<"Enter the elements:";
		for(int i=0;i<n;i++)
			cin>>a[i];
	}
	void find_Max()
	{
		max=a[0];
		for(int i=0;i<n;i++)
			if(a[i]>max)
				max=a[i];
		cout<<"\nMaximum is:"<<max;
	}
	void find_Min()
	{
		min=a[0];
		for(int i=0;i<n;i++)
			if(a[i]<min)
				min=a[i];
		cout<<"\nMinimum is:"<<min;
	}
};
int main()
{
	int ch,y=1;
	do
	{
		Array *p=new Array;
		p->read();
		cout<<"\n1.Max\n2.Min\nEnter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:p->find_Max();
				break;
			case 2:p->find_Min();
				break;
			default:cout<<"Wrong Choice";
		}
		cout<<"\nDo you want to continue:";
		cin>>y;
	}while(y==1);
	return 0;
}
