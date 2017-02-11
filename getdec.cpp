#include<iostream>
#include<cmath>
using namespace std;

int opcode[]={0,0,0,1,0,1,0,1};
int getdec(int a,int b)
{
int s=0,val=0;

for(int i=b;i>=a;i--)
{
val=val+opcode[i]*pow(2,s);
s++;
}
return val;
}

int main()
{
int t=0;
t=getdec(0,7);
cout<<t;
}
