#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int mat[101][101],ar[101],degree[101];

int vertices(int v)
    {
    if(mat[v][0]==0)
        {
        return 1;
    }
    else
        {
        int sum=1,val;
        for(int i=0;i<ar[v];i++)
            {
            if(degree[mat[v][i]]==0)
            {
                val=vertices(mat[v][i]);
                sum+=val;
                degree[mat[v][i]]=val;
            }
            else
                {
                sum+=degree[mat[v][i]];
            }
        }
        return sum;
    }
}



int main()
{
int v,e,to,fr;
    cin>>v>>e;
    memset(mat,0,sizeof(mat));
    memset(ar,0,sizeof(ar));
        memset(degree,0,sizeof(degree));
    for(int i=0;i<e;i++)
        {
        cin>>fr>>to;
        mat[to][ar[to]]=fr;
        ar[to]++;
    }
    
    for(int i=0;i<v+1;i++)
        {
        for(int j=0;j<ar[i];j++)
            {
            cout<<mat[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    int sum=1,val;
    for(int i=0;i<ar[1];i++)
            {
               val=vertices(mat[1][i]);
               cout<<"val returned is "<<val<<" for "<<mat[1][i]<<endl;
                sum+=val;
                degree[mat[1][i]]=val;
            }
     degree[1]=sum;       
    int cntr=0;
        for(int i=1;i<v+1;i++)
        {
        cout<<i<<"  "<<degree[i]<<endl;
        if(degree[i]%2==0)
        {
        cntr++;
        }
        }
        
        cout<<cntr-1;
    
    
    return 0;
}

