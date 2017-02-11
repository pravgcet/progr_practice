#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
int t,n,*e,*s;
cin>>t;
while(t--)
{
	cin>>n;
	bool pr=0;
	e=new int [n];
	s=new int [n];
	for(int i=0;i<n;i++)
	{
		cin>>e[i];
	}
	
	s[0]=e[0];
	
	for(int i=1;i<n;i++)
	{
		s[i]=s[i-1]+e[i];
	}

	if(n==1)
	{
		pr=1;
	}
	else if(n==2)
	{
		if(s[0]==0&&s[1]==0)
		{
			pr=1;
		}
	}
	else
	{
		for(int i=0;i<n;i++)
			{
				if(i==0)
				{
					if(s[1]==0)
					{
						pr=1;
						break;
					}
				}
				else if(i==n-1)
				{
					if(s[i-1]==0)
					{
						pr=1;
						break;
					}
				}
				else if(s[n-1]-s[i]==s[i-1])
					{
						pr=1;
						break;
					}
			}
	}
	if(pr)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}






}


    return 0;
}
