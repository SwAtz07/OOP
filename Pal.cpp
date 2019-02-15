#include<iostream>
using namespace std;
class Palindrome
{
	int r;
	public:
	Palindrome():r(0)
	{}
	void rev(int n)
	{
		int i;
		i=n;
		while(i>0)
		{
			r=(r*10)+(i%10);
			i=i/10;
		}
		//cout<<"\n"<<n<<" "<<r<<"\n";
		if(r==n)
			cout<<n<<" is a palindrome";
		else
			cout<<n<<" is not a palindrome";
	}
};
int main()
{
	Palindrome P;
	int n;
	cout<<"Enter the number:";
	cin>>n;
	P.rev(n);
	return 0;
}
