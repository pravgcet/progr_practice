#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <pthread.h>
using namespace std;

struct data
{
int i,k;
long long int *p;
};

void *result(void *arg);

int main()
{
int n,k,r;
cin>>n>>k;
long long int *p=new long long int [n];
for(int i=0;i<n;i++)
{
cin>>p[i];
}
r=n-k+1;
pthread_t threads[r];
struct data dt[r];
int st;
for(int i=0;i<r;i++)
{

dt[i].i=i;
dt[i].k=k;
dt[i].p=p;
st=pthread_create(&threads[i],NULL,result,(void *)&dt[i]);

if(st)
    {
    cout<<"Error in creating thread\n";
}
else
{
cout<<"Thread created\n";

}

}

//pthread_exit(NULL);
    return 0;
}

void *result(void *arg)
{
struct data *dta;

dta=(struct data *)arg;
int i=dta->i;
int k=dta->k;
long long int *p=dta->p;

    int in=0,de=0;
long long int igr=0,dgr=0;
	for(int j=i+1;j<k+i;j++)
	{
		if(p[j]>=p[j-1])
		{
			in++;
//			cout<<"in  :"<<in<<endl;
		}
		else if((p[j]<p[j-1])&&in!=0)
		{
			igr+=(in*(in+1))/2;
//			cout<<"igr  : "<<igr<<endl;
			in=0;
		}
	
		if(p[j]<=p[j-1])
		{
			de++;
		}
		else if((p[j]>p[j-1])&&de!=0)
		{
			dgr+=(de*(de+1))/2;
			de=0;
		}
	
	}
		dgr+=(de*(de+1))/2;
		igr+=(in*(in+1))/2;
		cout<<(igr-dgr)<<endl;

	pthread_exit(NULL);

}



