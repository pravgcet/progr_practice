#include <iostream>
using namespace std;
int X[9],Y[9];
char ans[10];



//Find can be a 3D array in case of Dynamic programming

//x : nuber of diapers left in warehouse x
//y : nuber of diapers left in warehouse y
//i : which product instance we are dealing with

int find(int x,int y,int i)
{
if(x==0&&y==1)
{
	ans[i]='Y';
	return Y[i];
}
else if(x==0&&y!=0)
{
	ans[i] = 'Y';
	return Y[i]+find(x,y-1,i+1);
} 
else if(y==0&&x==1)
{
	ans[i] = 'X';
	return X[i];
}
else if(y==0&&x!=0)
{
	ans[i] = 'X';
	return X[i]+find(x-1,y,i+1);
}
else {
	int a = find(x-1,y,i+1)+X[i]; //Calculate remaining cost if we sent diaper from warehouse X
	char tema[10];
	ans[i]='X';
	for(int ii=0;ii<10;ii++)
	{
		tema[ii]=ans[ii];

	}
	int b = find(x,y-1,i+1)+Y[i]; //Calculate remaining cost if we sent diaper from warehouse Y
	char temb[10];
	ans[i]='Y';
	for(int ii=0;ii<10;ii++)
	{
		temb[ii]=ans[ii];

	}
/////////////////////////////////saving current progress in temporary array because it can be lost wile exploring other brances of tree
	int ans1 = 1000000;
	if(ans1>a)
	{
		ans1=a;
	for(int ii=0;ii<10;ii++)
	{
		ans[ii]=tema[ii];

	}		
	}

	if(ans1>b)
	{
		ans1=b;
	for(int ii=0;ii<10;ii++)
	{
		ans[ii]=temb[ii];

	}
	}

//return minimun
	return ans1;
}
}



int main()
{

//we use 8 as the size ; it can be anything

for(int i=0;i<8;i++)
{
	cin>>X[i];
}
for(int i=0;i<8;i++)
{
	cin>>Y[i];
}

for(int i=0;i<8;i++)
{
	cout<<X[i]<<"  "<<Y[i]<<endl;

}

cout<<find(4,4,0)<<endl; //Lets suppose both ware house has equal amount of diapers but we can change it

for(int i=0;i<10;i++)
	{
	
		cout<<i<<" "<<ans[i]<<endl;
	}

	return 0;

}
