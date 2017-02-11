#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
	int n,m;
	cin>>n>>m;
	int p[n][m],b[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>p[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>b[i][j];
		}
	}
int mn,curmn,s;
mn=p[n-1][0];
for(int i=1;i<m;i++)
{
	mn=min(mn,p[n-1][i]);
}
for(int i=n-2;i>=0;i--)
{
	curmn=99999999;
	for(int j=0;j<m;j++)
	{	
		
		s=(mn-b[i][j]>0)?mn-b[i][j]+p[i][j]:p[i][j];
		curmn=min(curmn,s);
	}
	mn=curmn;
}
cout<<curmn<<endl;
}
    return 0;
}
