#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;
#define N 7


int qn[N][N],co[N][N];

int find(int r)
{

	for(int i=0;i<N;i++)
	{
		if(qn[r][i]==1)
		{
			return i;
		}
	}
}

int mini(int r)
{
	int m=co[r][0],c=0,f=find(r);

	vector <int > s;
	vector <int > ::iterator t;

	for(int i=1;i<N;i++)
	{
		if(m>co[r][i])
		{
			m=co[r][i];
		}
	}

	for(int i=0;i<N;i++)
	{
		if(m==co[r][i])
		{
			s.push_back(i);
		}
	}

t=s.begin();
random_shuffle(s.begin(),s.begin()+s.size());
c=*t;

return c;
}




void update()
{

int p;
for(int i=0;i<N;i++)
{
	p=find(i);
////////////////////Veritcal update	
	for(int j=0;j<N;j++)
	{
		if(i==j){continue;}
		else
		{
			co[j][p]+=1;
		}
	}
///////Diagonal top-left right-bottom
int rr=i,cc=p;

rr=rr-N;
cc=cc-N;

while(rr<N&&cc<N)
{
	if(rr==i&&cc==p){rr++;cc++;}
	else
	{
		if(rr>=0&&cc>=0)
		{
			co[rr][cc]+=1;	
		}
		rr++;cc++;
	}
}
///////Diagonally bottom-left top-right
rr=i+N;cc=p-N;
while(rr>=0&&cc<N)
{
	if(rr==i&&cc==p){rr--;cc++;}
	else
	{
		if(rr<N&&cc>=0)
		{
			co[rr][cc]+=1;	
		}
		rr--;cc++;
	}
}

}

}

int main()
{

for(int i=0;i<N;i++)
{
	qn[i][0]=1;
}

update();

for(int i=0;i<N;i++)
{
	for(int j=0;j<N;j++)
	{
		cout<<qn[i][j]<<" ";
	}
	cout<<endl;
}

cout<<endl<<endl;
for(int i=0;i<N;i++)
{
	for(int j=0;j<N;j++)
	{
		cout<<co[i][j]<<" ";
	}
	cout<<endl;
}


//////////////////////////////////

int q,w,e=50;

while(e--)
{
	for(int i=0;i<N;i++)
	{
		q=mini(i);
		w=find(i);

	//	cout<<" mini find "<<q<<" "<<w<<endl;
		if(w!=q)
		{
			qn[i][q]=1;
			qn[i][w]=0;
			memset(co,0,N*N*sizeof(int));
			update();
		}


	}

}

for(int i=0;i<N;i++)
{
	for(int j=0;j<N;j++)
	{
		if(qn[i][j]==1){cout<<j+1<<" ";break;}
	}
}

cout<<endl;





















cout<<endl<<endl;
for(int i=0;i<N;i++)
{
	for(int j=0;j<N;j++)
	{
		cout<<qn[i][j]<<" ";
	}
	cout<<endl;
}

cout<<endl<<endl;
for(int i=0;i<N;i++)
{
	for(int j=0;j<N;j++)
	{
		cout<<co[i][j]<<" ";
	}
	cout<<endl;
}







return 0;

}