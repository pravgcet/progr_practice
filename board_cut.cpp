#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int mod = (1e+9)+7;

long long int mult(int a, int b)
{
if(a<=100)
{
return (a*b)%mod;
}
else
{
return (2*((mult(a/2,b))%mod))+(a%2)*b;

}

}



int main()
{
int tc,m,n;

    cin>>tc;
    while(tc--)
        {
        cin>>m>>n;
        m--;n--;
        int r[m],c[n];
        for(int i=0;i<m;i++){cin>>r[i];}
        for(int i=0;i<n;i++){cin>>c[i];}
        sort(r,r+m,greater<int>());
        sort(c,c+n,greater<int>());
        int h=1,v=1,rc=0,cc=0;
        long long int cost=0,var;
      /*
        cout<<"sorted arrays are : "<<endl;
        for(int i=0;i<m;i++)
            {
            cout<<r[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++)
            {
            cout<<c[i]<<" ";
        }
        cout<<endl;
        */
        
        while(1)
            {
                if(rc<m&&cc<n)    
            {
            if(r[rc]>c[cc])
                {
                cost+=mult(r[rc],v);;
                cost=cost%mod;
                rc++;h++;
            }
            else if(c[cc]>r[rc])
                {
                //	cout<<"Less than zero"<<endl;
                  cost+=mult(c[cc],h);;
                cost=cost%mod;
                cc++;v++;
   
            }
            else
                {
                //	cout<<"Less than zero"<<r[rc]*v<<endl;
                   cost+=mult(r[rc],v);;
                cost=cost%mod;
                rc++;h++;
                  cost+=mult(c[cc],h);;
                cost=cost%mod;
                cc++;v++;
               }
            }
            else
                {
                break;
            }
     }
        if(rc<m)
            {
            for(int i=rc;i<m;i++)
                {
                   cost+=mult(r[i],v);;
	                cost=cost%mod;
                  }
        }
        if(cc<n)
            {
            for(int i=cc;i<n;i++)
                {
                //	cout<<"Less than zero"<<endl;
                  cost+=mult(c[i],h);;
                   cost=cost%mod;
	  	}
        }
        cout<<cost<<endl;
   }
    return 0;
}

