#include<iostream>
#include<setjmp.h>
#include<list>
#include<unistd.h>
#include<ctime>
#include<signal.h>
#include<cstdlib>
#include<stdio.h>


using namespace std;
int i, j;
long T0;
jmp_buf Env;

main()
{
time_t st,et;
int a=0;
st=time(0);
sleep(3);
et=time(0);
a=et-st;
cout<<a<<endl;

}