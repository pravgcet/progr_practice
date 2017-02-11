#include<iostream>
using namespace std;
int main()
{
int t,n,i,j,var=1000,tvar,cnt=0,tcnt;
cin>>t;
while(t-->0)
{
	cin>>n;
	cnt=0;
	int *a=new int[n];
	i=0;	
	while(i<n){cin>>a[i];i++;}
	i=0;
	for(i=0;i<n;i++)
	{
		tvar=a[i];
		tcnt=0;
		if(tvar!=0)
		{
			for(j=i;j<n;j++)
			{
				if(a[j]==tvar){a[j]=0;tcnt++;}////update count
		
			}
		if(tcnt>cnt)
			{
			cnt=tcnt;
			var=tvar;
			}		
		else if(tcnt==cnt)
			{
				if(tvar<var)
					{var=tvar;
					  cnt=tcnt;
					}

			}		

		}

	//cout<<var<<" "<<cnt<<endl;

	}


cout<<var<<" "<<cnt<<endl;
}

}
