#include<iostream>
using namespace std;
class Fib
{
	int n;
	int a,b,c;
	public:
	Fib():a(0),b(1)
	{}
	void fibo(int n)
	{
		cout<<"\t"<<a<<"\t"<<b;
		int i=2;
		for(i=2;i<n-1;i++)
		{
			c=a+b;
			//if(c<=n)
			//{
				cout<<"\t"<<c;
				a=b;
				b=c;
			//}
		}
	}
};
int main()
{
	Fib f;
	int l;
	cout<<"Enter the limit:";
	cin>>l;
	f.fibo(l);
	return 0;
}
	
		
