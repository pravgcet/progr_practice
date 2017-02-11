extern  struct xcord *xroot;
extern struct ycord *yroot;
extern float **ar;
extern int n;

using namespace std;
void merge(float **pr,int xy,int l,int r,int k);

void sorting(int xy,int l,int r,float **pr)
{
	int k;
	if(l<r)
	{
	k=(l+r)/2;
	sorting(xy,l,k,pr);
	sorting(xy,k+1,r,pr);
	merge(pr,xy,l,r,k);
	}
}

void merge(float **pr,int xy,int l,int r,int k)
{

	int q1=k-l+1,q2=r-k;
	int ii,jj;
	float **arry=(float **)malloc((q1+q2)*sizeof(float *));
	for(int i=0;i<q1+q2;i++)
	{
		arry[i]=(float*)malloc(3*sizeof(float));
	}
	ii=l;
	jj=k+1;
	for(int i=0;i<q1+q2;i++)
	{
		if(jj<=r)
		{
			if(ii<=k)
			{
				if((pr[ii][xy]>pr[jj][xy]))
				{	
					arry[i][0]=pr[jj][0];
					arry[i][1]=pr[jj][1];
					arry[i][2]=pr[jj][2];
					jj++;
				}
				else if(pr[ii][xy]<pr[jj][xy])
					{
						arry[i][0]=pr[ii][0];
						arry[i][1]=pr[ii][1];
						arry[i][2]=pr[ii][2];
						ii++;
					}
					else 
					{
						arry[i][0]=pr[jj][0];
						arry[i][1]=pr[jj][1];
						arry[i][2]=pr[jj][2];
						ii++;jj++;
					}
			}
			else
			{
					arry[i][0]=pr[jj][0];
					arry[i][1]=pr[jj][1];
					arry[i][2]=pr[jj][2];
				jj++;
			}
		}
		else if(ii<=k)
		{
			arry[i][0]=pr[ii][0];
			arry[i][1]=pr[ii][1];
			arry[i][2]=pr[ii][2];
			ii++;
		}
	}
	for(int i=l;i<=r;i++)
	{
		pr[i][0]=arry[i-l][0];
		pr[i][1]=arry[i-l][1];
		pr[i][2]=arry[i-l][2];
	}
}
