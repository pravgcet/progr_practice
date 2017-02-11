#include <iostream>
#include<cstring>
using namespace std;

int ar[100000],n;

int fr[1000000];

int find(int);

int main()
{
	int t;
	cin>>t;
	memset(fr,-1,1e6*sizeof(int));
	while(t--)
	{
	memset(fr,-1,1e6*sizeof(int));
		cin>>n;
		n--;
		for(int i=0;i<=n;i++)
		{
			cin>>ar[i];
		}
		cout<<find(0)<<endl;
	}
	return 0;
}

int find(int i)
{
if(i>n){return 0;}
if(fr[i]>=0)
{
return fr[i];
}

int aa=0;
	
int i1,i2,i3,i4,i5,a,b,c,mx;

i1=find(i+2);
i2=find(i+3);
i3=find(i+4);	
i4=find(i+5);
i5=find(i+6);

a=ar[i]+min(i1,min(i2,i3));
b=ar[i]+ar[i+1]+min(i2,min(i3,i4));
c=ar[i]+ar[i+1]+ar[i+2]+min(i3,min(i4,i5));
	
mx=max(a,max(b,c));	
fr[i]=mx;
	return mx;
}








