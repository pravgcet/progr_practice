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
int f,sh=0;
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
			f=(f+d)%n;
						
		}
		else if(o=='A')
			{
			f=(f-d)%n;
			}
		else if(o=='R')
			{
			sh=(f+d-1)%n;
			cout<<a[sh]<<endl;
			}

		}
}
