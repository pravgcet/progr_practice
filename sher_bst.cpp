#include <iostream>
using namespace std;
int main()
{
	int t,n,j,k,l,ffv,ftr,m;
	bool set,thr,fv,fnd,ep;
	int q;
	cin>>t;
	while(t--)
	{
		set=thr=fv=fnd=ep=0;
       		 ftr=ffv=0;
		cin>>n;q=n;
		int a[n];
		if(n<3 )
		{
			cout<<"-1"<<endl;
            		ep=1;
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
			int three=0,five=0;
				for(int i=0;i<n;i++)
				{
				if(a[i]==3)three++;
				if(a[i]==5)five++;
				//	cout<<a[i];
				}
				if(three%5==0&&five%3==0)
				{
				for(int i=0;i<n;i++)
				{
					cout<<a[i];
				}
				}
				else
				{
				cout<<"-1";
				}
				cout<<endl;
			}
			else if(!ep)
			{
				cout<<"-1"<<endl;
			}
		
	}
}
