#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int returnmin(int a[])
{
	int min=a[0],in;
	for(int i=0;i<=2;i++)
	{
		if(a[i]<=min)
		{
			min=a[i];
			in=i;
		}
	}
	return in;
}




int main()
{
int t;
cin>>t;
while(t--)
{
	int n,*p,ist=0,snd=0;
	cin>>n;
	p=new int [n];
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	int i=0,min=0,min2=0,q[3];
	cout<<"Array is taken\n";
	while(i<n)
		{
					int r=1,trn=0;
					while(r<4)
					{
						for(int j=i+r;j<i+r+3;j++)
						{
							if(j>=n)
							{
								break;
							}
							min+=p[j];
						}
						q[r-1]=min;
						r++;
					}
				min2=returnmin(q);
				cout<<min2<<endl;
				if(trn==0)
				{
					for(int w=i;w<=i+min2;w++)
					{
						
						ist+=p[w];
					}
					trn=1;
				}
				else
				{
					for(int w=i;w<=i+min2;w++)
					{
						snd+=p[w];
					}
					trn=0;
				}
				i=i+min2+1;
		}
		cout<<ist<<endl;

}


    return 0;
}
