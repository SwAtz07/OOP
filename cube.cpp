#include<iostream>
using namespace  std;
class Side
{
	protected:
		int s;
	public:

		void accept()
		{
			cout<<"Enter the side";
			cin>>s;
		}
};
class Square: public Side
{
public:
	void calc()
	{
		cout<<s*s;
	}
};
class Cube: public Side
{
public:
	void calc()
	{
		cout<<s*s*s;
	}
};
int main()
{
	int ch;
	cout<<"1.Square\n2.Cube\nEnter choice:";
	cin>>ch;
	if(ch==1)
	{
		Square s;
		s.accept();
		s.calc();

	}
	if(ch==2)
	{
		Cube c;
		c.accept();
		c.calc();
	}
	return 0;
}
