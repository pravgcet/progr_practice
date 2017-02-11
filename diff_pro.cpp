#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   long long int d,p,m,r,b=0,n1,t1;
   double t,pp,n;
   int cnt=0;
   cin>>d>>p;
   
   if(d<0)
   {
     cout<<cnt<<endl;
   }
   else
   {
   pp=sqrt(p);
   for(n=1;n<=pp;n+=1)
   {
   	t=p/n;
  if(floor(t)==ceil(t))
   {
   	n1=n;
   	r=t;
   	if((n1-r)==d)
	   	{//cout<<n<<"   "<<r<<endl;
	   	if(n==r)
	   	{
	   	cnt+=2;
	   	}
	   	else
	   	{
	   	cnt+=4;
	   	
	   	}
	   	}
   	else if((n1-r)==-1*d)
		{//cout<<n<<"   "<<r<<endl;
		if(n==r)
	   	{
	   	cnt+=2;
	   	}
	   	else
	   	{
	   	cnt+=4;
   	}
}   	
    
   }
      
   }
   
   cout<<cnt<<endl;
   }
   
   }
   return 0;
}

