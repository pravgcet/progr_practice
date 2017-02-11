#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
long long int d,y,x,mxd;  
double t,xx,max=0;
cin>>d;

for(int i=2;i<=d;i++)
{
t=sqrt(i);
if(floor(t)!=ceil(t))
{
for(y=1;y<=10000;y++)
{

	x=1+i*y*y;
	xx=sqrt(x);
	if(floor(xx)==ceil(xx))
	{
//	cout<<"X : "<<xx<<"  D  : "<<i<<"  Y : "<<y<<endl;
	if(xx>max)
	{
	max=xx;
	mxd=i;
	}
	break;
	}

}
}    
}
cout<<mxd<<endl;



    return 0;
}

