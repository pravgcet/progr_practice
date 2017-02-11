#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int n;
cin>>n;
int ar[2][n],maxx;
cin>>ar[0][0];
maxx=ar[1][0]=1;

for(int i=1;i<n;i++)
{
	cin>>ar[0][i];
	int max=1;
	for(int j=i-1;j>=0;j--)
	{
		if(ar[0][i]>ar[0][j])
		{
			if(ar[1][j]+1>max)
			{
				max=ar[1][j]+1;
			}
		}
		ar[1][i]=max;
		if(ar[1][i]>maxx)
	{
		maxx=ar[1][i];
	}
	}	
}
cout<<maxx<<endl;

    return 0;
}
