#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
int t,l,r;
char ar[100][100],br[100][100];
basic_string<char> c;
cin>>t;
l=t;r=0;
while(t--)
{
	cin>>c;
	for(int i=0;i<l;i++)
	{
		ar[r][i]=c[i];
		br[r][i]=c[i];
	}
	r++;

}



/////////////////////////////////////////
for(int i=1;i<l-1;i++)
{
	for(int j=1;j<l-1;j++)
	{
		//cout<<"here";
		if((ar[i][j]>br[i-1][j])&&(ar[i][j]>br[i+1][j])&&(ar[i][j]>br[i][j-1])&&(ar[i][j]>br[i][j+1]))
			{
		//		cout<<"Done"<<endl;
				ar[i][j]='X';
			}	

	}
	//cout<<endl;
}





/////////////////////////////////////
for(int i=0;i<l;i++)
{
	for(int j=0;j<l;j++)
	{
		cout<<ar[i][j];
	}
	cout<<endl;
}


return 0;
}
