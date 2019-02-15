#include<iostream>
using namespace std;
class Prime
{
	int l,u,fac,i,j;
	public:
	void gen(int l,int u)
	{
		for(i=l;i<u;i++)
		{
			fac=0;
			for(j=1;j<11;j++)
				if(i%j==0)
					fac+=1;
			if(fac<3)
				cout<<"\t"<<i;
		}
	}
};
int main()
{
	Prime p;
	int n1,n2;
	cout<<"Enter the lower limit:";
	cin>>n1;
	cout<<"Enter the upper limit:";
	cin>>n2;
	p.gen(n1,n2);
	return 0;
}
