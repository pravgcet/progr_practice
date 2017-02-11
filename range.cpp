#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdio_ext.h>
#include "sorting.cpp"
#include "xtree.cpp"
#include "ytree.cpp"
#include "treestructure.h"
using namespace std;
struct xcord *xroot=NULL,*trav;
struct ycord *yroot=NULL;
void sorting(int coord,int l,int r,float **p);
void traversetoinsert(struct xcord *troot);
int n,inx=0;
float height[500],**ar;

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
sorting(1,0,10,ar);
cout<<"After sorting\n";
	for(int i=0;i<n;i++)
	{
		cout<<ar[i][0]<<"  "<<ar[i][1]<<"  "<<ar[i][2]<<endl;
	}
	xroot=creatextree(NULL,0,n-1);
	if(xroot==NULL)
	{
		cout<<"Root is still NULL, there is some error in your tree construction\n";
	}
	traversetoinsert(xroot);
//	int u=travwy(xroot->yc);


float x1,x2,y1,y2;
cout<<"Give ranges : (x1 x2 y1 y2)\n";
cin>>x1>>x2>>y1>>y2;
searchandgiveresult(x1,x2,y1,y2,xroot);	
cout<<"After search and give result\n";
inx--;
float max=height[inx];
while(inx>=0)
{	
	inx--;
	if(max<height[inx])
	{
		max=height[inx];
	}
}
cout<<"Maximum is : "<<max<<endl;

////////////////max
{



}




}


void traversetoinsert(struct xcord *troot)
{
	//cout<<"My Indices are "<<troot->lbx<<"  "<<troot->rbx<<endl;
	if(troot->lc==NULL&&troot->rc==NULL)
	{
		int a,b,s;
		s=troot->rbx-troot->lbx+1;
		float **arr=(float**)malloc(s*sizeof(float*));
		for(int i=0;i<s;i++)
		{
			arr[i]=(float*)malloc(3*sizeof(float));	
		}
		int y=0;
		for(int i=troot->lbx;i<=troot->rbx;i++)
		{
			arr[y][0]=ar[i][0];
			arr[y][1]=ar[i][1];
			arr[y][2]=ar[i][2];
			y++;
		}
		sortingy(2,0,s-1,arr);
		troot->yarray=arr;
		troot->yc=createytree(NULL,0,s-1);
	}
	else
	{
		 int a,b,s;
		 s=troot->rbx-troot->lbx+1;
		 float **arr=(float**)malloc(s*sizeof(float*));
		for(int i=0;i<s;i++)
		{
			arr[i]=(float *)malloc(3*sizeof(float));	
		}
		int y=0;
		for(int i=troot->lbx;i<=troot->rbx;i++)
		{
			arr[y][0]=ar[i][0];
			arr[y][1]=ar[i][1];
			arr[y][2]=ar[i][2];
			y++;
		}
		cout<<endl<<endl;
		sortingy(2,0,s-1,arr);
		troot->yarray=arr;
		troot->yc=createytree(NULL,0,s-1);
		traversetoinsert(troot->lc);
		traversetoinsert(troot->rc);

	}

}


/*
void traversetoinsert(struct xcord *troot)
{
	cout<<"In traversetoinsert\n";
	if(!(troot->lc==NULL&&troot->rc==NULL))
	{
		int a,b,s;
		s=troot->rbx-troot->lbx+1;
		int **arr=(int**)malloc(s*sizeof(int*));
		for(int i=0;i<s;i++)
		{
			arr[i]=(int *)malloc(3*sizeof(int));	
		}
		for(int i=troot->lbx;i<=troot->rbx;i++)
		{
			arr[i][0]=ar[i][0];
			arr[i][1]=ar[i][1];
			arr[i][2]=ar[i][2];
		}
		sortingy(2,0,s-1,arr);
		troot->yarray=arr;
		troot->yc=createytree(NULL,0,s-1);
		traversetoinsert(troot->rc);
		traversetoinsert(troot->lc);
	}
	else
	{
		int a,b,s;
		s=troot->rbx-troot->lbx+1;
		int **arr=(int**)malloc(s*sizeof(int*));
		for(int i=0;i<s;i++)
		{
			arr[i]=(int *)malloc(3*sizeof(int));	
		}
		for(int i=troot->lbx;i<=troot->rbx;i++)
		{
			arr[i][0]=ar[i][0];
			arr[i][1]=ar[i][1];
			arr[i][2]=ar[i][2];
		}
		sortingy(2,0,s-1,arr);
		troot->yarray=arr;
		troot->yc=createytree(NULL,0,s-1);

	}
}



*/











