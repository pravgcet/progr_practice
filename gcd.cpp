#include <iostream>
using namespace std;

#define mod 7

int gcd(int a,int b)
{
if(a==0) return b;
else if (a==1 || b==1 ) return 1;
else if(a>b) return gcd(a%b,b);
else return gcd(b%a,a);
}



long long int power(long long int a, long long int p)
{

//long long int i=1,pwr=0;

if(p==0) {return 1;}

else if(p==1)
{
return a;
}
else if(p%2==0) { return power((a*a)%mod,p/2); }
else return a*power((a*a)%mod,(p-1)/2);

}

int main()
{
int a,b;
cin>>a>>b;
//cout<<gcd(a,b)<<endl;

cout<<power(a,b)<<endl;


return 0;
}

