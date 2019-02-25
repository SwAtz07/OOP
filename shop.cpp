#include<iostream>
using namespace std;
class Shop
{
	int codeno;
	float price;
	public:
		void read()
		{
			cout<<"Enter the code:";
			cin>>codeno;
			cout<<"Enter the price:";
			cin>>price;
		}
		void display()
		{
			cout<<"\nCode:"<<codeno;
			cout<<"\nPrice:"<<price;
		}
};
int main()
{
	Shop s[10];
	int k=0,i,j,a,ch,sum=0,temp,y=1;
	do
	{
		cout<<"Do you want to\n1.Add\n2.Delete\n3.Display\nEnter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					s[k].read();
					k++;
				}
				break;
			case 3:
				{
					sum=0;
					for(int i=0;i<k;i++)
					{
						s[i].display();
						sum=sum+s[i].price;
					}
					cout<<"total sum"<<sum;
				}
				break;
			case 2:
				{
					cout<<"Enter the code:";
					cin>>temp;
					for(i=0;i<k;i++)
					{
						if(s[i].codeno==temp)
						{
							for(j=i;j<k;j++)
							{
						
								s[j].codeno=s[j+1].codeno;
								s[j].price=s[j+1].price;
								k--;
							}
							break;
						}
					}		
				}
				break;
			default:cout<<"\nWrong choice";
		}
		cout<<"Do you want to continue:";
		cin>>y;
	}while(y==1);
	return 0;
}
