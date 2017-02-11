#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int main(int a,char* nam[])
{
ifstream filess;
filess.open(nam[1]);
char c;
int dc=0,type=0;
int pos,val=0;
filess.get(c);
type=1;
if(type==1)
{
	while(c!='\n')
	{
		pos=filess.tellg();
		dc++;
		filess.get(c);
		cout<<"Current position : "<<pos<<endl;
	}
	filess.seekg(-(dc+1),filess.cur);
	filess.get(c);
	cout<<"After seeking, character is : "<<c%48<<endl;
	cout<<"Number of digits are : "<<dc<<endl;
	//////////////////calculating digit value
	while(c!='\n')
	{
		val=val+pow(10,--dc)*(c%48);
		filess.get(c);
	}
	cout<<"Value is : "<<val<<endl;

}
int dc1=0,dc2=0,tdc1,tdc2,n=0,k=0;
else if(type==2)
	{
		while(c!=' ')
		{
		dc1++;
		filess.get(c);
		}
		tdc1=dc1;
		files.seekg(-(tdc1+1),filess.cur);
		filess.get(c);
		while(c!=' ')
		{
		n=n+pow(10,--tdc1)*(c%48)
		filess.get(c);
		}					

		filess.get(c);
	
		while(c!='\n')
		{
		dc2++;
		filess.get(c);
		}
		tdc2=dc2;
		files.seekg(-(tdc2+1),filess.cur);
		filess.get(c);
		while(c!='\n')
		{
		n=n+pow(10,--tdc2)*(c%48)
		filess.get(c);
		}		
		
	
	}
}
