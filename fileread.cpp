#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(int a, char* ar[])
{
ifstream filess;
filess.open(ar[1]);
char l;
filess.get(l);
while(!filess.eof())
{

cout<<l;

filess.get(l);
}
filess.close();
}
