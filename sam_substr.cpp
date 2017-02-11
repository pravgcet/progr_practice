#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int l;
unsigned long long int sum=0,n=0,ar[999999]; 
typedef basic_string<char> String;
String str;
cin>>str;
//cout<<str<<endl;
l=str.length();
cout<<"String length : "<<l<<endl;
for(int i=0;i<l;i++)
{
	cout<<"I is : "<<i<<endl;
	ar[i]=((int)str[i])%48;
	sum+=ar[i];
	sum=sum%1000000007;
	for(int j=i-1;j>=0;j--)
	{
		ar[j]=(ar[j]*10+ar[i])%1000000007;
		sum+=ar[j];
		sum=sum%1000000007;
	}
}
cout<<sum<<endl;
    return 0;
}

//////////Code giving timeout
/*
for(int i=0;i<l;i++)
{
	for(int j=0;j<=i;j++)
	{
		for(int k=j;k<=i;k++)
		{
			n=(n*10+((int)str[k])%48)%1000000007;
		}
		sum+=n;
		sum=sum%1000000007;
		n=0;
	}
}*/
////////////////////