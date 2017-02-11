#include<iostream>
#include<bitset>
#include<stdio.h>
using namespace std;
int main()
{
char j=65;
char *str;
str=(char*)&j;
cout<<bitset<64>((long unsigned int)(str));
//j=(char*)str;
cout<<"&j : "<<&j<<endl;
//cout<<"str : "<<str;
printf("%x : ",(unsigned int)str);
}
