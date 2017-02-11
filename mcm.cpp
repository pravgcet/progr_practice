#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int dim[2][n+1],mcm[n+1][n+1];
/////////////////////////////Inserting dimensions of matrices
for(int i=1;i<=n;i++)
{
	cin>>dim[0][i];
}	
for(int i=1;i<=n;i++)
{
	cin>>dim[1][i];
}
cout<<"Dimensions updated"<<endl;
//////////////////////////////
for(int i=0;i<=n;i++)
{
	for(int j=0;j<=n;j++)
	{
		mcm[i][j]=0;
	}
}

cout<<"Diagonals are zerod"<<endl;
int l=0,d;

for(int i=1;i<n;i++)
{
	l++;
	for(int j=1;j<=n-i;j++)
	{
		d=j+l;
		int min=999999,t;
		for(int k=j;k<d;k++)
		{
			cout<<j<<" "<<k<<"  "<<k+1<<" "<<d<<endl;
			t=mcm[j][k]+mcm[k+1][d]+dim[0][j]*dim[1][k]*dim[1][d];
			if(t<min){min=t;}
		}
		mcm[j][d]=min;
	}

}

for(int i=0;i<=n;i++)
{
	for(int j=0;j<=n;j++)
	{
		cout<<mcm[i][j]<<"            ";
	}
	cout<<endl;
}

return 0;
}