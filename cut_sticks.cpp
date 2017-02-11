#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
int n,*p,q,w;
cin>>n;
p=new int [n];
q=n;
while(q--)
{
	cin>>p[q];
}
q=n;
int sm;
while(q)
{
	cout<<q<<endl;
	sm=p[0];
	for(int i=0;i<n;i++)
	{
		if(sm>p[i])
		{
			sm=p[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(p[i]<999999)
		{
			p[i]-=sm;
			if(p[i]<=0)
			{
				p[i]=999999;
				q--;
			}
		}	
	}


}

return 0;
}
