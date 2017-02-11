extern  struct xcord *xroot;
extern struct ycord *yroot;
extern float **ar;
extern int n;

using namespace std;

void sorting(int coord,int l,int r,float **pr)
{
	float sm,t;
	int ind;
	if(coord==1)
	{///Sort on x
		for(int j=l;j<=r;j++)
		{
			sm=pr[j][0];
			ind=j;
			for(int i=j+1;i<=r;i++)
			{
				if(pr[i][0]<sm)
				{
					sm=pr[i][0];
					ind=i;
				}
			}
			if(ind!=j)
			{
				t=pr[j][0];
				pr[j][0]=pr[ind][0];
				pr[ind][0]=t;
				t=pr[j][1];
				pr[j][1]=pr[ind][1];
				pr[ind][1]=t;
				t=pr[j][2];
				pr[j][2]=pr[ind][2];
				pr[ind][2]=t;

			}
		}
	}
}
void sortingy(int coord,int l,int r,float **pr)
	{
		float sm,t;
		int ind;
		for(int j=l;j<=r;j++)
		{
			sm=pr[j][1];
			ind=j;
			for(int i=j+1;i<=r;i++)
			{
				if(pr[i][1]<sm)
				{
					sm=pr[i][1];
					ind=i;
				}
			}
			if(ind!=j)
			{
				t=pr[j][0];
				pr[j][0]=pr[ind][0];
				pr[ind][0]=t;
				t=pr[j][1];
				pr[j][1]=pr[ind][1];
				pr[ind][1]=t;
				t=pr[j][2];
				pr[j][2]=pr[ind][2];
				pr[ind][2]=t;

			}
		}
	}

