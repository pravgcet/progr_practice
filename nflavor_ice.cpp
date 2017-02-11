#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void sorting(int *pr,int n)
{
	int sm,t;
	int ind;
	{///Sort on x
		for(int j=1;j<n;j++)
		{
			sm=pr[j];
			ind=j;
			for(int i=j+1;i<=n;i++)
			{
				if(pr[i]<sm)
				{
					sm=pr[i];
					ind=i;
				}
			}
			if(ind!=j)
			{
				t=pr[j];
				pr[j]=pr[ind];
				pr[ind]=t;
			}
		}
	}
}
int main()
{
int t;
cin>>t;
while(t--)
{
	int n,m,*p;
	cin>>m>>n;
	p=new int [n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>p[i];
	}
	int s,j;
	bool dn;
	for(int i=1;i<n;i++)
	{
		if(p[i]<m)
		{
			s=m-p[i];
		dn=0;
			for(j=i+1;j<=n;j++)
			{
				if(p[j]==s)
				{
					dn=1;
					break;
				}
			}

		if(dn)
		{
			cout<<i<<" "<<j<<endl;
			break;
		}
		}

	}
}
    return 0;
}
	