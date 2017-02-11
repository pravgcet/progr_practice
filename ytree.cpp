#include "treestructure.h"
extern  xcord *xroot;
extern  ycord *yroot ;
extern float **ar;
struct ycord *createytree(struct ycord *var,int l,int r)
{
	int leftr,rightl;
	if(var==NULL)
	{	
		if(l!=r)
		{		leftr=(l+r)/2;
				rightl=((l+r)/2)+1;
				var=(struct ycord*)malloc(sizeof(struct ycord));
				var->lby=l;
				var->rby=r;
				var->rc=createytree(NULL,rightl,r);
				var->lc=createytree(NULL,l,leftr);
				
		}
		else
		{
				var=(struct ycord*)malloc(sizeof(struct ycord));
				var->rc=NULL;
				var->lc=NULL;
				var->lby=l;
				var->rby=r;

		}
		return var;
	}
}