#include<iostream>
#include<cmath>
using namespace std;
int main()
{
long int n,a,i=0,j=1,c,v=0;
cin>>n;
while(n--)
{
cin>>a;
v=0;
j=1;
c=a/(pow(5,j));
while(c>0)
{
v=v+c;
j++;
c=a/(pow(5,j));
}
cout<<v<<endl;
}

}
