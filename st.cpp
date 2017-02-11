#include<iostream>
using namespace std;

template<class y>
class Stack {
private:
int size,top
y *stack;
public :
Stack(int sz);
void push(y val);
bool full();
bool empty();
};
Stack::Stack(int sz)
{
size=sz;
top=-1;
stack = new y[size];
}

void Stack::push(y val)
{
if(top==size){cout<<"Stack full";}
else
stack[++top];
}
bool Stack::full()
{
return (top==size);
}
bool Stack::empty()
{
return top==-1;
}

int main()
{
Stack <int> s(10);
s.push(1);
s.push(1);
s.push(1);
s.push(1);
s.push(1);
s.push(1);
s.push(1);
s.push(1);

s.push(1);
s.push(1);
s.push(1);s.push(1);s.push(1);s.push(1);

return 0;
}
