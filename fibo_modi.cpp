#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
int a,b,n;
cin>>a>>b>>n;
int ar[n];
ar[0]=a;ar[1]=b;
for(int i=2;i<n;i++)
{
	ar[i]=ar[i-1]*ar[i-1]+ar[i-2];
}
cout<<ar[n-1];
    return 0;
}
