#include<iostream>
#include<string>
using namespace std;

int main()
{
string str;
int ln1,ln2,ln;
cin>>str;
ln1=(unsigned int)str[0];
cout<<"\nln1 before % "<<ln1;
ln1=ln1%48;
cout<<"\nln1 after % "<<ln1;
if(str[1]!='\0')
{
ln2=(unsigned int)str[1];
cout<<"\nln2 before % "<<ln2;
ln2=ln2%48;
cout<<"\nln2 after % "<<ln2;
}
ln=(ln1*10)+ln2;
cout<<"\n ln : "<<ln;
}
