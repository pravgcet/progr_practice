
#include <regex>
#include <iostream>
#include <cstdio>


using namespace std;

int main()
{

string re="[a-zA-Z]+";
string str;

regex regl(re);

cout<<"Input file name\n";
cin>>str;


if(regex_search(str,regl))
//if(regex_match(str,regl))
{
cout<<"GOOD WORK!\n";
}
else
{
cout<<"Not Matched\n";
}

return 0;
}
