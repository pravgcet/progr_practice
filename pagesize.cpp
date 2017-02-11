#include<iostream>
#include<unistd.h>
using namespace std;
int main()
{
	int a;
	a=getpagesize();
	cout<<"Page size "<< a<<endl;
}