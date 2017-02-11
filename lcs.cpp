#include <iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n+2][m+2];
	char b[n+2][m+2];
	for(int i=2;i<n+2;i++)
	{
		cin>>a[i][0];
		a[i][1]=0;
	}
	for(int i=2;i<m+2;i++)
	{
		cin>>a[0][i];
		a[1][i]=0;
	}
	a[1][1]=0;
	a[0][0]=a[1][0]=a[0][1]=0;
	// for(int i=2;i<m+2;i++)
	// {
	// 	cout<<a[0][m];
	// }

	for(int i=2;i<n+2;i++)
	{
		for(int j=2;j<m+2;j++)
		{
			if(a[i][0]==a[0][j])
			{
				a[i][j]=a[i-1][j-1]+1;
				b[i][j]='d';
			}
			else if(a[i-1][j]>a[i][j-1])
			{
				a[i][j]=a[i-1][j];
				b[i][j]='u';
			}
			else
			{
				a[i][j]=a[i][j-1];
				b[i][j]='l';
			}
		}
	}

	for(int i=0;i<n+2;i++)
	{
		for(int j=0;j<m+2;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	for(int i=2;i<n+2;i++)
	{
		for(int j=2;j<m+2;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}

int i=n+1,j=m+1,k,c[100],r;
r=k=a[i][j];
//cout<<"K is : "<<k<<endl;
while(k)
{
	if(b[i][j]=='d')
	{
		//cout<<"Ele : "<<a[0][j]<<endl;
		k--;
		c[k]=a[0][j];
		i--;j--;
	}
	else if(b[i][j]=='l')
	{
		j--;
	}
	else
	{
		i--;
	}
}
for(int z=0;z<r;z++)
	{
		cout<<c[z]<<" ";
	}


	
}