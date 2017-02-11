#include <iostream>
#include <set>
using namespace std;
int main()
{
set<int> S;
//for(int i=0;i<15;i++)
{
S.insert(5);
/*
S.insert(17);
S.insert(47);
S.insert(6);
S.insert(67);
S.insert(8);
S.insert(1);
S.insert(3);
S.insert(88);
S.insert(33);
S.insert(12);
S.insert(10);
*/}
set<int>::iterator t;
cout<<*(S.lower_bound(5))<<endl;
cout<<*(S.upper_bound(5))<<endl;
cout<<"contents\n";
for(t=S.begin();t!=S.end();t++)
{
	cout<<*t<<endl;
}
return 0;
}