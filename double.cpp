#include <iostream>
using namespace std;
int main()
{
double x;
char c='1';
x=10;
x=x+(float(int(c-'0'))/10);
cout<<x<<endl;
}