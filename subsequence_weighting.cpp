#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int n,t;
cin>>t;
while(t--)
{
cin>>n;	
int ar[2][n],maxx,w[n],ad[n][n],in;
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
		// for(int i=0;i<n;i++)
		// {
		// 	cin>>w[i];
		// }
		cout<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<ar[1][i]<<"  ";
		}
}
    return 0;
}