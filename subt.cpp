#include<iostream>
#include<bitset>
using namespace std;
int main()
{
int i=5,j=10,c=1,r=0;

cout<<"Bit set of i is : "<<bitset<32>(i)<<endl;
i=~i;
cout<<"Bit set of ~i is : "<<bitset<32>(i)<<endl;
cout<<"Bit set of j is : "<<bitset<32>(j)<<endl;
cout<<"Bit set of c is : "<<bitset<32>(c)<<endl;
r=i+j+c;
cout<<"Sum is "<<bitset<32>(r)<<endl;
r=r<<3;
cout<<"Sum is "<<bitset<32>(r)<<endl;

}
