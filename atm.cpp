#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int x;
float y;
cin>>x;
cin>>y;
if((x%5==0)&&((x+0.5)<=y))
{

cout<<setprecision(2)<<fixed<<y-x-0.50<<endl;
}
else
{cout<<setprecision(2)<<fixed<<y<<endl;}
}

