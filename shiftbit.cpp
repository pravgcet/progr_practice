#include<iostream>
using namespace std;
int main()
{
unsigned char t=70;
for(int i=1;i<=8;i++)
{
cout<<(t>>i)<<"  ";

}
cout<<t;
}
