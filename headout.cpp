#include <iostream>

using namespace std;

typedef long long int lln;

lln mod = 1e9+7;

lln fact(lln s)
{
	if(s==0)
	{
		return 1;
	}
	else return (s*(fact(s-1)%mod))%mod;
}

lln pwr(lln s,lln n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		lln q=pwr(s,n/2)%mod;
		if(n%2==0)
		{
			return (q*q)%mod;
		}
		else
		{
			return ((q*q)%mod*s)%mod;	
		}
	}
}


int main()
{
int s=3,h=25;
lln num,den,inv;

num=fact(s+h-1);
den=(fact(s)*fact(h-1))%mod;
inv=pwr(den,1e9+5);


cout<<(inv*num)%mod<<endl;


return 0;

}