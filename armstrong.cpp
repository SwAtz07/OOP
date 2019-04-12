#include<iostream>
#include<fstream>
using namespace std;
class Armstrong
{
	public:
		int a;
		int perform(int a)
		{
			//int c;
			a=a*a*a;
			return a;
		}
		int p(int s)
		{
			s=s*s;
			return s;
		}
};
int main()
{
	Armstrong a1;
	int no,a,num,nu,sum=0,k,n;
	ofstream obj("NUM1.DAT",ios::out);
	ofstream arr("NUM.DAT",ios::out);
	cout<<"Enter the number:";
	cin>>n;
	arr<<n;
	arr.close();
	ifstream obj1("NUM.DAT",ios::in);
	//obj1.read((char*)&a1,sizeof(a1));
	if(!obj1.eof())
	{
		obj1>>no;
		//cout<<no;
		a=no;
		//cout<<a;
		num=a;
		//cout<<num;
	}
	while(num>0)
	{
		nu=num;
		//cout<<"\n"<<num;
		//cout<<"\n1";
		nu%=10;
		sum+=a1.perform(nu);
		num=num/10;
		//cout<<"\nnumdiv:"<<num;
	}
	//cout<<"\nsum:"<<sum;
	if(sum==a)
	{
		cout<<"Armstrong";
		int q=a1.p(sum);
		obj<<q<<"\n";
	}
	else
		cout<<"\nNot Armstrong";
	obj.close();
	obj1.close();
	return 0;
}
