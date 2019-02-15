#include<iostream>
using namespace std;
class Eo
{
	int num;
	public:
	void check(int num)
	{
		if(num%2==0)
			cout<<num<<" is even";
		else
			cout<<num<<" is odd.";
	}
};
int main()
{
	Eo e;
	int n;
	cout<<"Enter the number:";
	cin>>n;
	e.check(n);
	return 0;
}
