#include<iostream>
using namespace std;

double fibo(double r)
{
if (r<=2)
return 1;
else
cout<<r<<"\n";
return fibo(r-1)+fibo(r-2);
}


int main(int c,char **v)
{
double r;
cout<<sizeof(double);
cin>>r;
cout<<r<<"\n";
cout<<fibo(r)<<endl;
}
