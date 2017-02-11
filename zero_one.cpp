#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int fact(int a)
    {
    if(a<=1)
        {
        return 1;
    }
    else
        return (a*fact(a-1))%1000000007;
}
int main()
{
   int t,n,m;
   double nu=1,dn=1,dm,ty;
   n=19;m=10;
    //cin>>t;
    //while(t--)
        {
      //  cin>>n>>m;
        m--;
        ty=n+m;
        if(n>m)
        {
            dm=fact(m);
            for(int i=ty;i>n;i--)
            {
                nu=(nu*ty);
                cout<<i<<endl;
            }
            
            cout<<"nu : "<<nu<<endl;
            cout<<"m : "<<dm<<endl;
            cout<<(nu/dm)<<endl;

        }
        else
        {
            for(int i=ty;i>m;i--)
            {
                dn=(dn*ty);
            }
            dn=fact(n);
            cout<<(nu/dn)<<endl;

        }
/*
    nu=fact(n+m);
    cout<<"n+m : "<<nu<<endl;
        dn=fact(n);
        cout<<"n : "<<dn<<endl;
        dm=fact(m);
        cout<<"m : "<<dm<<endl
        cout<<nu/(dn*dm)<<endl;
  */  
    }
    return 0;
}

