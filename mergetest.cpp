#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "mergesort.cpp"
float **ar;
int n;
int main(int c,char **v)
{
	float x,y,h;
	cin>>n;
	ar=(float**)malloc(n*sizeof(float*));
	for(int i=0;i<n;i++)
		{
			ar[i]=(float*)malloc(3*sizeof(float));
		}
	for(int i=0;i<n;i++)
		{
			cin>>x>>y>>h;
			ar[i][0]=x;
			ar[i][1]=y;
			ar[i][2]=h;
		}
	cout<<"Before sorting\n";
	for(int i=0;i<n;i++)
		{
			cout<<ar[i][0]<<"  "<<ar[i][1]<<"  "<<ar[i][2]<<endl;
		}
	sorting(0,0,10,ar);
	cout<<"After sorting\n";
	for(int i=0;i<n;i++)
		{
			cout<<ar[i][0]<<"  "<<ar[i][1]<<"  "<<ar[i][2]<<endl;
		}
}