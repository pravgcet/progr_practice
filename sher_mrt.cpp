#include <iostream>
using namespace std;
int main()
{
	int t,n,j,k,l,ffv,ftr,m;
	bool set,thr,fv,fnd;
	int q;
	cin>>t;
	while(t--)
	{
		set=thr=fv=fnd=0;
		cin>>n;q=n;
		int a[n];
		if(n<3)
		{
			cout<<"-1"<<endl;
		}
		else if(n%3==0)
		{
		//	cout<<"Divisible by 3"<<endl;
			for(int i=0;i<n;i++)
				{
					a[i]=5;

				}
				set=1;

		}
       else
		{
			{
				j=n/3;
				k=n/5;
				for(int i=0;i<=k;i++)
				{	q=n;
					q=q-(i*5);
					for(int ii=1;ii<=j;ii++)
					{
						m=ii*3;
						if(m==q)
						{
							ftr=ii;
							ffv=i;
							fnd=1;
							break;
						}
					}
					if(fnd==1)
					{
						break;
					}
				}
//				cout<<"ftr  and ffv : "<<ftr<<"  "<<ffv<<endl;
				for(int i=0;i<3*ftr;i++)
				{
					a[i]=5;
					set=1;
				}
				for(int i=3*ftr;i<n;i++)
				{
					a[i]=3;
					set=1;
				}
			}
		}
			if(set)
			{
				for(int i=0;i<n;i++)
				{
					cout<<a[i];
				}
				cout<<endl;
			}
			else
			{
				cout<<"-1"<<endl;
			}
		
	}
}