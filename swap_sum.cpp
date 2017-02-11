#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	int a[n+1],b[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	memset(b,0,(n+1)*sizeof(int));
	b[1]=a[1];
	for(int i=2;i<=n;i++)
	{
		b[i]=b[i-1]+a[i];
	}
	while(q--)
	{
		int qt,l,r,m;
		cin>>qt>>l>>r;
		if(qt==1)
		{
			//m=(l+r)/2;
			int t,d;
			for(int i=l;i<r;i+=2)
			{
				
				d=a[i]-a[i+1];
				b[i]=b[i]-d;
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
				//////Maintaining sum
					


			}
			//for(int i=1;i<=)

		}
		else
		{
			long long int qq=0;
				{
					qq=b[r]-b[l-1];
				}
			cout<<qq<<endl;
		}
	}

return 0;
}