#include<iostream>
#include<string>
using namespace std;
int main()
{
int n,m,i,d;
cin>>n>>m;
//int *a=new int[n];
int a[100000];
char o;
int f,sh=0,tm;
f=0;
for(i=0;i<n;i++)
{
cin>>a[i];
}
	while(m-->0)
		{

	cin>>o>>d;
		if(o=='C')
		{


			for(i=1;i<=d;i++)
				{
					tm=a[0];		
				
				for(int j=0;j<n-1;j++)
					{
						a[j]=a[j+1];

					}
					a[n-1]=tm;

				
				}
						
		}
		else if(o=='A')
			{
			for(i=1;i<=d;i++)
				{
					tm=a[n-1];		
				
				for(int j=0;j<n-1;j++)
					{
						a[j+1]=a[j];

					}
					a[0]=tm;

				
				}
			}
		else if(o=='R')
			{
			//sh=(f+d-1)%n;
			cout<<a[d-1]<<endl;
			}

		}
}
