#include<iostream>
using namespace std;
int main()
{
int r;
cin>>r;
double *q=new double [r],f=0;;
q[0]=0;
q[1]=1;
q[2]=2;
for(int i=3;i<=r;i++)
{
f=q[i-1]+q[i-2];
q[i]=f;
}
cout<<"fib is :"<<f<<endl;

}
