#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
typedef long long int lli;

lli n,k,*h,*a,v;

cin>>n>>k;
h=new lli [n+1];
a=new lli [n];

for(lli i=0;i<n;i++)
{
	cin>>v;
	h[v]=i;
	a[i]=v;
}
//////////////////////////
/*
for(lli i=0;i<n;i++)
{
	cout<<a[i]<<" ";
}
cout<<endl;
for(lli i=1;i<=n;i++)
{
	cout<<h[i]<<" ";
}
cout<<endl;
*/
///////////////////////
lli ns,tv;
for(lli i=0;i<k;i++)
{
ns=n-i;
if(a[i]!=ns)
{
tv=a[i];
//cout<<"h["<<ns<<"] : "<<h[ns]<<endl;
a[i]=a[h[ns]];
//cout<<"a[i] : "<<a[i]<<endl;
a[h[ns]]=tv;
h[tv]=h[ns];
h[ns]=i;
//cout<<"Swapped : "<<a[i]<<"  "<<a[h[ns-1]]<<endl;
}
}
for(lli i=0;i<n;i++)
{
	cout<<a[i]<<" ";
}
cout<<endl;
return 0;
}
