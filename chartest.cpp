#include<bitset>
#include<iostream>
using namespace std;
int main()
{
char c;
char d;
c=55;
d=128;
cout<<"unsigned c is :"<<bitset<8>(c)<<endl;
cout<<"char d is :"<<bitset<8>(d)<<endl;

cout<<"AND of both are : "<<(bitset<8>(c)&bitset<8>(d))<<endl;
cout<<"XOR of both are : "<<(bitset<8>(c)^bitset<8>(d))<<endl;
char g;
for(int i=0;i<8;i++)
{cout<<"In the loop";
g=c&d;
cout<<"G="<<g<<endl;
if(g=='128')
{cout<<"1";}
else if(g=='0')
{cout<<"0";}
c=c<<1;

}
}
