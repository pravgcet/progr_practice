#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
typedef long long int lli;
lli v,t,n,*a,k;
cin>>t;
while(t--)
{
cin>>n>>k;
a=new lli [n];
int ins=0,lv=0;
for(int i=0;i<n;i++)
{
		cin>>v;
		if(v<=k)
		{
			lv++;
		}
		else
		{
			a[ins++]=v;
		}
}







}











    return 0;
}
