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
int mn,blt=0,curmn,s,in,ev[3][m*m],k=0,mxb,rr,cc;

for(int r=0;r<n-1;r++)
{	s=0;
	int mm=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
			{	
				ev[0][mm+j]=((p[r][i]-k)>0)?(p[r][i]-k):0;
				ev[1][mm+j]=((p[r+1][j]-b[r][i])>0)?(p[r+1][j]-b[r][i]):0;
				ev[2][mm+j]=ev[0][mm+j]+ev[1][mm+j];
			}
			mm+=m;

	}
	/*
	for(int y=0;y<3;y++)
	{
		for(int i=0;i<m*m;i++)
		{
			cout<<ev[y][i]<<"  ";
		}
		cout<<endl;
	}

	cout<<endl<<endl<<endl;
	*/
	mn=ev[2][0];
	in=0;
	for(int i=0;i<m*m;i++)
	{
		if(mn>ev[2][i])
			{
				in=i;
				mn=ev[2][i];
			}
	}
	//cout<<"Found Minimum at : "<<in<<" mn "<<mn<<endl;
	blt+=ev[2][in];
	k=b[r][in/m];
	//cout<<"K and B are "<<k<<"  "<<blt<<endl;
}

mn=p[n-1][0];

for(int i=0;i<m;i++)
{
	mn=max(mn,p[n-1][0]);
}
/*
if(k<mn)
{
	blt+=mn-k;
}*/
cout<<blt<<endl;

}
    return 0;
}
