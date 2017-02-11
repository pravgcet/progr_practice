#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int t,a,cnt;
	unsigned long long int n,j,k ;
	double d;
	cin>>t;
	while(t--)
	{
		cnt=0;
		cin>>n;
		j=n;
		while(j)
		{
			d=j%10;
			j=j/10;
			if(floor(n/d)==ceil(n/d))
			{
				cnt++;
			}

		}
		
		cout<<cnt<<endl;
	}
}