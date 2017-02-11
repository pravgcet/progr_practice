#include <iostream>
#include <cstring>

using namespace std;

int main()
{
string st;
int x;

while(getline(cin,st))
{
x=st.length()-1;
while(st[x]!=',')
{x--;}

cout<<st.substr(x+1)<<endl;

}


return 0;

}
