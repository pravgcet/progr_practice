#include <iostream>
#include <map>
using namespace std;
int main()
{
map < long long int,long long int> mp;

long long int i=1;
//for(;i<16777216;i++)
for(;i<16;i++)
{
mp[i]=i;
//cout<<i;
}

cout<<"Size is : "<<mp.size()<<endl;
return 0;
}
