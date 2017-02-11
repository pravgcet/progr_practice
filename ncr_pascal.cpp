#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
 int t,n,max;
  cin>>n;
 int mx[n];

 cin>>mx[0];
 max=mx[0];
 for(int i=1;i<n;i++)
 {
	 cin>>mx[i];
 if(mx[i]>max)
 	{max=mx[i];}
}
 int ar[max+1][max+1];
 //cout<<"Max is : "<<max<<endl;
 ar[0][0]=1;
 ar[1][0]=1;
 ar[1][1]=1;
			 for(int i=2;i<=max;i++)
			 {
			 	ar[i][0]=1;
			 	ar[i][1]=i;
			 	for(int j=2;j<i;j++)
			 	{
			 		ar[i][j]=ar[i-1][j-1]+ar[i-1][j];
			 	}
			 	ar[i][i]=1;
			 }
	//cout<<"Everything is fine till here\n";		 
///////////////////
			 for(int i=0;i<n;i++)
			 {
                    //cout<<"printing i : "<<i<<endl;
			 	int ii=mx[i];
			 	for(int j=0;j<=ii;j++)
			 	{
			 		cout<<ar[ii][j]<<"  ";
			 	}
			cout<<endl;
			}




    return 0;
}

