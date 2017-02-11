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
		for(int j=0;j<n-1;j++)
		{
			sm=pr[j];
			ind=j;
			for(int i=j+1;i<n;i++)
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
int n,*pr;
cin>>n;
pr=new int [n];
for(int i=0;i<n;i++)
{
	cin>>pr[i];
}
sorting(pr,n);
for(int i=0;i<n;i++)
{
	cout<<pr[i]<<"  ";
}

    return 0;
}
