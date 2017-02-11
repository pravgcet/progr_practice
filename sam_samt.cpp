#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
int *ar,t,i=0;
unsigned long long int n;
cin>>n;
ar=new int [200000];
while(n>0)
{
	t=n%10;
	n=n/10;
	ar[i]=t;
	i++;
}
i--;
int s;
unsigned long long int can=0;
	for(int j=0;j<=i/2;j++)
	{	
		s=ar[j];
		ar[j]=ar[i-j];
		ar[i-j]=s;
	}
	// for(int j=0;j<=i;j++)
	// {
	// 	cout<<ar[j]<<"  ";
	// }

cout<<" i is :  "<<i<<endl;
for(int j=0;j<=i;j++)
{
	for(int k=0;k<=i;k++)
	{
		unsigned long long int y=0;
		if(k+j<=i)
		{
		for(int l=k;l<=k+j;l++)
		{
			cout<<ar[l]<<" ";
			y=y*10+ar[l];

		}
		cout<<endl<<" Y : "<<y<<endl;;
		can+=y%1000000007;
		can=can%1000000007;
	}
	}
}

cout<<can<<endl;
    return 0;
}
