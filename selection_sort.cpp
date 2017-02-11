void sorting(int *pr,int n)
{
	int sm,t;
	int ind;
	
	{///Sort on x
		for(int j=0;j<n-1;j++)
		{
			sm=pr[j];
			ind=j;
			for(int i=j+1;i<n;i++)
			{
				if(pr[i]<sm)
				{
					sm=pr[i];
					ind=i;
				}
			}
			if(ind!=j)
			{
				t=pr[j];
				pr[j]=pr[ind];
				pr[ind]=t;
			}
		}
	}
}
