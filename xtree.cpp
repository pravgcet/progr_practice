#include "treestructure.h"
extern  struct xcord *xroot;
extern  struct ycord *yroot;
extern float **ar;
extern int inx;
extern float height[500];
void searchiny(struct ycord *ytemp,float y1,float y2,struct xcord *xtemp);
int travw(struct xcord *re);
int travwy(struct ycord *re,struct xcord *rt);
struct xcord *creatextree(struct xcord *var,int l,int r)
{
	int leftr,rightl;
	if(var==NULL)
	{	
		if(l!=r)
		{		leftr=(l+r)/2;
				rightl=((l+r)/2)+1;
				var=(struct xcord*)malloc(sizeof(struct xcord));
				var->lbx=l;
				var->rbx=r;
				var->rc=creatextree(NULL,rightl,r);
				var->lc=creatextree(NULL,l,leftr);
				
		}
		else
		{
				var=(struct xcord*)malloc(sizeof(struct xcord));
				var->rc=NULL;
				var->lc=NULL;
				var->lbx=l;
				var->rbx=r;

		}
		return var;
	}
	}


void searchandgiveresult(float x1,float x2,float y1,float y2,struct xcord *temp)
{
//	std::cout<<" x1  x2  y1  y2 : "<<x1<<"  "<<x2<<"  "<<y1<<"  "<<y2<<std::endl;
//std::cout<<ar[temp->lbx][0]<<"  "<<ar[temp->rbx][0]<<std::endl;
if(x1<=ar[temp->lbx][0]&&x2>=ar[temp->rbx][0])
{
//	std::cout<<"In if Condition\n";
	cout<<"X found , Going for Y (lbx): "<<ar[temp->lbx][0]<<"  "<<ar[temp->lbx][1]<<"  "<<ar[temp->lbx][2]<<endl;
	cout<<"X found , Going for Y (rbx): "<<ar[temp->rbx][0]<<"  "<<ar[temp->rbx][1]<<"  "<<ar[temp->rbx][2]<<endl;
	//int u=travwy(temp->yc,temp);
	searchiny(temp->yc,y1,y2,temp);

}
else
{
	if(!(temp->lc==NULL&&temp->rc==NULL))
	{	
	searchandgiveresult(x1,x2,y1,y2,temp->lc);
	searchandgiveresult(x1,x2,y1,y2,temp->rc);
	}
}
}

void searchiny(struct ycord *ytemp,float y1,float y2,struct xcord *xtemp)
{
if(y1<=(xtemp->yarray)[ytemp->lby][1]&&y2>=(xtemp->yarray)[ytemp->lby][1])
{
	if(ytemp->lby!=ytemp->rby)
	{
		for(int i=ytemp->lby;i<=ytemp->rby;i++)
		{
			std::cout<<"Updating H table :"<<(xtemp->yarray)[i][2]<<"\n";
			height[inx++]=(xtemp->yarray)[i][2];
			cout<<"inx is "<<inx<<std::endl;
		}
	}
	else
	{
		std::cout<<"Updating H table :"<<(xtemp->yarray)[ytemp->lby][2]<<"\n";
			height[inx++]=(xtemp->yarray)[ytemp->lby][2];
			cout<<"inx is "<<inx<<std::endl;

	}
	//int u=travwy(ytemp);
}
else
	{
		if(!(ytemp->lc==NULL&&ytemp->rc==NULL))
		{
		searchiny(ytemp->lc,y1,y2,xtemp);
		searchiny(ytemp->rc,y1,y2,xtemp);
		}
}
}

int travw(struct xcord *re)
{
		if(re==NULL)
		{
			return 1;
		}
		travw(re->lc);
		{
			for(int i=re->lbx;i<=re->rbx;i++)
		{
			std::cout<<ar[i][0]<<"  ";
		}
		std::cout<<std::endl;
		}
		travw(re->rc);
}

int travwy(struct ycord *re,struct xcord *rt)
{
		if(re==NULL)
		{
			return 1;
		}
		travwy(re->lc,rt);
		{
			for(int i=re->lby;i<=re->rby;i++)
		{
			std::cout<<(rt->yarray)[i][1]<<"  ";
		}
		std::cout<<std::endl;
		}
		travwy(re->rc,rt);
}


/*
else if(x1<=ar[temp->lbx][0]&&!(x2>=ar[temp->rbx]))
{
		
}
else if(!(x1<=ar[temp->lbx][0])&&(x2>=ar[temp->rbx]))
{
		searchandgiveresult(x1,(x1+x2)/2,y1,y2,temp->lc);
		searchandgiveresult(((x1+x2)/2)+1,x2,y1,y2,temp->rc);
}

			{
				
				
			}
	}
}
else
{














}
else if(temp->rbx==n && x2==ar[temp-n)
{
	if(x1==temp[temp->lbx][0])
	{
		searchiny(temp->yc);
	}
	else if(x1>ar[temp->lbx])
	{
		searchandgiveresult(x1,(x1+x2)/2,y1,y2,temp->lc);
		searchandgiveresult(((x1+x2)/2)+1,x2,y1,y2,temp->rc);

	}
}

if(x1==ar[temp->lbx][0]&&x1>ar[temp->lbx-1])
{
	
	if(x2==ar[temp->rbx][0]&&)
}




}






}	
*/