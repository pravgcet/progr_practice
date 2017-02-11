#include<iostream>
#include<list>
using namespace std;
class Cls
{
public:
	int a[5];
	Cls()
	{
		a[0]=11;
		a[1]=22;
		a[3]=33;
		a[4]=44;

	}
};
list<Cls> nd;
list<Cls>::iterator it;
int main()
{
nd.push_back(Cls());
it=nd.begin();
cout<<it->a[0]<<endl;
}
/*void res()
{

	int a,b,c;
	a=10;
	b=12;
	c=a+b;
	cout<<"Before abc\n";
(*abc)();
cout<<"After abc\n";
}
void abc()
{
	int z,x,c;
	z=1;
	x=2;
	c=z+x;
	cout<<"Before pqr\n";
(*pqr)();
cout<<"After pqr\n";
}
void pqr()
{
	int z1,x1,c1;
	z1=11;
	x1=22;
	c1=z1+x1;
	cout<<"Before xyz\n";
(*xyz)();
cout<<"After xyz\n";
}
void xyz()
{
	int z2,x2,c2;
	z2=111;
	x2=222;
	c2=z2+x2;
cout<<"In xyz\n";
}

/*
int main()
{
	jmp_buf bfr1,bfr2;
	int *q;
	int *b,a[]={1,2,3,4,5};
	cout<<"bfr2 Before assigning: \n";
	if(!setjmp(bfr1))
	{	

		memcpy(bfr2,bfr1,sizeof(jmp_buf));
		cout<<"Size "<<sizeof(jmp_buf)<<endl;
		longjmp(bfr2,1);
	}
	else
	{
	cout<<"Leaving \n";
	}
	
}
*/