#include <iostream>
#include <vector>

#include <algorithm>

using namespace std;


int main()
{

vector <int > s;
vector <int > ::iterator t;


s.push_back(1);
s.push_back(2);
/*
s.push_back(3);
s.push_back(4);
s.push_back(5);
s.push_back(6);
s.push_back(7);
s.push_back(8);
s.push_back(9);
s.push_back(10);
s.push_back(11);
*/

int i=10;
t=s.begin();

while(i--)
{
cout<<*t<<endl;

random_shuffle(s.begin(),s.begin()+s.size());


}







return 0;


}