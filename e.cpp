#include <iostream>
using namespace std;
int main()
{
int p=3;
int *r;
r=&p;
(*++r);
cout<<*r<<endl;
return 0;
}
