#include<iostream>
#include<cassert>
using namespace std;
class Mobile
{
	int iemi;
	char *q="successfully";		
	int iem()
	{ return iemi;	}
	

public:
	Mobile() 
	{
	iemi=0;
	
	}
	Mobile(int a)
	{iemi=a;
	
	}
void input(int ie)
	{
	iemi=ie;
	cout<<"\n?///////////////////   ",iemi;
		
	}
void getdetail()
	{
	cout<<"\nIEMI Number is : ",iemi;
	}

};
int main()
{
int ie;
char *q;
int opt;
Mobile obj1;
Mobile obj2(77);

cout<<"Enter details of mobile : ";
cout<<"\nIEMI Number : ";
cin>>ie;
obj1.input(ie);
cout<<q;
cout<<"\nDo you want to see details :(1-yes/0-no)";
cin>>opt;
if(opt==1)
{
obj1.getdetail();
}

cout<<"\nObject 2 details are : ";
obj2.getdetail();
}
