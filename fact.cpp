#include<iostream>
using namespace std;
int main()
{
int a,n;
double f=1;
cin>>a;
while(a--)
{
cin>>n;
f=1;
while(n>1)
{
f=f*(n);
n--;
}
cout<<f<<endl;
}
}
