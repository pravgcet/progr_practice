#include <iostream>
using namespace std;

int ar[100000],n;

int get(int);
int find(int);

int main()
{
int t;
cin>>t;
while(t--)
{
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

int get(int i)
{
cout<<"Inside g";
	if(i+3>n)
	{
		return n+1;
	}

	int mx,till;
	int a=ar[i]+find(get(i+1));
	
	mx=a;
	till=i+1;
	
	int b=ar[i]+ar[i+1]+find(get(i+2));
	if(mx<b){till=i+2;}
	
	int c=ar[i]+ar[i+1]+ar[i+2]+find(get(i+3));
	if(mx<c){till=i+3;}
	return till;
}


int find(int i)
{
int aa=0;
	if(i+3>n)
	{
		if(i<=n){aa+=ar[i];}
		if(i+1<=n){aa+=ar[i+1];}
		if(i+2<=n){aa+=ar[i+2];}
		return aa; 
	}
	int mx;
	int a=ar[i]+find(get(i+1));
	mx=a;
	int b=ar[i]+ar[i+1]+find(get(i+2));
	if(mx<b){mx=b;}
	int c=ar[i]+ar[i+1]+ar[i+2]+find(get(i+3));
	if(mx<c){mx=c;}
	return mx;
}
