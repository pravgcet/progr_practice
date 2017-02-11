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
   unsigned long long int a,m,n,r,b=0;
   double t;
   cin>>a>>m;
   for(n=0;n<=m;n++)
   {
   	r=n*m+a;
  	t=sqrt(r);
   if(floor(t)==ceil(t))
   {
  	 b=t;
  	 break;
   }
   }
   if(b!=0)
   {
   cout<<"YES  "<<b<<endl;
   }
   else
   {
   cout<<"NO"<<endl;
    }
   }
   return 0;
}

