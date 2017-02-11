#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
typedef unsigned long long int vli;
vli *a,*b,*c;
a=new vli [n+1];
b=new vli [m+1];
c=new vli [m+1];
for(int i=1;i<=n;i++)
{
	cin>>a[i];
}

for(int i=1;i<=m;i++)
{
	cin>>b[i];
}

for(int i=1;i<=m;i++)
{
	cin>>c[i];
}

for(int i=1;i<=m;i++)
{
	for(int j=b[i];j<=n;j+=b[i])
	{
		//if(j%b[i]==0)
		{
			a[j]*=c[i];
			a[j]-=(a[j]/1000000007)*1000000007;
		}
	}
}

vli ic,d=1000000007;
for(int i=1;i<=n;i++)
{

cout<<a[i]<<" ";
}





    return 0;
}
