#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5};
	int b[5];
	memcpy(b,a,sizeof(b));
	cout<<"First element of b is : "<<b[0];

}