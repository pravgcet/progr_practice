#include <iostream>
using namespace std;
/////////////////Knapsack solution by bottom up approach
int main()
{
	cout<<"Item kitne hain : \n";
	int n;
	cin>>n;
	cout<<"Or Bag ka size : \n";
	int s;
	cin>>s;
	int k[2][n],kn[n][s+1];
	cout<<"Weights : \n";
	for(int i=0;i<n;i++)
	{
		cin>>k[0][i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>k[1][i];
	}
	/////Starting Dynamic approach
	int c=s;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=s;j++)
		{
			if(i==0)
			{
				if(k[0][i]<=j)
					{
						kn[i][j]=k[1][i];
				//		cl[i][j]=j-k[0][i];
					}
					else
					{
						kn[i][j]=0;
				//		cl[i][j]=j;
					}
			}
			else
			{
				if(k[0][i]<=j)
					{
						kn[i][j]=kn[i-1][j]>kn[i-1][j-k[0][i]]+k[1][i]?kn[i-1][j]:kn[i-1][j-k[0][i]]+k[1][i];
				//		cl[i][j]=j-k[0][i];
					}
					else
					{
						kn[i][j]=kn[i-1][j];
				//		cl[i][j]=j;
					}
			}
		}
	}
////////////Displaying table
	for(int i=0;i<n;i++)
	{cout<<endl;
		for(int j=0;j<=s;j++)
		{
			cout<<kn[i][j]<<"  ";
		}
	}
	return 0;

}


