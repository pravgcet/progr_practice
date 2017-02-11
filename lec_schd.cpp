#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int a[2][9],m[10][40],cnt=0;
	bool fnd;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<9;j++)
		{
			cin>>a[i][j];
		}
	}
	memset(m,0,400*sizeof(int));
	for(int i=0;i<9;i++)
	{
		for(int ii=0;ii<10;ii++)
		{	
			fnd=0;
			for(int j=a[0][i];j<=a[1][i];j++)
				{
					if(m[ii][j]!=0)
					{
						fnd=1;
						break;
					}
				}
			if(!fnd)
			{
				for(int j=a[0][i];j<=a[1][i];j++)
				{
					m[ii][j]=i+1;
				}
				if(ii>cnt){cnt++;}
				break;
			}
		}
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<23;j++)
		{
			cout<<m[i][j];
		}
		cout<<endl;
	}
	cout<<"Number of Lecture Halls required : "<<cnt+1<<endl;
	return 0;
}