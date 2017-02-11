#include<iostream>
using namespace std;
class Fine
{

public:
int a;
Fine()
{a=0;}
void init(int s)
{a=s;}
void get()
{
cout<<"A is : "<<a;
//return a;
}
};

int main()
{
Fine e;
int q;
cin>>q;
e.init(q);
e.get();

}
