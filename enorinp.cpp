#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int main(int a,char* nam[])
{
ifstream filess;
filess.open(nam[1]);
char c;
int dc1=0,dc2=0,tdc1,tdc2;
long int n=0,k=0;
filess.get(c);
//else if(type==2)
	{
		while(c!=' ')
		{
		dc1++;
		filess.get(c);
		}
		tdc1=dc1;
		filess.seekg(-(tdc1+1),filess.cur);
		filess.get(c);
		while(c!=' ')
		{
		n=n+pow(10,--tdc1)*(c%48);
		filess.get(c);
		}					

		filess.get(c);
	
		while(c!='\n')
		{
		dc2++;
		filess.get(c);
		}
		tdc2=dc2;
		filess.seekg(-(tdc2+1),filess.cur);
		filess.get(c);
		while(c!='\n')
		{
		k=k+pow(10,--tdc2)*(c%48);
		filess.get(c);
		}		
		
	
	}
long int i,count=0;
while(n>0)
{
		i=0;
		dc2=0;tdc2=0;
		filess.get(c);
	
		while(c!='\n')
		{
		dc2++;
		filess.get(c);
		}
		tdc2=dc2;
		filess.seekg(-(tdc2+1),filess.cur);
		filess.get(c);
		while(c!='\n')
		{
		i=i+pow(10,--tdc2)*(c%48);
		filess.get(c);
		}
		if(i%k==0)
		{
		count++;
		}
n--;
}
cout<<count;




}
