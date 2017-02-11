#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int t,b,w,x,y,z;
unsigned long long int br,wr;
cin>>t;
while(t--)
{
	cin>>b>>w>>x>>y>>z;
	br=x;wr=y;
	if(x+z<y)
	{
		wr=(x+z);
	}
	else if(x>y+z)
	{
		br=(y+z);
	}
	
cout<<(br*b+wr*w)<<endl;	
}
return 0;
}
