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
		int n;
		cin>>n;
		int p[n];
	//	p=new int [n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i];
		}
		int max=p[n-1];
		unsigned long long int pro=0;
		for(int i=n-2;i>=0;i--)
			{
				if(max<p[i])
				{
					max=p[i];
				}
				else if(max>p[i])
				{
					pro+=max-p[i];
				}
			}
			cout<<pro<<endl;
	}
    return 0;
}
