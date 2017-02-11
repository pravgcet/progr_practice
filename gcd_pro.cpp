#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

unsigned long long int **ar;

int gcd(int n,int m)
{
    if(ar[n][m]!=0)
        {
        return ar[n][m];
    }
	else if(n==1||m==1)
	{
        ar[n][m]=1;
		return 1;
	}
	else if(n==m)
	{
        ar[n][m]=n;
		return n;
	}
	else if(n>m)
	{
		return gcd(n-m,m);
	}
	else
	{
		return gcd(n,m-n);
	}
}
int main() 
{
int t,n,m;
unsigned long long int res=1;
cin>>n>>m;
    ///////////////////////////////
     ar=(unsigned long long int**)malloc((n+1)*sizeof(unsigned long long int));
    //cout<<"1 D array allocated"<<endl;
    for(int i=0;i<=n;i++)
        {
        ar[i]=(unsigned long long int*)malloc((m+1)*sizeof(unsigned long long int));
    }
      ////////////////////////////////////
    
   // cout<<"Okay"<<endl;
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=m;j++)
	{
        ar[i][j]=0;
    }
}
    
 //   cout<<"Set to zero"<<endl;
for(int i=2;i<=n;i++)
{
	for(int j=2;j<=m;j++)
	{
		res=(res*gcd(i,j))%1000000007;
	}
}
cout<<res<<endl;


return 0;
}
///////////////////////////////////////////

