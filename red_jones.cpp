#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	int t,lim;
	cin>>t;
	int a[41],pr[]={2,3,5,7,11,13,17,19,23,29,31,37};
	a[0]=a[1]=a[2]=a[3]=1;a[4]=2;
	while(t--)
	{
		int n,cnt=0,var;
		cin>>n;
		// if(n<=4)
		// {
		// 	cout<<a[n]<<endl;
		// }
		// else
		// {
			for(int i=5;i<=n;i++)
			{
				a[i]=a[i-1]+a[i-4];
			}
			var=a[n];
			cout<<a[n]<<endl;
		//}
			for(int i=0;i<12;i++)
			{
				if(pr[i]>var)
				{
					break;
				}
				cnt++;
			}
			cout<<cnt<<endl;
	}
	return 0;
}