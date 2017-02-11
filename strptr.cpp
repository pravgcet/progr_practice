#include<iostream>
using namespace std;

static struct sd
	{
	int q;
	}qwe;

void fun();
void secfun();
int main()
{
	//struct sd *we;
	
secfun();	
cout<<qwe.q;
}
void fun()
{
//struct sd *qwe;
qwe.q=1;
}
void secfun()
{
//	struct sd *qwe;
	fun();
}