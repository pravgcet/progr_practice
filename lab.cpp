#include<iostream>
using namespace std;
class Stack {
int st[5];
int top=0;
public:
void push(int val);
bool full();
int pop();
};

void Stack::push(int val)
{
if(top==5)
{cout<<"Stack is full , Cant push";
return -1;}
else
st[top++]=val;
}

int Stack::pop()
{
if(top==0)
{cout<<"Stack Empty: ";}
else
return st[top--];
}

void main()
{
Stack s;
int y;
for(int i=0;i<6;i++)
{
cout<<"\NeNTER ELE";
cin>>s.push(y);
}

for(int i=0;i<6;i++)
{
cout<<"\n"<<s.pop();
}

return 0;
}


