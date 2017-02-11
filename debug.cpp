#include<iostream>
#include<bitset>
#include<stdio.h>
using namespace std;
int main(int a, char* str[])
{
int i=1,j=0;
char *adr;
adr=str[1];
//stop at:8
while(j!=10)
{
i=i+i;
j++;
}

printf("str[1] %s \n",str[1]);
cout<<*adr<<endl;
cout<<adr;


//cout<<"str : "<<bitset<16>(str)<<endl;
//cout<<"*str : "<<bitset<8>(*str)<<endl;

}
