#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
char bit[n][m];
int n1c[n],max=0,st1,st2,nc=0,maxx=0;
for(int i=0;i<n;i++)
{
cin>>bit[i];
}
///////////////counting 1's
for(int i=0;i<n;i++)
{
	n1c[i]=0;
	for(int j=0;j<m;j++)
	{
		if(bit[i][j]=='1'){n1c[i]++;}
	}
}

for(int i=0;i<n;i++)
{
cout<<n1c[i]<<"\n";


}



//////////counting maximum skills
/*
for(int i=0;i<n-1;i++)
{
	for(int k=i+1;k<n;k++)
	{
		if((n1c[i]+n1c[k])>=max)
		{
			max=0;
			st1=i+1;
			st2=k+1;
			for(int j=0;j<m;j++)
				{
					if(bit[i][j]=='0'&&bit[k][j]=='0')
					{
						;
					}	
					else
					{
						max++;
					}

				}
		}
	}
}*/
////////////////
int mn;
for(int i=0;i<n-1;i++)
{
	for(int k=i+1;k<n;k++)
	{
		mn=0;
			for(int j=0;j<m;j++)
				{
					if((bit[i][j]=='0')&&(bit[k][j]=='0'))
					{
						;
					}	
					else
					{
						mn++;
					}

					}
					if(mn>max)
					{
						max=mn;
					}

		}
	}






for(int i=0;i<n;i++)
{
	for(int k=i+1;k<n;k++)
	{
			maxx=0;
			for(int j=0;j<m;j++)
				{
					if(bit[i][j]=='0'&&bit[k][j]=='0')
					{
						;
					}	
					else
					{
						maxx++;
					}

				}
				if(max==maxx)
				{
					nc++;
				}
	}
}

cout<<max<<"\n"<<nc;

return 0;
}

