#include<iostream>
using namespace std;
class Circle
{
int rad;
public:
Circle();
Circle(int);
int area();
};

Circle::Circle()
{
rad=4;
}
Circle::Circle(int r)
{
rad=r;
}

int Circle::area()
{
return 3.14*rad*rad;
}
int main()
{
Circle c,v(6);
cout<<"const area"<<c.area()<<endl;
cout<<"Var area"<<v.area()<<endl;
return 0;
}
