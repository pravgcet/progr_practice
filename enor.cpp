#include<iostream>
using namespace std;
int main()
{
long int n,k,c;
int cnt=0;
cin>>n>>k;
while(n--)
{

cin>>c;
if(c%k==0)
{cnt++;}

}
cout<<cnt;
}
