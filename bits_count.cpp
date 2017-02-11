#include <iostream>
#include <algorithm>
#include <bitset>
#include <cmath>
using namespace std;
int main()
{
int t;
   cin>>t;
while(t--)
{

unsigned long long int n,j,i;
cin>>n;
int cnt=0;
 bool d=0,yd=0,turn=0;
 cout<<"N  is : "<<bitset<512>(n)<<endl;
if(n==1)
{
cout<<"Richard"<<endl;
}
else
{
j=n;
  d=0;yd=0;turn=0;

while(j>0)
	{
	if(j%2==1)
		{
		j--;
		cnt++;
		}
		else
		{
		j=j/2;
		}
	}
	cout<<"Count is : "<<cnt<<endl;
}
}
	return 0;
}
